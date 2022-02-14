
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int prev; } ;
struct fsl_dma_chan {int feature; TYPE_3__ ld_queue; } ;
struct TYPE_5__ {int phys; } ;
struct TYPE_4__ {int next_ln_addr; } ;
struct fsl_desc_sw {TYPE_2__ async_tx; TYPE_1__ hw; } ;


 int FUNC_0 (struct fsl_dma_chan*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 struct fsl_desc_sw* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fsl_dma_chan *VAR_4,
  struct fsl_desc_sw *VAR_5)
{
 struct fsl_desc_sw *VAR_6 = FUNC_2(VAR_4->ld_queue.prev);

 if (FUNC_1(&VAR_4->ld_queue))
  return;
 VAR_6->hw.next_ln_addr = FUNC_0(VAR_4,
   VAR_5->async_tx.phys | VAR_0 |
   (((VAR_4->feature & VAR_2)
    == VAR_1) ? VAR_3 : 0), 64);
}
