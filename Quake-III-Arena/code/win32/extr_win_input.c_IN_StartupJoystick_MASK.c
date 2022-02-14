
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int integer; } ;
struct TYPE_6__ {int dwSize; int wCaps; int wMaxAxes; int wNumAxes; int wMaxButtons; int wNumButtons; int szRegKey; int szOEMVxD; int szPname; int dwFlags; } ;
struct TYPE_7__ {int id; int avail; scalar_t__ oldpovstate; scalar_t__ oldbuttonstate; TYPE_1__ jc; TYPE_1__ ji; } ;
typedef scalar_t__ MMRESULT ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5 (void) {
 int VAR_7;
 MMRESULT VAR_8;


 VAR_4.avail = VAR_5;

 if (! VAR_3->integer ) {
  FUNC_1 ("Joystick is not active.\n");
  return;
 }


 if ((VAR_7 = FUNC_3 ()) == 0)
 {
  FUNC_1 ("joystick not found -- driver not present\n");
  return;
 }


 VAR_8 = 0;
 for (VAR_4.id=0 ; VAR_4.id<VAR_7 ; VAR_4.id++)
 {
  FUNC_0 (&VAR_4.ji, 0, sizeof(VAR_4.ji));
  VAR_4.ji.dwSize = sizeof(VAR_4.ji);
  VAR_4.ji.dwFlags = VAR_2;

  if ((VAR_8 = FUNC_4 (VAR_4.id, &VAR_4.ji)) == VAR_1)
   break;
 }


 if (VAR_8 != VAR_1)
 {
  FUNC_1 ("joystick not found -- no valid joysticks (%x)\n", VAR_8);
  return;
 }



 FUNC_0 (&VAR_4.jc, 0, sizeof(VAR_4.jc));
 if ((VAR_8 = FUNC_2 (VAR_4.id, &VAR_4.jc, sizeof(VAR_4.jc))) != VAR_1)
 {
  FUNC_1 ("joystick not found -- invalid joystick capabilities (%x)\n", VAR_8);
  return;
 }

 FUNC_1( "Joystick found.\n" );
 FUNC_1( "Pname: %s\n", VAR_4.jc.szPname );
 FUNC_1( "OemVxD: %s\n", VAR_4.jc.szOEMVxD );
 FUNC_1( "RegKey: %s\n", VAR_4.jc.szRegKey );

 FUNC_1( "Numbuttons: %i / %i\n", VAR_4.jc.wNumButtons, VAR_4.jc.wMaxButtons );
 FUNC_1( "Axis: %i / %i\n", VAR_4.jc.wNumAxes, VAR_4.jc.wMaxAxes );
 FUNC_1( "Caps: 0x%x\n", VAR_4.jc.wCaps );
 if ( VAR_4.jc.wCaps & VAR_0 ) {
  FUNC_1( "HASPOV\n" );
 } else {
  FUNC_1( "no POV\n" );
 }


 VAR_4.oldbuttonstate = 0;
 VAR_4.oldpovstate = 0;


 VAR_4.avail = VAR_6;
}
