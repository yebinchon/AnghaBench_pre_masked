
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sa_state_record {int dummy; } ;
struct crypto4xx_ctx {int state_record; int state_record_dma_addr; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* core_dev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,int ,int) ;

u32 FUNC_2(struct crypto4xx_ctx *VAR_2)
{
 VAR_2->state_record = FUNC_0(VAR_2->dev->core_dev->device,
    sizeof(struct sa_state_record),
    &VAR_2->state_record_dma_addr, VAR_1);
 if (!VAR_2->state_record_dma_addr)
  return -VAR_0;
 FUNC_1(VAR_2->state_record, 0, sizeof(struct sa_state_record));

 return 0;
}
