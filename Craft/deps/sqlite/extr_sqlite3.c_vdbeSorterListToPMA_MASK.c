
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {scalar_t__ nInMemory; scalar_t__ pRecord; scalar_t__ pTemp1; scalar_t__ iWriteOff; scalar_t__ nPMA; } ;
typedef TYPE_1__ VdbeSorter ;
struct TYPE_8__ {TYPE_1__* pSorter; } ;
typedef TYPE_2__ VdbeCursor ;
struct TYPE_9__ {scalar_t__ nVal; int pVal; struct TYPE_9__* pNext; } ;
typedef TYPE_3__ SorterRecord ;
typedef int FileWriter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_9(sqlite3 *VAR_1, const VdbeCursor *VAR_2){
  int VAR_3 = VAR_0;
  VdbeSorter *VAR_4 = VAR_2->pSorter;
  FileWriter VAR_5;

  FUNC_5(&VAR_5, 0, sizeof(FileWriter));

  if( VAR_4->nInMemory==0 ){
    FUNC_0( VAR_4->pRecord==0 );
    return VAR_3;
  }

  VAR_3 = FUNC_8(VAR_2);


  if( VAR_3==VAR_0 && VAR_4->pTemp1==0 ){
    VAR_3 = FUNC_7(VAR_1, &VAR_4->pTemp1);
    FUNC_0( VAR_3!=VAR_0 || VAR_4->pTemp1 );
    FUNC_0( VAR_4->iWriteOff==0 );
    FUNC_0( VAR_4->nPMA==0 );
  }

  if( VAR_3==VAR_0 ){
    SorterRecord *VAR_6;
    SorterRecord *VAR_7 = 0;

    FUNC_2(VAR_1, VAR_4->pTemp1, &VAR_5, VAR_4->iWriteOff);
    VAR_4->nPMA++;
    FUNC_4(&VAR_5, VAR_4->nInMemory);
    for(VAR_6=VAR_4->pRecord; VAR_6; VAR_6=VAR_7){
      VAR_7 = VAR_6->pNext;
      FUNC_4(&VAR_5, VAR_6->nVal);
      FUNC_3(&VAR_5, VAR_6->pVal, VAR_6->nVal);
      FUNC_6(VAR_1, VAR_6);
    }
    VAR_4->pRecord = VAR_6;
    VAR_3 = FUNC_1(VAR_1, &VAR_5, &VAR_4->iWriteOff);
  }

  return VAR_3;
}
