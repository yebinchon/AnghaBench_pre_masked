
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devHandler; void* userData; } ;
typedef size_t DMA_Device_t ;
typedef int DMA_DeviceHandler_t ;
typedef TYPE_1__ DMA_DeviceAttribute_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(DMA_Device_t VAR_2,
      DMA_DeviceHandler_t VAR_3,
      void *VAR_4
    ) {
 DMA_DeviceAttribute_t *VAR_5;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_2)) {
  return -VAR_1;
 }
 VAR_5 = &VAR_0[VAR_2];

 FUNC_2(VAR_6);

 VAR_5->userData = VAR_4;
 VAR_5->devHandler = VAR_3;

 FUNC_1(VAR_6);

 return 0;
}
