
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cookie; } ;
struct iop_adma_desc_slot {TYPE_2__ async_tx; } ;
struct TYPE_3__ {int cookie; } ;
struct iop_adma_chan {TYPE_1__ common; } ;
typedef int dma_cookie_t ;



__attribute__((used)) static dma_cookie_t
FUNC_0(struct iop_adma_chan *VAR_0,
 struct iop_adma_desc_slot *VAR_1)
{
 dma_cookie_t VAR_2 = VAR_0->common.cookie;
 VAR_2++;
 if (VAR_2 < 0)
  VAR_2 = 1;
 VAR_0->common.cookie = VAR_1->async_tx.cookie = VAR_2;
 return VAR_2;
}
