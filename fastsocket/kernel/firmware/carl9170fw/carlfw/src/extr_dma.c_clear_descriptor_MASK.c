
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {struct dma_desc* nextAddr; int * dataAddr; struct dma_desc* lastAddr; scalar_t__ totalLen; scalar_t__ dataSize; scalar_t__ ctrl; int status; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dma_desc *VAR_1)
{
 VAR_1->status = VAR_0;
 VAR_1->ctrl = 0;
 VAR_1->dataSize = 0;
 VAR_1->totalLen = 0;
 VAR_1->lastAddr = VAR_1;
 VAR_1->dataAddr = ((void*)0);
 VAR_1->nextAddr = VAR_1;
}
