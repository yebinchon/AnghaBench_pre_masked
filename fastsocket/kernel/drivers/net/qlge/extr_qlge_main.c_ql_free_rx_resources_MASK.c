
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {int * cq_base; int cq_base_dma; int cq_size; int * lbq; int * lbq_base; int lbq_base_dma; int lbq_size; int * sbq; int * sbq_base; int sbq_base_dma; int sbq_size; } ;
struct ql_adapter {int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_0,
     struct rx_ring *VAR_1)
{

 if (VAR_1->sbq_base) {
  FUNC_1(VAR_0->pdev,
        VAR_1->sbq_size,
        VAR_1->sbq_base, VAR_1->sbq_base_dma);
  VAR_1->sbq_base = ((void*)0);
 }


 FUNC_0(VAR_1->sbq);
 VAR_1->sbq = ((void*)0);


 if (VAR_1->lbq_base) {
  FUNC_1(VAR_0->pdev,
        VAR_1->lbq_size,
        VAR_1->lbq_base, VAR_1->lbq_base_dma);
  VAR_1->lbq_base = ((void*)0);
 }


 FUNC_0(VAR_1->lbq);
 VAR_1->lbq = ((void*)0);


 if (VAR_1->cq_base) {
  FUNC_1(VAR_0->pdev,
        VAR_1->cq_size,
        VAR_1->cq_base, VAR_1->cq_base_dma);
  VAR_1->cq_base = ((void*)0);
 }
}
