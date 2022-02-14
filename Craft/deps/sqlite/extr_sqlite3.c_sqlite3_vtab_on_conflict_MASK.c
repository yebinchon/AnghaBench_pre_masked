
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vtabOnConflict; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int) ;

int FUNC_1(sqlite3 *VAR_5){
  static const unsigned char VAR_6[] = {
    128, 132, 131, 130, 129
  };
  FUNC_0( VAR_4==1 && VAR_0==2 && VAR_1==3 );
  FUNC_0( VAR_2==4 && VAR_3==5 );
  FUNC_0( VAR_5->vtabOnConflict>=1 && VAR_5->vtabOnConflict<=5 );
  return (int)VAR_6[VAR_5->vtabOnConflict-1];
}
