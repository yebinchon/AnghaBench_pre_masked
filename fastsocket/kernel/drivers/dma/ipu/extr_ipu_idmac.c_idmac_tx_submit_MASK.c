
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipu {int dummy; } ;
struct idmac_video_param {int out_stride; int out_height; int out_width; int out_pixel_fmt; } ;
struct idmac_tx_desc {int list; int * sg; } ;
struct TYPE_7__ {scalar_t__ cookie; TYPE_1__* dev; } ;
struct TYPE_6__ {struct idmac_video_param video; } ;
struct idmac_channel {scalar_t__ status; int chan_mutex; TYPE_3__ dma_chan; int lock; int queue; scalar_t__* sg; TYPE_2__ params; } ;
struct idmac {int dummy; } ;
struct dma_async_tx_descriptor {scalar_t__ cookie; TYPE_4__* chan; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_8__ {int device; } ;
struct TYPE_5__ {struct device device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct device*,char*,int *) ;
 int FUNC_3 (struct device*,char*,struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct ipu*) ;
 int FUNC_5 (struct idmac*,struct idmac_channel*) ;
 scalar_t__ FUNC_6 (struct idmac_channel*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct idmac_channel*,struct idmac_tx_desc*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 struct idmac* FUNC_17 (int ) ;
 struct idmac_channel* FUNC_18 (TYPE_4__*) ;
 struct ipu* FUNC_19 (struct idmac*) ;
 struct idmac_tx_desc* FUNC_20 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_21(struct dma_async_tx_descriptor *VAR_4)
{
 struct idmac_tx_desc *VAR_5 = FUNC_20(VAR_4);
 struct idmac_channel *VAR_6 = FUNC_18(VAR_4->chan);
 struct idmac *VAR_7 = FUNC_17(VAR_4->chan->device);
 struct ipu *VAR_8 = FUNC_19(VAR_7);
 struct device *VAR_9 = &VAR_6->dma_chan.dev->device;
 dma_cookie_t VAR_10;
 unsigned long VAR_11;
 int VAR_12;


 if (!FUNC_10(&VAR_5->list)) {

  FUNC_3(VAR_9, "Descriptor %p not prepared!\n", VAR_4);
  return -VAR_0;
 }

 FUNC_11(&VAR_6->chan_mutex);

 FUNC_1(VAR_4);

 if (VAR_6->status < VAR_2) {
  struct idmac_video_param *VAR_13 = &VAR_6->params.video;




  dma_addr_t VAR_14 = FUNC_14(VAR_5->sg) ? 0 :
   FUNC_13(&VAR_5->sg[1]);

  FUNC_0(VAR_6->sg[0] || VAR_6->sg[1]);

  VAR_10 = FUNC_6(VAR_6,
       VAR_13->out_pixel_fmt,
       VAR_13->out_width,
       VAR_13->out_height,
       VAR_13->out_stride,
       VAR_3,
       FUNC_13(&VAR_5->sg[0]),
       VAR_14);
  if (VAR_10 < 0)
   goto out;
 }

 FUNC_2(VAR_9, "Submitting sg %p\n", &VAR_5->sg[0]);

 VAR_10 = VAR_6->dma_chan.cookie;

 if (++VAR_10 < 0)
  VAR_10 = 1;


 VAR_6->dma_chan.cookie = VAR_10;
 VAR_4->cookie = VAR_10;


 FUNC_15(&VAR_6->lock, VAR_11);

 FUNC_8(&VAR_5->list, &VAR_6->queue);

 VAR_12 = FUNC_7(VAR_6, VAR_5);

 FUNC_16(&VAR_6->lock, VAR_11);

 if (VAR_12 < 0) {
  VAR_10 = VAR_12;
  goto dequeue;
 }

 if (VAR_6->status < VAR_1) {
  VAR_12 = FUNC_5(VAR_7, VAR_6);
  if (VAR_12 < 0) {
   VAR_10 = VAR_12;
   goto dequeue;
  }
 }

 FUNC_4(VAR_8);

dequeue:
 if (VAR_10 < 0) {
  FUNC_15(&VAR_6->lock, VAR_11);
  FUNC_9(&VAR_5->list);
  FUNC_16(&VAR_6->lock, VAR_11);
  VAR_4->cookie = VAR_10;
  VAR_6->dma_chan.cookie = VAR_10;
 }

out:
 FUNC_12(&VAR_6->chan_mutex);

 return VAR_10;
}
