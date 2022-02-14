
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RowSetEntry {struct RowSetEntry* pRight; } ;
typedef int aBucket ;


 int FUNC_0 (struct RowSetEntry**,int ,int) ;
 struct RowSetEntry* FUNC_1 (struct RowSetEntry*,struct RowSetEntry*) ;

__attribute__((used)) static struct RowSetEntry *FUNC_2(struct RowSetEntry *VAR_0){
  unsigned int VAR_1;
  struct RowSetEntry *VAR_2, *VAR_3[40];

  FUNC_0(VAR_3, 0, sizeof(VAR_3));
  while( VAR_0 ){
    VAR_2 = VAR_0->pRight;
    VAR_0->pRight = 0;
    for(VAR_1=0; VAR_3[VAR_1]; VAR_1++){
      VAR_0 = FUNC_1(VAR_3[VAR_1], VAR_0);
      VAR_3[VAR_1] = 0;
    }
    VAR_3[VAR_1] = VAR_0;
    VAR_0 = VAR_2;
  }
  VAR_0 = 0;
  for(VAR_1=0; VAR_1<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_1++){
    VAR_0 = FUNC_1(VAR_0, VAR_3[VAR_1]);
  }
  return VAR_0;
}
