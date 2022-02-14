
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ Mem ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(sqlite3_value *VAR_1){
  Mem *VAR_2 = (Mem*)VAR_1;
  if( VAR_2->type==VAR_0 ){
    FUNC_0(VAR_2);
    FUNC_1(VAR_2);
  }
  return VAR_2->type;
}
