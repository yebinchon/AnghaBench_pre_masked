
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int dummy; } ;
struct sge_txq {int size; int * desc; int * sdesc; scalar_t__ cntxt_id; int phys_addr; } ;
struct adapter {int pdev_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1, struct sge_txq *VAR_2)
{
 FUNC_0(VAR_1->pdev_dev,
     VAR_2->size * sizeof(struct tx_desc) + VAR_0,
     VAR_2->desc, VAR_2->phys_addr);
 VAR_2->cntxt_id = 0;
 VAR_2->sdesc = ((void*)0);
 VAR_2->desc = ((void*)0);
}
