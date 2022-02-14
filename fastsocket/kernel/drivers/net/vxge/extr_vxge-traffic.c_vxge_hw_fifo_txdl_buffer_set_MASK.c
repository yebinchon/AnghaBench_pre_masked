
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vxge_hw_fifo_txd {int control_0; scalar_t__ buffer_pointer; int control_1; } ;
struct __vxge_hw_fifo_txdl_priv {int frags; scalar_t__ alloc_frags; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_1__* stats; int tx_intr_num; int interrupt_type; struct __vxge_hw_channel channel; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int total_buffers; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct __vxge_hw_fifo_txdl_priv* FUNC_3 (struct __vxge_hw_fifo*,void*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct __vxge_hw_fifo *VAR_2,
      void *VAR_3, u32 VAR_4,
      dma_addr_t VAR_5, u32 VAR_6)
{
 struct __vxge_hw_fifo_txdl_priv *VAR_7;
 struct vxge_hw_fifo_txd *VAR_8, *VAR_9;
 struct __vxge_hw_channel *VAR_10;

 VAR_10 = &VAR_2->channel;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 VAR_8 = (struct vxge_hw_fifo_txd *)VAR_3 + VAR_7->frags;

 if (VAR_4 != 0)
  VAR_8->control_0 = VAR_8->control_1 = 0;
 else {
  VAR_8->control_0 |= FUNC_1(
   VAR_0);
  VAR_8->control_1 |= VAR_2->interrupt_type;
  VAR_8->control_1 |= FUNC_2(
   VAR_2->tx_intr_num);
  if (VAR_7->frags) {
   VAR_9 = (struct vxge_hw_fifo_txd *)VAR_3 +
   (VAR_7->frags - 1);
   VAR_9->control_0 |= FUNC_1(
    VAR_1);
  }
 }

 FUNC_4(VAR_4 < VAR_7->alloc_frags);

 VAR_8->buffer_pointer = (u64)VAR_5;
 VAR_8->control_0 |= FUNC_0(VAR_6);
 VAR_2->stats->total_buffers++;
 VAR_7->frags++;
}
