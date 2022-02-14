
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef void* u32 ;
typedef void* u16 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_14__ {unsigned long handle; } ;
struct TYPE_13__ {int page_size; int max_wr; int max_sge; void* queue_size; void* act_nr_sges; void* act_nr_wqes; } ;
struct TYPE_12__ {int page_size; int max_wr; int max_sge; void* queue_size; void* act_nr_sges; void* act_nr_wqes; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int handle; } ;
struct TYPE_9__ {int handle; } ;
struct TYPE_8__ {int handle; } ;
struct ehca_alloc_qp_parms {int ext_type; int servicetype; int sigtype; int qp_storage; int ll_comp_flags; int ud_av_l_key_ctl; int srq_token; int srq_limit; int srq_qpn; TYPE_7__ qp_handle; int galpas; TYPE_6__ rqueue; TYPE_5__ squeue; void* real_qp_num; TYPE_4__ pd; scalar_t__ token; TYPE_3__ eq_handle; TYPE_2__ recv_cq_handle; TYPE_1__ send_cq_handle; } ;


 scalar_t__ FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ,unsigned long*,int ,int,int ,int ,int ,int,int,int,int) ;
 int FUNC_4 (int ,int ,unsigned long,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int,unsigned long,unsigned long) ;

u64 FUNC_6(const struct ipz_adapter_handle VAR_33,
        struct ehca_alloc_qp_parms *VAR_34, int VAR_35)
{
 int VAR_36;
 u64 VAR_37;
 u64 VAR_38, VAR_39, VAR_40, VAR_41;
 unsigned long VAR_42[VAR_32];

 VAR_38 =
  FUNC_1(VAR_6, VAR_34->ext_type)
  | FUNC_1(VAR_13, 0)
  | FUNC_1(VAR_16, VAR_34->servicetype)
  | FUNC_1(VAR_17, VAR_34->sigtype)
  | FUNC_1(VAR_24, VAR_34->qp_storage)
  | FUNC_1(VAR_19,
     VAR_34->squeue.page_size)
  | FUNC_1(VAR_18,
     VAR_34->rqueue.page_size)
  | FUNC_1(VAR_7,
     !!(VAR_34->ll_comp_flags & VAR_30))
  | FUNC_1(VAR_8,
     !!(VAR_34->ll_comp_flags & VAR_31))
  | FUNC_1(VAR_25,
     VAR_34->ud_av_l_key_ctl)
  | FUNC_1(VAR_14, 1);

 VAR_39 =
  FUNC_1(VAR_10,
          VAR_34->squeue.max_wr + 1)
  | FUNC_1(VAR_9,
     VAR_34->rqueue.max_wr + 1)
  | FUNC_1(VAR_12,
     VAR_34->squeue.max_sge)
  | FUNC_1(VAR_11,
     VAR_34->rqueue.max_sge);

 VAR_40 = FUNC_1(VAR_23, VAR_34->srq_token);

 if (VAR_34->ext_type == VAR_0)
  VAR_41 = FUNC_1(VAR_21, VAR_34->srq_limit);
 else
  VAR_41 = FUNC_1(VAR_22, VAR_34->srq_qpn);

 VAR_37 = FUNC_3(VAR_1, VAR_42,
    VAR_33.handle,
    VAR_38,
    VAR_34->send_cq_handle.handle,
    VAR_34->recv_cq_handle.handle,
    VAR_34->eq_handle.handle,
    ((u64)VAR_34->token << 32) | VAR_34->pd.value,
    VAR_39, VAR_40, VAR_41);

 VAR_34->qp_handle.handle = VAR_42[0];
 VAR_34->real_qp_num = (u32)VAR_42[1];
 VAR_34->squeue.act_nr_wqes =
  (u16)FUNC_0(VAR_3, VAR_42[2]);
 VAR_34->rqueue.act_nr_wqes =
  (u16)FUNC_0(VAR_2, VAR_42[2]);
 VAR_34->squeue.act_nr_sges =
  (u8)FUNC_0(VAR_5, VAR_42[3]);
 VAR_34->rqueue.act_nr_sges =
  (u8)FUNC_0(VAR_4, VAR_42[3]);
 VAR_34->squeue.queue_size =
  (u32)FUNC_0(VAR_20, VAR_42[4]);
 VAR_34->rqueue.queue_size =
  (u32)FUNC_0(VAR_15, VAR_42[4]);

 if (VAR_37 == VAR_29) {
  VAR_36 = FUNC_5(&VAR_34->galpas, VAR_35, VAR_42[6], VAR_42[6]);
  if (VAR_36) {
   FUNC_2("Could not establish HW access. rc=%d paddr=%#lx",
         VAR_36, VAR_42[6]);

   FUNC_4(VAR_26,
      VAR_33.handle,
      VAR_34->qp_handle.handle,
      0, 0, 0, 0, 0);
   VAR_37 = VAR_28;
  }
 }

 if (VAR_37 == VAR_27)
  FUNC_2("Not enough resources. ret=%lli", VAR_37);

 return VAR_37;
}
