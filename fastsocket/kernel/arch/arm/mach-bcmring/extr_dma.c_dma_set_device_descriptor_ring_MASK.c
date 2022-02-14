
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prevNumBytes; scalar_t__ prevDstData; scalar_t__ prevSrcData; int ring; } ;
typedef size_t DMA_Device_t ;
typedef TYPE_1__ DMA_DeviceAttribute_t ;
typedef int DMA_DescriptorRing_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;

int FUNC_2(DMA_Device_t VAR_2,
       DMA_DescriptorRing_t *VAR_3
    ) {
 DMA_DeviceAttribute_t *VAR_4;

 if (!FUNC_0(VAR_2)) {
  return -VAR_1;
 }
 VAR_4 = &VAR_0[VAR_2];



 FUNC_1(&VAR_4->ring);

 if (VAR_3 != ((void*)0)) {


  VAR_4->ring = *VAR_3;
 }




 VAR_4->prevSrcData = 0;
 VAR_4->prevDstData = 0;
 VAR_4->prevNumBytes = 0;

 return 0;
}
