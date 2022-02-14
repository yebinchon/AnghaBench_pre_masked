
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* draw ) () ;int menu; int style; scalar_t__* lines; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int,int,int ) ;
 int FUNC_2 (int,int,scalar_t__,int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_3,VAR_4;

 FUNC_1( 142, 118, 359, 256, VAR_0 );

 VAR_4 = 188;
 for(VAR_3=0; VAR_2.lines[VAR_3]; VAR_3++)
 {
  FUNC_2( 320, VAR_4, VAR_2.lines[VAR_3], VAR_2.style, VAR_1 );
  VAR_4 += 18;
 }

 FUNC_0( &VAR_2.menu );

 if( VAR_2.draw ) {
  VAR_2.draw();
 }
}
