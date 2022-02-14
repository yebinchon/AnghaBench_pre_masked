
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_cq_desc {int cq_index; } ;
struct iser_conn {scalar_t__ login_buf; scalar_t__ login_resp_dma; TYPE_2__* device; scalar_t__ login_req_dma; scalar_t__ page_vec; TYPE_3__* qp; int * fmr_pool; int cma_id; } ;
struct TYPE_6__ {TYPE_1__* recv_cq; } ;
struct TYPE_5__ {int ib_device; int * cq_active_qps; } ;
struct TYPE_4__ {scalar_t__ cq_context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (char*,struct iser_conn*,int ,int *,TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iser_conn *VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_4 == ((void*)0));

 FUNC_3("freeing conn %p cma_id %p fmr pool %p qp %p\n",
    VAR_4, VAR_4->cma_id,
    VAR_4->fmr_pool, VAR_4->qp);


 if (VAR_4->fmr_pool != ((void*)0))
  FUNC_1(VAR_4->fmr_pool);

 if (VAR_4->qp != ((void*)0)) {
  VAR_5 = ((struct iser_cq_desc *)VAR_4->qp->recv_cq->cq_context)->cq_index;
  VAR_4->device->cq_active_qps[VAR_5]--;

  FUNC_5(VAR_4->cma_id);
 }

 VAR_4->fmr_pool = ((void*)0);
 VAR_4->qp = ((void*)0);
 FUNC_4(VAR_4->page_vec);

 if (VAR_4->login_buf) {
  if (VAR_4->login_req_dma)
   FUNC_2(VAR_4->device->ib_device,
    VAR_4->login_req_dma,
    VAR_2, VAR_1);
  if (VAR_4->login_resp_dma)
   FUNC_2(VAR_4->device->ib_device,
    VAR_4->login_resp_dma,
    VAR_3, VAR_0);
  FUNC_4(VAR_4->login_buf);
 }

 return 0;
}
