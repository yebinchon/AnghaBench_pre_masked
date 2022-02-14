
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__ pc; scalar_t__ magic; } ;
typedef TYPE_1__ Vdbe ;


 scalar_t__ VAR_0 ;

int FUNC_0(sqlite3_stmt *VAR_1){
  Vdbe *VAR_2 = (Vdbe*)VAR_1;
  return VAR_2!=0 && VAR_2->pc>0 && VAR_2->magic==VAR_0;
}
