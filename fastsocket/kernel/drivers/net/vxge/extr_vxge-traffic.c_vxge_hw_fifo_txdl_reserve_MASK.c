
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxge_hw_fifo_txd {scalar_t__ control_1; scalar_t__ control_0; scalar_t__ host_control; } ;
struct __vxge_hw_fifo_txdl_priv {int alloc_frags; int * next_txdl_priv; scalar_t__ frags; scalar_t__ align_used_frags; int align_vaddr; int align_vaddr_start; scalar_t__ align_dma_offset; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_1__* config; struct __vxge_hw_channel channel; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int max_frags; } ;


 int VAR_0 ;
 struct __vxge_hw_fifo_txdl_priv* FUNC_0 (struct __vxge_hw_fifo*,struct vxge_hw_fifo_txd*) ;
 int FUNC_1 (struct __vxge_hw_channel*,void**) ;

enum vxge_hw_status FUNC_2(
 struct __vxge_hw_fifo *VAR_1,
 void **VAR_2, void **VAR_3)
{
 struct __vxge_hw_channel *VAR_4;
 enum vxge_hw_status VAR_5;
 int VAR_6;

 VAR_4 = &VAR_1->channel;

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 if (VAR_5 == VAR_0) {
  struct vxge_hw_fifo_txd *VAR_7 =
   (struct vxge_hw_fifo_txd *)*VAR_2;
  struct __vxge_hw_fifo_txdl_priv *VAR_8;

  VAR_8 = FUNC_0(VAR_1, VAR_7);


  VAR_8->align_dma_offset = 0;
  VAR_8->align_vaddr_start = VAR_8->align_vaddr;
  VAR_8->align_used_frags = 0;
  VAR_8->frags = 0;
  VAR_8->alloc_frags = VAR_1->config->max_frags;
  VAR_8->next_txdl_priv = ((void*)0);

  *VAR_3 = (void *)(size_t)VAR_7->host_control;

  for (VAR_6 = 0; VAR_6 < VAR_1->config->max_frags; VAR_6++) {
   VAR_7 = ((struct vxge_hw_fifo_txd *)*VAR_2) + VAR_6;
   VAR_7->control_0 = VAR_7->control_1 = 0;
  }
 }

 return VAR_5;
}
