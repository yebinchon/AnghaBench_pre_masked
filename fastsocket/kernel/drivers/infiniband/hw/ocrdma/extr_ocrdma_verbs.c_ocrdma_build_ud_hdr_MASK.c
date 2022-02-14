
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_qp {scalar_t__ qp_type; int qkey; } ;
struct ocrdma_hdr_wqe {int dummy; } ;
struct ocrdma_ewqe_ud_hdr {int rsvd_ahid; int qkey; int rsvd_dest_qpn; } ;
struct ocrdma_ah {int id; } ;
struct TYPE_3__ {int remote_qkey; int remote_qpn; int ah; } ;
struct TYPE_4__ {TYPE_1__ ud; } ;
struct ib_send_wr {TYPE_2__ wr; } ;


 scalar_t__ VAR_0 ;
 struct ocrdma_ah* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_qp *VAR_1,
    struct ocrdma_hdr_wqe *VAR_2,
    struct ib_send_wr *VAR_3)
{
 struct ocrdma_ewqe_ud_hdr *VAR_4 =
  (struct ocrdma_ewqe_ud_hdr *)(VAR_2 + 1);
 struct ocrdma_ah *VAR_5 = FUNC_0(VAR_3->wr.ud.ah);

 VAR_4->rsvd_dest_qpn = VAR_3->wr.ud.remote_qpn;
 if (VAR_1->qp_type == VAR_0)
  VAR_4->qkey = VAR_1->qkey;
 else
  VAR_4->qkey = VAR_3->wr.ud.remote_qkey;
 VAR_4->rsvd_ahid = VAR_5->id;
}
