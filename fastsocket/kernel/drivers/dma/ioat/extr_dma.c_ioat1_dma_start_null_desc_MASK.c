
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int null; int int_en; int compl_write; } ;
struct ioat_dma_descriptor {scalar_t__ next; scalar_t__ dst_addr; scalar_t__ src_addr; int size; TYPE_1__ ctl_f; scalar_t__ ctl; } ;
struct ioat_chan_common {int dummy; } ;
struct ioat_dma_chan {int desc_lock; int used_desc; struct ioat_chan_common base; } ;
struct TYPE_4__ {int phys; } ;
struct ioat_desc_sw {TYPE_2__ txd; int node; struct ioat_dma_descriptor* hw; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ioat_dma_chan*,struct ioat_desc_sw*) ;
 struct ioat_desc_sw* FUNC_3 (struct ioat_dma_chan*) ;
 int FUNC_4 (struct ioat_dma_chan*,int ) ;
 int FUNC_5 (struct ioat_chan_common*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ioat_chan_common*) ;

__attribute__((used)) static void FUNC_10(struct ioat_dma_chan *VAR_1)
{
 struct ioat_chan_common *VAR_2 = &VAR_1->base;
 struct ioat_desc_sw *VAR_3;
 struct ioat_dma_descriptor *VAR_4;

 FUNC_7(&VAR_1->desc_lock);

 VAR_3 = FUNC_3(VAR_1);

 if (!VAR_3) {
  FUNC_1(FUNC_9(VAR_2),
   "Unable to start null desc - get next desc failed\n");
  FUNC_8(&VAR_1->desc_lock);
  return;
 }

 VAR_4 = VAR_3->hw;
 VAR_4->ctl = 0;
 VAR_4->ctl_f.null = 1;
 VAR_4->ctl_f.int_en = 1;
 VAR_4->ctl_f.compl_write = 1;

 VAR_4->size = VAR_0;
 VAR_4->src_addr = 0;
 VAR_4->dst_addr = 0;
 FUNC_0(&VAR_3->txd);
 VAR_4->next = 0;
 FUNC_6(&VAR_3->node, &VAR_1->used_desc);
 FUNC_2(VAR_1, VAR_3);

 FUNC_4(VAR_1, VAR_3->txd.phys);
 FUNC_5(VAR_2);
 FUNC_8(&VAR_1->desc_lock);
}
