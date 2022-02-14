
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_sge {int len; int lrkey; int addr_hi; int addr_lo; } ;
struct ocrdma_qp {int dummy; } ;
struct ocrdma_hdr_wqe {int total_len; } ;
struct TYPE_3__ {int rkey; int remote_addr; } ;
struct TYPE_4__ {TYPE_1__ rdma; } ;
struct ib_send_wr {TYPE_2__ wr; } ;


 int FUNC_0 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ocrdma_sge*,struct ib_send_wr*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocrdma_qp *VAR_0, struct ocrdma_hdr_wqe *VAR_1,
         struct ib_send_wr *VAR_2)
{
 int VAR_3;
 struct ocrdma_sge *VAR_4 = (struct ocrdma_sge *)(VAR_1 + 1);
 struct ocrdma_sge *VAR_5 = VAR_4 + 1;
 u32 VAR_6 = sizeof(*VAR_1) + sizeof(*VAR_4);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2, VAR_6);
 if (VAR_3)
  return VAR_3;
 VAR_4->addr_lo = VAR_2->wr.rdma.remote_addr;
 VAR_4->addr_hi = FUNC_1(VAR_2->wr.rdma.remote_addr);
 VAR_4->lrkey = VAR_2->wr.rdma.rkey;
 VAR_4->len = VAR_1->total_len;
 return 0;
}
