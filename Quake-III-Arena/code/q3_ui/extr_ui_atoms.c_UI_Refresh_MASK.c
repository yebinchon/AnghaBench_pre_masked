
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* draw ) () ;scalar_t__ showlogo; scalar_t__ fullscreen; } ;
struct TYPE_3__ {int frametime; int realtime; scalar_t__ cursory; scalar_t__ cursorx; scalar_t__ debug; int cursor; void* firstdraw; TYPE_2__* activemenu; int menuBackNoLogoShader; int menuBackShader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;

void FUNC_10( int VAR_11 )
{
 VAR_10.frametime = VAR_11 - VAR_10.realtime;
 VAR_10.realtime = VAR_11;

 if ( !( FUNC_7() & VAR_1 ) ) {
  return;
 }

 FUNC_5();

 if ( VAR_10.activemenu )
 {
  if (VAR_10.activemenu->fullscreen)
  {

   if( VAR_10.activemenu->showlogo ) {
    FUNC_1( 0, 0, VAR_3, VAR_2, VAR_10.menuBackShader );
   }
   else {
    FUNC_1( 0, 0, VAR_3, VAR_2, VAR_10.menuBackNoLogoShader );
   }
  }

  if (VAR_10.activemenu->draw)
   VAR_10.activemenu->draw();
  else
   FUNC_0( VAR_10.activemenu );

  if( VAR_10.firstdraw ) {
   FUNC_3( 0, 0 );
   VAR_10.firstdraw = VAR_9;
  }
 }


 FUNC_4( ((void*)0) );
 FUNC_1( VAR_10.cursorx-16, VAR_10.cursory-16, 32, 32, VAR_10.cursor);


 if (VAR_10.debug)
 {

  FUNC_2( 0, 0, FUNC_9("(%d,%d)",VAR_10.cursorx,VAR_10.cursory), VAR_4|VAR_5, VAR_6 );
 }





 if (VAR_7)
 {
  FUNC_8( VAR_8, VAR_0 );
  VAR_7 = VAR_9;
 }
}
