
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ physAddr; int * virtAddr; scalar_t__ descriptorsAllocated; scalar_t__ bytesAllocated; } ;
typedef TYPE_1__ DMA_DescriptorRing_t ;


 int FUNC_0 (int *,scalar_t__,int *,scalar_t__) ;

void FUNC_1(DMA_DescriptorRing_t *VAR_0
    ) {
 if (VAR_0->virtAddr != ((void*)0)) {
  FUNC_0(((void*)0),
          VAR_0->bytesAllocated,
          VAR_0->virtAddr, VAR_0->physAddr);
 }

 VAR_0->bytesAllocated = 0;
 VAR_0->descriptorsAllocated = 0;
 VAR_0->virtAddr = ((void*)0);
 VAR_0->physAddr = 0;
}
