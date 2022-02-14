
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_device {int dev; struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,int ,int ,size_t,unsigned long) ;} ;
struct dma_chan {int local; struct dma_device* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;int * callback; } ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {size_t bytes_transferred; int memcpy_count; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void*,size_t,int ) ;
 int FUNC_1 (int ,int ,size_t,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_chan*,int ,int ,size_t,unsigned long) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;

dma_cookie_t
FUNC_7(struct dma_chan *VAR_6, void *VAR_7,
   void *VAR_8, size_t VAR_9)
{
 struct dma_device *VAR_10 = VAR_6->device;
 struct dma_async_tx_descriptor *VAR_11;
 dma_addr_t VAR_12, VAR_13;
 dma_cookie_t VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_13 = FUNC_0(VAR_10->dev, VAR_8, VAR_9, VAR_4);
 VAR_12 = FUNC_0(VAR_10->dev, VAR_7, VAR_9, VAR_3);
 VAR_16 = VAR_2 |
  VAR_1 |
  VAR_0;
 VAR_11 = VAR_10->device_prep_dma_memcpy(VAR_6, VAR_12, VAR_13, VAR_9, VAR_16);

 if (!VAR_11) {
  FUNC_1(VAR_10->dev, VAR_13, VAR_9, VAR_4);
  FUNC_1(VAR_10->dev, VAR_12, VAR_9, VAR_3);
  return -VAR_5;
 }

 VAR_11->callback = ((void*)0);
 VAR_14 = VAR_11->tx_submit(VAR_11);

 VAR_15 = FUNC_2();
 FUNC_3(VAR_6->local, VAR_15)->bytes_transferred += VAR_9;
 FUNC_3(VAR_6->local, VAR_15)->memcpy_count++;
 FUNC_4();

 return VAR_14;
}
