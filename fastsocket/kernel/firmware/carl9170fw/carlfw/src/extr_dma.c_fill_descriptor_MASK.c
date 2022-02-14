
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct dma_desc {int * nextAddr; int * dataAddr; struct dma_desc* lastAddr; scalar_t__ totalLen; int dataSize; scalar_t__ ctrl; int status; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dma_desc *VAR_1, uint16_t VAR_2, uint8_t *VAR_3)
{
 VAR_1->status = VAR_0;
 VAR_1->ctrl = 0;
 VAR_1->dataSize = VAR_2;
 VAR_1->totalLen = 0;
 VAR_1->lastAddr = VAR_1;
 VAR_1->dataAddr = VAR_3;
 VAR_1->nextAddr = ((void*)0);
}
