
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nSize; int nAlloc; int ** pData; } ;
typedef int STableDataBlocks ;
typedef TYPE_1__ SDataBlockList ;


 int FUNC_0 (int **,int ,int) ;
 int ** FUNC_1 (int **,int) ;

void FUNC_2(SDataBlockList* VAR_0, STableDataBlocks* VAR_1) {
  if (VAR_0->nSize >= VAR_0->nAlloc) {
    VAR_0->nAlloc = VAR_0->nAlloc << 1;
    VAR_0->pData = FUNC_1(VAR_0->pData, sizeof(void*) * (size_t)VAR_0->nAlloc);


    FUNC_0(VAR_0->pData + VAR_0->nSize, 0, sizeof(void*) * (VAR_0->nAlloc - VAR_0->nSize));
  }

  VAR_0->pData[VAR_0->nSize++] = VAR_1;
}
