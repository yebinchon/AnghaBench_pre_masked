
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_sge {int dummy; } ;
struct ocrdma_qp {scalar_t__ qp_type; } ;
struct ocrdma_hdr_wqe {int dummy; } ;
struct ocrdma_ewqe_ud_hdr {int dummy; } ;
struct ib_send_wr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ocrdma_sge*,struct ib_send_wr*,int) ;
 int FUNC_1 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr*) ;

__attribute__((used)) static int FUNC_2(struct ocrdma_qp *VAR_2, struct ocrdma_hdr_wqe *VAR_3,
        struct ib_send_wr *VAR_4)
{
 int VAR_5;
 struct ocrdma_sge *VAR_6;
 u32 VAR_7 = sizeof(*VAR_3);

 if (VAR_2->qp_type == VAR_1 || VAR_2->qp_type == VAR_0) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  VAR_6 = (struct ocrdma_sge *)(VAR_3 + 2);
  VAR_7 += sizeof(struct ocrdma_ewqe_ud_hdr);
 } else
  VAR_6 = (struct ocrdma_sge *)(VAR_3 + 1);

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4, VAR_7);
 return VAR_5;
}
