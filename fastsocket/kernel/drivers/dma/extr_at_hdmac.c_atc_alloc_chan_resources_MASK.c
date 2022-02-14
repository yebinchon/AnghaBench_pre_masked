
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dma_chan {int cookie; struct at_dma_slave* private; int device; } ;
struct at_dma_slave {scalar_t__ dma_dev; scalar_t__ cfg; } ;
struct at_dma_chan {int descs_allocated; int completed_cookie; int lock; int free_list; } ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct at_dma {TYPE_1__ dma_common; } ;
struct at_desc {int desc_node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct at_desc* FUNC_2 (struct dma_chan*,int ) ;
 scalar_t__ FUNC_3 (struct at_dma_chan*) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct at_dma_chan*,int ,scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_4 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 struct at_dma* FUNC_14 (int ) ;
 struct at_dma_chan* FUNC_15 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_16(struct dma_chan *VAR_6)
{
 struct at_dma_chan *VAR_7 = FUNC_15(VAR_6);
 struct at_dma *VAR_8 = FUNC_14(VAR_6->device);
 struct at_desc *VAR_9;
 struct at_dma_slave *VAR_10;
 int VAR_11;
 u32 VAR_12;
 FUNC_1(VAR_5);

 FUNC_8(FUNC_4(VAR_6), "alloc_chan_resources\n");


 if (FUNC_3(VAR_7)) {
  FUNC_6(FUNC_4(VAR_6), "DMA channel not idle ?\n");
  return -VAR_2;
 }

 VAR_12 = VAR_0;

 VAR_10 = VAR_6->private;
 if (VAR_10) {




  FUNC_0(!VAR_10->dma_dev || VAR_10->dma_dev != VAR_8->dma_common.dev);


  if (VAR_10->cfg)
   VAR_12 = VAR_10->cfg;
 }



 if (!FUNC_10(&VAR_7->free_list))
  return VAR_7->descs_allocated;


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_9 = FUNC_2(VAR_6, VAR_3);
  if (!VAR_9) {
   FUNC_7(VAR_8->dma_common.dev,
    "Only %d initial descriptors\n", VAR_11);
   break;
  }
  FUNC_9(&VAR_9->desc_node, &VAR_5);
 }

 FUNC_12(&VAR_7->lock);
 VAR_7->descs_allocated = VAR_11;
 FUNC_11(&VAR_5, &VAR_7->free_list);
 VAR_7->completed_cookie = VAR_6->cookie = 1;
 FUNC_13(&VAR_7->lock);


 FUNC_5(VAR_7, VAR_1, VAR_12);

 FUNC_6(FUNC_4(VAR_6),
  "alloc_chan_resources: allocated %d descriptors\n",
  VAR_7->descs_allocated);

 return VAR_7->descs_allocated;
}
