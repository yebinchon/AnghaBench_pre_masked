
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; } ;
typedef TYPE_1__ sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_0){
  sqlite3_value *VAR_1;
  VAR_1 = (sqlite3_value *)FUNC_1(VAR_0, 0);
  if( VAR_1 ){
    if( VAR_1->flags ){
      FUNC_2(VAR_0, VAR_1);
    }
    FUNC_0(VAR_1);
  }
}
