
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioatdma_device {int dma_pool; } ;
struct ioat_dma_descriptor {int dummy; } ;
struct TYPE_3__ {int common; struct ioatdma_device* device; } ;
struct ioat_dma_chan {TYPE_1__ base; } ;
struct TYPE_4__ {int phys; int tx_submit; } ;
struct ioat_desc_sw {TYPE_2__ txd; struct ioat_dma_descriptor* hw; int tx_list; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 struct ioat_desc_sw* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ioat_dma_descriptor*,int ,int) ;
 struct ioat_dma_descriptor* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,struct ioat_dma_descriptor*,int ) ;
 int FUNC_6 (struct ioat_desc_sw*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct ioat_desc_sw *
FUNC_8(struct ioat_dma_chan *VAR_1, gfp_t VAR_2)
{
 struct ioat_dma_descriptor *VAR_3;
 struct ioat_desc_sw *VAR_4;
 struct ioatdma_device *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = VAR_1->base.device;
 VAR_3 = FUNC_4(VAR_5->dma_pool, VAR_2, &VAR_6);
 if (FUNC_7(!VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (FUNC_7(!VAR_4)) {
  FUNC_5(VAR_5->dma_pool, VAR_3, VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(&VAR_4->tx_list);
 FUNC_1(&VAR_4->txd, &VAR_1->base.common);
 VAR_4->txd.tx_submit = VAR_0;
 VAR_4->hw = VAR_3;
 VAR_4->txd.phys = VAR_6;
 FUNC_6(VAR_4, -1);

 return VAR_4;
}
