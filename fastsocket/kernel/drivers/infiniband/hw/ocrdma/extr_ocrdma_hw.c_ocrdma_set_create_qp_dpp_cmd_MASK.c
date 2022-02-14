
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ocrdma_qp {int dpp_enabled; } ;
struct ocrdma_pd {int num_dpp_qp; } ;
struct ocrdma_create_qp_req {int dpp_credits_cqid; int max_sge_recv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ocrdma_create_qp_req *VAR_3,
      struct ocrdma_pd *VAR_4,
      struct ocrdma_qp *VAR_5,
      u8 VAR_6, u16 VAR_7)
{
 VAR_4->num_dpp_qp--;
 VAR_5->dpp_enabled = 1;
 VAR_3->max_sge_recv_flags |= VAR_2;
 if (!VAR_6)
  return;
 VAR_3->max_sge_recv_flags |= VAR_2;
 VAR_3->dpp_credits_cqid = VAR_7;
 VAR_3->dpp_credits_cqid |= VAR_0 <<
     VAR_1;
}
