
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct dma_chan {int client_count; TYPE_1__* device; } ;
struct TYPE_2__ {int (* device_alloc_chan_resources ) (struct dma_chan*) ;int cap_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct module*) ;
 int FUNC_1 (struct dma_chan*) ;
 struct module* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 (struct dma_chan*) ;
 scalar_t__ FUNC_6 (struct module*) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_2)
{
 int VAR_3 = -VAR_1;
 struct module *VAR_4 = FUNC_2(VAR_2);

 if (VAR_2->client_count) {
  FUNC_0(VAR_4);
  VAR_3 = 0;
 } else if (FUNC_6(VAR_4))
  VAR_3 = 0;

 if (VAR_3 == 0)
  VAR_2->client_count++;


 if (VAR_2->client_count == 1 && VAR_3 == 0) {
  int VAR_5 = VAR_2->device->device_alloc_chan_resources(VAR_2);

  if (VAR_5 < 0) {
   VAR_3 = VAR_5;
   VAR_2->client_count = 0;
   FUNC_4(VAR_4);
  } else if (!FUNC_3(VAR_0, VAR_2->device->cap_mask))
   FUNC_1(VAR_2);
 }

 return VAR_3;
}
