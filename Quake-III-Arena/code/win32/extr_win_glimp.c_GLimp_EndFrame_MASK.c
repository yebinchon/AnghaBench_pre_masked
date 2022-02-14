
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ driverType; int stereoEnabled; } ;
struct TYPE_11__ {int hDC; } ;
struct TYPE_10__ {int string; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; scalar_t__ modified; } ;
struct TYPE_7__ {int (* Error ) (int ,char*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int ,char*) ;

void FUNC_6 (void)
{



 if ( VAR_7->modified ) {
  VAR_7->modified = VAR_4;

  if ( !VAR_2.stereoEnabled ) {
   if ( &FUNC_4 ) {
    FUNC_4( VAR_7->integer );
   }
  }
 }



 if ( FUNC_1( VAR_5->string, "GL_FRONT" ) != 0 )
 {
  if ( VAR_2.driverType > VAR_1 )
  {
   if ( !FUNC_3( VAR_3.hDC ) )
   {
    VAR_8.Error( VAR_0, "GLimp_EndFrame() - SwapBuffers() failed!\n" );
   }
  }
  else
  {
   FUNC_2( VAR_3.hDC );
  }
 }


 FUNC_0( VAR_6->integer );
}
