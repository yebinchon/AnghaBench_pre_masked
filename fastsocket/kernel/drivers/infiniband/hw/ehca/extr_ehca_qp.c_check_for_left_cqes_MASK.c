
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;
struct TYPE_8__ {scalar_t__ left_to_poll; int entries; int tail; void* next_wqe_idx; } ;
struct TYPE_5__ {int qp_num; } ;
struct ehca_qp {scalar_t__ ext_type; TYPE_3__* recv_cq; TYPE_2__* send_cq; TYPE_4__ rq_map; TYPE_4__ sq_map; int ipz_rqueue; int ipz_squeue; int pf; int ipz_qp_handle; TYPE_1__ ib_qp; } ;
struct TYPE_7__ {int spinlock; } ;
struct TYPE_6__ {int spinlock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ehca_qp*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int *,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ehca_qp*,int) ;
 int FUNC_4 (int *,char*,struct ehca_qp*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int *,void**,void**,int) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ehca_qp *VAR_2, struct ehca_shca *VAR_3)
{
 u64 VAR_4;
 void *VAR_5, *VAR_6;
 int VAR_7;
 unsigned long VAR_8;
 int VAR_9 = VAR_2->ib_qp.qp_num;


 if (VAR_2->ext_type != VAR_0) {

  VAR_4 = FUNC_5(VAR_3->ipz_hca_handle,
    VAR_2->ipz_qp_handle, &VAR_2->pf,
    &VAR_5, &VAR_6, 4);
  if (VAR_4 != VAR_1) {
   FUNC_4(&VAR_3->ib_device, "disable_and_get_wqe() "
     "failed ehca_qp=%p qp_num=%x h_ret=%lli",
     VAR_2, VAR_9, VAR_4);
   return FUNC_2(VAR_4);
  }






  FUNC_7(&VAR_2->send_cq->spinlock, VAR_8);
  VAR_7 = FUNC_1((u64)VAR_5, &VAR_2->ipz_squeue,
    &VAR_2->sq_map);
  FUNC_8(&VAR_2->send_cq->spinlock, VAR_8);
  if (VAR_7)
   return VAR_7;


  FUNC_7(&VAR_2->recv_cq->spinlock, VAR_8);
  VAR_7 = FUNC_1((u64)VAR_6, &VAR_2->ipz_rqueue,
    &VAR_2->rq_map);
  FUNC_8(&VAR_2->recv_cq->spinlock, VAR_8);
  if (VAR_7)
   return VAR_7;
 } else {
  FUNC_7(&VAR_2->send_cq->spinlock, VAR_8);
  VAR_2->sq_map.left_to_poll = 0;
  VAR_2->sq_map.next_wqe_idx = FUNC_6(VAR_2->sq_map.tail,
       VAR_2->sq_map.entries);
  FUNC_8(&VAR_2->send_cq->spinlock, VAR_8);

  FUNC_7(&VAR_2->recv_cq->spinlock, VAR_8);
  VAR_2->rq_map.left_to_poll = 0;
  VAR_2->rq_map.next_wqe_idx = FUNC_6(VAR_2->rq_map.tail,
       VAR_2->rq_map.entries);
  FUNC_8(&VAR_2->recv_cq->spinlock, VAR_8);
 }


 if ((VAR_2->sq_map.left_to_poll == 0) &&
    (VAR_2->rq_map.left_to_poll == 0)) {
  FUNC_7(&VAR_2->send_cq->spinlock, VAR_8);
  FUNC_3(VAR_2, 1);
  FUNC_8(&VAR_2->send_cq->spinlock, VAR_8);

  if (FUNC_0(VAR_2)) {
   FUNC_7(&VAR_2->recv_cq->spinlock, VAR_8);
   FUNC_3(VAR_2, 0);
   FUNC_8(&VAR_2->recv_cq->spinlock,
     VAR_8);
  }
 }

 return 0;
}
