
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sa_state_record {int dummy; } ;
struct crypto4xx_ctx {scalar_t__ state_record_dma_addr; int * state_record; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* core_dev; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int ,int,int *,scalar_t__) ;

void FUNC_1(struct crypto4xx_ctx *VAR_0)
{
 if (VAR_0->state_record != ((void*)0))
  FUNC_0(VAR_0->dev->core_dev->device,
      sizeof(struct sa_state_record),
      VAR_0->state_record,
      VAR_0->state_record_dma_addr);
 VAR_0->state_record_dma_addr = 0;
}
