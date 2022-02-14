
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct page {int dummy; } ;
struct dma_device {struct dma_async_tx_descriptor* (* device_prep_dma_pq ) (struct dma_chan*,int *,int *,int,unsigned char*,size_t,int) ;struct device* dev; } ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct device {int dummy; } ;
struct async_submit_ctl {int flags; int depend_tx; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dma_chan* FUNC_0 (struct async_submit_ctl*,int ,struct page**,int,struct page**,int,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_chan*,struct dma_async_tx_descriptor*,struct async_submit_ctl*) ;
 int FUNC_3 (struct device*,struct page*,int ,size_t,int ) ;
 int FUNC_4 (struct device*,int ,size_t,int ) ;
 int* FUNC_5 (struct page*) ;
 int** VAR_6 ;
 struct dma_async_tx_descriptor* FUNC_6 (struct dma_chan*,int *,int *,int,unsigned char*,size_t,int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_7(struct page *VAR_7, struct page **VAR_8, unsigned char *VAR_9,
    size_t VAR_10, struct async_submit_ctl *VAR_11)
{
 struct dma_chan *VAR_12 = FUNC_0(VAR_11, VAR_2,
            &VAR_7, 1, VAR_8, 2, VAR_10);
 struct dma_device *VAR_13 = VAR_12 ? VAR_12->device : ((void*)0);
 const u8 *VAR_14, *VAR_15;
 u8 VAR_16, VAR_17;
 u8 *VAR_18, *VAR_19, *VAR_20;

 if (VAR_13) {
  dma_addr_t VAR_21[2];
  dma_addr_t VAR_22[2];
  struct device *VAR_23 = VAR_13->dev;
  struct dma_async_tx_descriptor *VAR_24;
  enum dma_ctrl_flags VAR_25 = VAR_4;

  if (VAR_11->flags & VAR_0)
   VAR_25 |= VAR_3;
  VAR_21[1] = FUNC_3(VAR_23, VAR_7, 0, VAR_10, VAR_1);
  VAR_22[0] = FUNC_3(VAR_23, VAR_8[0], 0, VAR_10, VAR_5);
  VAR_22[1] = FUNC_3(VAR_23, VAR_8[1], 0, VAR_10, VAR_5);
  VAR_24 = VAR_13->device_prep_dma_pq(VAR_12, VAR_21, VAR_22, 2, VAR_9,
          VAR_10, VAR_25);
  if (VAR_24) {
   FUNC_2(VAR_12, VAR_24, VAR_11);
   return VAR_24;
  }




  FUNC_4(VAR_23, VAR_21[1], VAR_10, VAR_1);
  FUNC_4(VAR_23, VAR_22[0], VAR_10, VAR_5);
  FUNC_4(VAR_23, VAR_22[1], VAR_10, VAR_5);
 }


 FUNC_1(&VAR_11->depend_tx);
 VAR_14 = VAR_6[VAR_9[0]];
 VAR_15 = VAR_6[VAR_9[1]];
 VAR_18 = FUNC_5(VAR_8[0]);
 VAR_19 = FUNC_5(VAR_8[1]);
 VAR_20 = FUNC_5(VAR_7);

 while (VAR_10--) {
  VAR_16 = VAR_14[*VAR_18++];
  VAR_17 = VAR_15[*VAR_19++];
  *VAR_20++ = VAR_16 ^ VAR_17;
 }

 return ((void*)0);
}
