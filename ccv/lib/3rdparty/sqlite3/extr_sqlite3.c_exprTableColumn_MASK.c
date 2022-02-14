
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int i16 ;
typedef int Table ;
struct TYPE_4__ {int iTable; int iColumn; int * pTab; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static Expr *FUNC_1(
  sqlite3 *VAR_1,
  Table *VAR_2,
  int VAR_3,
  i16 VAR_4
){
  Expr *VAR_5 = FUNC_0(VAR_1, VAR_0, 0);
  if( VAR_5 ){
    VAR_5->pTab = VAR_2;
    VAR_5->iTable = VAR_3;
    VAR_5->iColumn = VAR_4;
  }
  return VAR_5;
}
