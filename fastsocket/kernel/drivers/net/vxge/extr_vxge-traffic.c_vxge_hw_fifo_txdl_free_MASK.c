
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vxge_hw_fifo_txd {int dummy; } ;
struct __vxge_hw_fifo_txdl_priv {int dummy; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_1__* config; struct __vxge_hw_channel channel; } ;
struct TYPE_2__ {int max_frags; } ;


 struct __vxge_hw_fifo_txdl_priv* FUNC_0 (struct __vxge_hw_fifo*,struct vxge_hw_fifo_txd*) ;
 int FUNC_1 (struct __vxge_hw_channel*,void*) ;

void FUNC_2(struct __vxge_hw_fifo *VAR_0, void *VAR_1)
{
 struct __vxge_hw_fifo_txdl_priv *VAR_2;
 u32 VAR_3;
 struct __vxge_hw_channel *VAR_4;

 VAR_4 = &VAR_0->channel;

 VAR_2 = FUNC_0(VAR_0,
   (struct vxge_hw_fifo_txd *)VAR_1);

 VAR_3 = VAR_0->config->max_frags;

 FUNC_1(VAR_4, VAR_1);
}
