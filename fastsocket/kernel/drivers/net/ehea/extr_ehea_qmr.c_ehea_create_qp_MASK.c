
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehea_qp_init_attr {int rq_count; int act_wqe_size_enc_rq3; int nr_rq3_pages; int act_wqe_size_enc_rq2; int nr_rq2_pages; int act_wqe_size_enc_rq1; int nr_rq1_pages; int act_wqe_size_enc_sq; int nr_sq_pages; } ;
struct ehea_qp {int fw_handle; int hw_squeue; int hw_rqueue1; int hw_rqueue2; struct ehea_qp_init_attr init_attr; int hw_rqueue3; int epas; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,struct ehea_qp_init_attr*,int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ehea_qp*,int *,int ,int ,int ,struct ehea_adapter*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ehea_qp*) ;
 struct ehea_qp* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;

struct ehea_qp *FUNC_9(struct ehea_adapter *VAR_3,
          u32 VAR_4, struct ehea_qp_init_attr *VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 struct ehea_qp *VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;


 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_0("no mem for qp");
  return ((void*)0);
 }

 VAR_8->adapter = VAR_3;

 VAR_7 = FUNC_1(VAR_3->handle, VAR_5, VAR_4,
     &VAR_8->fw_handle, &VAR_8->epas);
 if (VAR_7 != VAR_2) {
  FUNC_0("ehea_h_alloc_resource_qp failed");
  goto out_freemem;
 }

 VAR_9 = FUNC_8(VAR_5->act_wqe_size_enc_sq);
 VAR_10 = FUNC_8(VAR_5->act_wqe_size_enc_rq1);
 VAR_11 = FUNC_8(VAR_5->act_wqe_size_enc_rq2);
 VAR_12 = FUNC_8(VAR_5->act_wqe_size_enc_rq3);

 VAR_6 = FUNC_4(VAR_8, &VAR_8->hw_squeue, VAR_5->nr_sq_pages,
         VAR_9,
         VAR_5->act_wqe_size_enc_sq, VAR_3,
         0);
 if (VAR_6) {
  FUNC_0("can't register for sq ret=%x", VAR_6);
  goto out_freeres;
 }

 VAR_6 = FUNC_4(VAR_8, &VAR_8->hw_rqueue1,
         VAR_5->nr_rq1_pages,
         VAR_10,
         VAR_5->act_wqe_size_enc_rq1,
         VAR_3, 1);
 if (VAR_6) {
  FUNC_0("can't register for rq1 ret=%x", VAR_6);
  goto out_kill_hwsq;
 }

 if (VAR_5->rq_count > 1) {
  VAR_6 = FUNC_4(VAR_8, &VAR_8->hw_rqueue2,
          VAR_5->nr_rq2_pages,
          VAR_11,
          VAR_5->act_wqe_size_enc_rq2,
          VAR_3, 2);
  if (VAR_6) {
   FUNC_0("can't register for rq2 ret=%x", VAR_6);
   goto out_kill_hwr1q;
  }
 }

 if (VAR_5->rq_count > 2) {
  VAR_6 = FUNC_4(VAR_8, &VAR_8->hw_rqueue3,
          VAR_5->nr_rq3_pages,
          VAR_12,
          VAR_5->act_wqe_size_enc_rq3,
          VAR_3, 3);
  if (VAR_6) {
   FUNC_0("can't register for rq3 ret=%x", VAR_6);
   goto out_kill_hwr2q;
  }
 }

 VAR_8->init_attr = *VAR_5;

 return VAR_8;

out_kill_hwr2q:
 FUNC_5(&VAR_8->hw_rqueue2);

out_kill_hwr1q:
 FUNC_5(&VAR_8->hw_rqueue1);

out_kill_hwsq:
 FUNC_5(&VAR_8->hw_squeue);

out_freeres:
 FUNC_2(VAR_3->handle, VAR_8->fw_handle);
 FUNC_3(VAR_3->handle, VAR_8->fw_handle, VAR_0);

out_freemem:
 FUNC_6(VAR_8);
 return ((void*)0);
}
