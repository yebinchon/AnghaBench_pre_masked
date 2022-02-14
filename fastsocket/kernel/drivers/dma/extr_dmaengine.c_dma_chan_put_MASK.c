
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {scalar_t__ client_count; TYPE_1__* device; } ;
struct TYPE_2__ {int (* device_free_chan_resources ) (struct dma_chan*) ;} ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_3(struct dma_chan *VAR_0)
{
 if (!VAR_0->client_count)
  return;
 VAR_0->client_count--;
 FUNC_1(FUNC_0(VAR_0));
 if (VAR_0->client_count == 0)
  VAR_0->device->device_free_chan_resources(VAR_0);
}
