
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cm_status {scalar_t__ alg_done; scalar_t__ wr_dma_done; scalar_t__ rd_dma_done; void* cm_status_reg; } ;
union cm_control {int rd_dma_clr; int wr_dma_clr; int alg_done_clr; void* cm_control_reg; } ;
struct mbcs_soft {int algo_queue; int algo_done; int dmawrite_queue; int dmawrite_done; int dmaread_queue; int dmaread_done; void* mmr_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_3, void *VAR_4)
{
 struct mbcs_soft *VAR_5 = (struct mbcs_soft *)VAR_4;
 void *VAR_6;
 union cm_status VAR_7;
 union cm_control VAR_8;

 VAR_6 = VAR_5->mmr_base;
 VAR_7.cm_status_reg = FUNC_0(VAR_6, VAR_2);

 if (VAR_7.rd_dma_done) {

  VAR_8.cm_control_reg =
      FUNC_0(VAR_6, VAR_1);
  VAR_8.rd_dma_clr = 1;
  FUNC_1(VAR_6, VAR_1,
        VAR_8.cm_control_reg);
  FUNC_2(&VAR_5->dmaread_done, 1);
  FUNC_3(&VAR_5->dmaread_queue);
 }
 if (VAR_7.wr_dma_done) {

  VAR_8.cm_control_reg =
      FUNC_0(VAR_6, VAR_1);
  VAR_8.wr_dma_clr = 1;
  FUNC_1(VAR_6, VAR_1,
        VAR_8.cm_control_reg);
  FUNC_2(&VAR_5->dmawrite_done, 1);
  FUNC_3(&VAR_5->dmawrite_queue);
 }
 if (VAR_7.alg_done) {

  VAR_8.cm_control_reg =
      FUNC_0(VAR_6, VAR_1);
  VAR_8.alg_done_clr = 1;
  FUNC_1(VAR_6, VAR_1,
        VAR_8.cm_control_reg);
  FUNC_2(&VAR_5->algo_done, 1);
  FUNC_3(&VAR_5->algo_queue);
 }

 return VAR_0;
}
