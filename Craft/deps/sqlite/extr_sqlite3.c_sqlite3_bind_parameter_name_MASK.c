
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {int nzVar; char const** azVar; } ;
typedef TYPE_1__ Vdbe ;



const char *FUNC_0(sqlite3_stmt *VAR_0, int VAR_1){
  Vdbe *VAR_2 = (Vdbe*)VAR_0;
  if( VAR_2==0 || VAR_1<1 || VAR_1>VAR_2->nzVar ){
    return 0;
  }
  return VAR_2->azVar[VAR_1-1];
}
