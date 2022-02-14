
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_4__ {int actPhoneme; int busy; int actIntonation; TYPE_1__* intf; int iDelay; } ;
struct TYPE_3__ {int (* BusyCallback ) (int) ;} ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_2__ VAR_1 ;

void FUNC_4(UBYTE VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2 & 0x3F;
 VAR_4 = (VAR_2 >> 6)&0x03;







 FUNC_0(("Votrax SC-01: %s at intonation %d\n", VAR_0[VAR_3], VAR_4));
 FUNC_1(VAR_3, VAR_4);

 if ( VAR_1.actPhoneme==0x3f )
  VAR_1.iDelay = FUNC_3(20);

 if ( !VAR_1.busy )
 {
  VAR_1.busy = 1;
  if ( VAR_1.intf->BusyCallback )
   (*VAR_1.intf->BusyCallback)(VAR_1.busy);
 }

 VAR_1.actPhoneme = VAR_3;
 VAR_1.actIntonation = VAR_4;
}
