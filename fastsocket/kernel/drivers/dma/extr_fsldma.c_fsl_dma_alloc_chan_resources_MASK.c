
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dma_chan {int id; int dev; scalar_t__ desc_pool; } ;
struct fsl_desc_sw {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int,int,int ) ;
 struct fsl_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0)
{
 struct fsl_dma_chan *VAR_1 = FUNC_2(VAR_0);


 if (VAR_1->desc_pool)
  return 1;




 VAR_1->desc_pool = FUNC_1("fsl_dma_engine_desc_pool",
   VAR_1->dev, sizeof(struct fsl_desc_sw),
   32, 0);
 if (!VAR_1->desc_pool) {
  FUNC_0(VAR_1->dev, "No memory for channel %d "
   "descriptor dma pool.\n", VAR_1->id);
  return 0;
 }

 return 1;
}
