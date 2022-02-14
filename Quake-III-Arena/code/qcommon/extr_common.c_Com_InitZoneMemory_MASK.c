
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4( void ) {
 cvar_t *VAR_6;

 VAR_6 = FUNC_1( "com_zoneMegs", VAR_2, VAR_1 | VAR_0 );

 if ( VAR_6->integer < 20 ) {
  VAR_5 = 1024 * 1024 * 16;
 } else {
  VAR_5 = VAR_6->integer * 1024 * 1024;
 }


 VAR_4 = FUNC_3( VAR_5, 1 );
 if ( !VAR_4 ) {
  FUNC_0( VAR_3, "Zone data failed to allocate %i megs", VAR_5 / (1024*1024) );
 }
 FUNC_2( VAR_4, VAR_5 );

}
