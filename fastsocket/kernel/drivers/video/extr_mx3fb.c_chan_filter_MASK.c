
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx3fb_platform_data {int dma_dev; } ;
struct dma_chan_request {scalar_t__ id; TYPE_1__* mx3fb; } ;
struct dma_chan {scalar_t__ chan_id; TYPE_2__* device; } ;
struct device {struct mx3fb_platform_data* platform_data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct device* dev; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct dma_chan_request *VAR_2 = VAR_1;
 struct device *VAR_3;
 struct mx3fb_platform_data *VAR_4;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->mx3fb->dev;
 VAR_4 = VAR_3->platform_data;

 return VAR_2->id == VAR_0->chan_id &&
  VAR_4->dma_dev == VAR_0->device->dev;
}
