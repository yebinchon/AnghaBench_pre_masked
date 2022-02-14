
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cookie; } ;
struct at_dma_chan {TYPE_1__ chan_common; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct at_desc {TYPE_2__ txd; } ;
typedef scalar_t__ dma_cookie_t ;



__attribute__((used)) static dma_cookie_t
FUNC_0(struct at_dma_chan *VAR_0, struct at_desc *VAR_1)
{
 dma_cookie_t VAR_2 = VAR_0->chan_common.cookie;

 if (++VAR_2 < 0)
  VAR_2 = 1;

 VAR_0->chan_common.cookie = VAR_2;
 VAR_1->txd.cookie = VAR_2;

 return VAR_2;
}
