
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb_dma_channel {int idx; TYPE_1__* controller; scalar_t__ len; scalar_t__ start_addr; } ;
struct dma_channel {int status; scalar_t__ actual_len; struct musb_dma_channel* private_data; } ;
struct TYPE_2__ {int used_channels; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dma_channel *VAR_1)
{
 struct musb_dma_channel *VAR_2 = VAR_1->private_data;

 VAR_1->actual_len = 0;
 VAR_2->start_addr = 0;
 VAR_2->len = 0;

 VAR_2->controller->used_channels &=
  ~(1 << VAR_2->idx);

 VAR_1->status = VAR_0;
}
