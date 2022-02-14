
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto4xx_ctx {int sa_len; scalar_t__ sa_out_dma_addr; scalar_t__ sa_in_dma_addr; int * sa_out; TYPE_1__* dev; int * sa_in; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {TYPE_2__* core_dev; } ;


 int FUNC_0 (int ,int,int *,scalar_t__) ;

void FUNC_1(struct crypto4xx_ctx *VAR_0)
{
 if (VAR_0->sa_in != ((void*)0))
  FUNC_0(VAR_0->dev->core_dev->device, VAR_0->sa_len * 4,
      VAR_0->sa_in, VAR_0->sa_in_dma_addr);
 if (VAR_0->sa_out != ((void*)0))
  FUNC_0(VAR_0->dev->core_dev->device, VAR_0->sa_len * 4,
      VAR_0->sa_out, VAR_0->sa_out_dma_addr);

 VAR_0->sa_in_dma_addr = 0;
 VAR_0->sa_out_dma_addr = 0;
 VAR_0->sa_len = 0;
}
