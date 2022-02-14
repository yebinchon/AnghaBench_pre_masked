
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* question; int style; int slashX; int (* draw ) () ;int menu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int,int,int ) ;
 int FUNC_2 (int,int,char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4( void ) {
 FUNC_1( 142, 118, 359, 256, VAR_0 );
 FUNC_2( 320, 204, VAR_4.question, VAR_4.style, VAR_3 );
 FUNC_2( VAR_4.slashX, 265, "/", VAR_2|VAR_1, VAR_3 );

 FUNC_0( &VAR_4.menu );

 if( VAR_4.draw ) {
  VAR_4.draw();
 }
}
