
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int nAllocSize; int ordered; int prevTS; scalar_t__ pData; } ;
typedef TYPE_1__ STableDataBlocks ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

STableDataBlocks* FUNC_1(int32_t VAR_1) {
  STableDataBlocks* VAR_2 = (STableDataBlocks*)FUNC_0(1, sizeof(STableDataBlocks));
  VAR_2->nAllocSize = (uint32_t)VAR_1;
  VAR_2->pData = FUNC_0(1, VAR_2->nAllocSize);
  VAR_2->ordered = 1;
  VAR_2->prevTS = VAR_0;
  return VAR_2;
}
