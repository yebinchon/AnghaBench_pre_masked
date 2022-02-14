
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

sqlite3_value *FUNC_2(sqlite3_stmt *VAR_2, int VAR_3){
  Mem *VAR_4 = FUNC_1(VAR_2, VAR_3);
  if( VAR_4->flags&VAR_1 ){
    VAR_4->flags &= ~VAR_1;
    VAR_4->flags |= VAR_0;
  }
  FUNC_0(VAR_2);
  return (sqlite3_value *)VAR_4;
}
