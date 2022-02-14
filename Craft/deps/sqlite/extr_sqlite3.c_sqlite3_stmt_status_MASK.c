
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {int* aCounter; } ;
typedef TYPE_1__ Vdbe ;



int FUNC_0(sqlite3_stmt *VAR_0, int VAR_1, int VAR_2){
  Vdbe *VAR_3 = (Vdbe*)VAR_0;
  int VAR_4 = VAR_3->aCounter[VAR_1-1];
  if( VAR_2 ) VAR_3->aCounter[VAR_1-1] = 0;
  return VAR_4;
}
