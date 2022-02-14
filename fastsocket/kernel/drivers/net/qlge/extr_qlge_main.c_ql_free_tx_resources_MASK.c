
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {int * q; int * wq_base; int wq_base_dma; int wq_size; } ;
struct ql_adapter {int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_0,
     struct tx_ring *VAR_1)
{
 if (VAR_1->wq_base) {
  FUNC_1(VAR_0->pdev, VAR_1->wq_size,
        VAR_1->wq_base, VAR_1->wq_base_dma);
  VAR_1->wq_base = ((void*)0);
 }
 FUNC_0(VAR_1->q);
 VAR_1->q = ((void*)0);
}
