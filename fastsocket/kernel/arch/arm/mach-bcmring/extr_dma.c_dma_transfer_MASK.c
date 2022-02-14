
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ dmacHw_TRANSFER_TYPE_e ;
typedef int dma_addr_t ;
struct TYPE_10__ {scalar_t__ transferType; } ;
struct TYPE_9__ {size_t devType; int dmacHwHandle; } ;
struct TYPE_7__ {int virtAddr; } ;
struct TYPE_8__ {size_t numBytes; TYPE_1__ ring; TYPE_4__ config; int transferStartTime; } ;
typedef int DMA_Handle_t ;
typedef TYPE_2__ DMA_DeviceAttribute_t ;
typedef TYPE_3__ DMA_Channel_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,size_t) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int FUNC_3 () ;

int FUNC_4(DMA_Handle_t VAR_3,
   dmacHw_TRANSFER_TYPE_e VAR_4,
   dma_addr_t VAR_5,
   dma_addr_t VAR_6,
   size_t VAR_7
    ) {
 DMA_Channel_t *VAR_8;
 DMA_DeviceAttribute_t *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_0(VAR_3);
 if (VAR_8 == ((void*)0)) {
  return -VAR_2;
 }

 VAR_9 = &VAR_0[VAR_8->devType];

 if (VAR_9->config.transferType != VAR_4) {
  return -VAR_1;
 }





 {
  VAR_10 =
       FUNC_1(VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7);
  if (VAR_10 != 0) {
   return VAR_10;
  }
 }



 VAR_9->numBytes = VAR_7;
 VAR_9->transferStartTime = FUNC_3();

 FUNC_2(VAR_8->dmacHwHandle, &VAR_9->config,
    VAR_9->ring.virtAddr);



 return 0;
}
