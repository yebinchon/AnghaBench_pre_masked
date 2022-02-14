
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwPlatformId; int dwMajorVersion; } ;
struct TYPE_8__ {int hWnd; TYPE_1__ osversion; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {void* mouseInitialized; void* mouseStartupDelayed; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_2__ VAR_5 ;

void FUNC_4( void )
{
 VAR_5.mouseInitialized = VAR_3;
  VAR_5.mouseStartupDelayed = VAR_3;

 if ( VAR_2->integer == 0 ) {
  FUNC_0 ("Mouse control not active.\n");
  return;
 }


 if ( ( VAR_1.osversion.dwPlatformId == VAR_0 ) &&
   ( VAR_1.osversion.dwMajorVersion == 4 ) )
 {
  FUNC_0 ("Disallowing DirectInput on NT 4.0\n");
  FUNC_1( "in_mouse", "-1" );
 }

 if ( VAR_2->integer == -1 ) {
  FUNC_0 ("Skipping check for DirectInput\n");
 } else {
    if (!VAR_1.hWnd)
    {
      FUNC_0 ("No window for DirectInput mouse init, delaying\n");
      VAR_5.mouseStartupDelayed = VAR_4;
      return;
    }
  if ( FUNC_2() ) {
     VAR_5.mouseInitialized = VAR_4;
   return;
  }
  FUNC_0 ("Falling back to Win32 mouse support...\n");
 }
 VAR_5.mouseInitialized = VAR_4;
 FUNC_3();
}
