
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mx3_camera_pdata {scalar_t__ dma_dev; } ;
struct dma_chan_request {scalar_t__ id; TYPE_4__* mx3_cam; } ;
struct dma_chan {scalar_t__ chan_id; TYPE_5__* device; } ;
struct TYPE_10__ {scalar_t__ dev; } ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct TYPE_8__ {TYPE_2__ v4l2_dev; } ;
struct TYPE_9__ {TYPE_3__ soc_host; } ;
struct TYPE_6__ {struct mx3_camera_pdata* platform_data; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct dma_chan_request *VAR_2 = VAR_1;
 struct mx3_camera_pdata *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->mx3_cam->soc_host.v4l2_dev.dev->platform_data;

 return VAR_2->id == VAR_0->chan_id &&
  VAR_3->dma_dev == VAR_0->device->dev;
}
