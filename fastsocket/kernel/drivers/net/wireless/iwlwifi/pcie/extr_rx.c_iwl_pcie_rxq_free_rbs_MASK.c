
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxq {int rx_used; TYPE_1__* pool; } ;
struct iwl_trans_pcie {int rx_page_order; struct iwl_rxq rxq; } ;
struct iwl_trans {int dev; } ;
struct TYPE_2__ {int list; int * page; int page_dma; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_0(VAR_4);
 struct iwl_rxq *VAR_6 = &VAR_5->rxq;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_2 + VAR_3; VAR_7++) {


  if (VAR_6->pool[VAR_7].page != ((void*)0)) {
   FUNC_2(VAR_4->dev, VAR_6->pool[VAR_7].page_dma,
           VAR_1 << VAR_5->rx_page_order,
           VAR_0);
   FUNC_1(VAR_6->pool[VAR_7].page,
         VAR_5->rx_page_order);
   VAR_6->pool[VAR_7].page = ((void*)0);
  }
  FUNC_3(&VAR_6->pool[VAR_7].list, &VAR_6->rx_used);
 }
}
