
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t devType; int dmacHwHandle; } ;
struct TYPE_6__ {int virtAddr; } ;
struct TYPE_7__ {TYPE_1__ ring; int config; } ;
typedef int DMA_Handle_t ;
typedef TYPE_2__ DMA_DeviceAttribute_t ;
typedef TYPE_3__ DMA_Channel_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

int FUNC_2(DMA_Handle_t VAR_2)
{
 DMA_Channel_t *VAR_3;
 DMA_DeviceAttribute_t *VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_4 = &VAR_0[VAR_3->devType];

 FUNC_1(VAR_3->dmacHwHandle, &VAR_4->config,
    VAR_4->ring.virtAddr);



 return 0;
}
