
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {int sbq_len; int lbq_len; int * lbq; int * lbq_base; int lbq_base_dma; int lbq_size; int * sbq; int * sbq_base; int sbq_base_dma; int sbq_size; int * cq_base; int cq_base_dma; int cq_size; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct bq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 void* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_4 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_5 (struct ql_adapter*,struct rx_ring*) ;

__attribute__((used)) static int FUNC_6(struct ql_adapter *VAR_3,
     struct rx_ring *VAR_4)
{




 VAR_4->cq_base =
     FUNC_2(VAR_3->pdev, VAR_4->cq_size,
     &VAR_4->cq_base_dma);

 if (VAR_4->cq_base == ((void*)0)) {
  FUNC_1(VAR_3, VAR_2, VAR_3->ndev, "rx_ring alloc failed.\n");
  return -VAR_0;
 }

 if (VAR_4->sbq_len) {



  VAR_4->sbq_base =
      FUNC_2(VAR_3->pdev, VAR_4->sbq_size,
      &VAR_4->sbq_base_dma);

  if (VAR_4->sbq_base == ((void*)0)) {
   FUNC_1(VAR_3, VAR_2, VAR_3->ndev,
      "Small buffer queue allocation failed.\n");
   goto err_mem;
  }




  VAR_4->sbq =
      FUNC_0(VAR_4->sbq_len * sizeof(struct bq_desc),
       VAR_1);
  if (VAR_4->sbq == ((void*)0)) {
   FUNC_1(VAR_3, VAR_2, VAR_3->ndev,
      "Small buffer queue control block allocation failed.\n");
   goto err_mem;
  }

  FUNC_5(VAR_3, VAR_4);
 }

 if (VAR_4->lbq_len) {



  VAR_4->lbq_base =
      FUNC_2(VAR_3->pdev, VAR_4->lbq_size,
      &VAR_4->lbq_base_dma);

  if (VAR_4->lbq_base == ((void*)0)) {
   FUNC_1(VAR_3, VAR_2, VAR_3->ndev,
      "Large buffer queue allocation failed.\n");
   goto err_mem;
  }



  VAR_4->lbq =
      FUNC_0(VAR_4->lbq_len * sizeof(struct bq_desc),
       VAR_1);
  if (VAR_4->lbq == ((void*)0)) {
   FUNC_1(VAR_3, VAR_2, VAR_3->ndev,
      "Large buffer queue control block allocation failed.\n");
   goto err_mem;
  }

  FUNC_4(VAR_3, VAR_4);
 }

 return 0;

err_mem:
 FUNC_3(VAR_3, VAR_4);
 return -VAR_0;
}
