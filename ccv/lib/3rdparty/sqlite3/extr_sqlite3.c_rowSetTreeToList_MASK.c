
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RowSetEntry {scalar_t__ pRight; struct RowSetEntry* pLeft; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
  struct RowSetEntry *VAR_0,
  struct RowSetEntry **VAR_1,
  struct RowSetEntry **VAR_2
){
  FUNC_0( VAR_0!=0 );
  if( VAR_0->pLeft ){
    struct RowSetEntry *VAR_3;
    FUNC_1(VAR_0->pLeft, VAR_1, &VAR_3);
    VAR_3->pRight = VAR_0;
  }else{
    *VAR_1 = VAR_0;
  }
  if( VAR_0->pRight ){
    FUNC_1(VAR_0->pRight, &VAR_0->pRight, VAR_2);
  }else{
    *VAR_2 = VAR_0;
  }
  FUNC_0( (*VAR_2)->pRight==0 );
}
