
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int64_t ;
struct tcpcb {int dummy; } ;
struct mptcp_dsn_opt {int mdss_data_len; int mdss_subflow_seqn; int mdss_dsn; } ;
struct mptcb {int mpt_rcvnxt; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mptcb*,struct tcpcb*,int ,int ,int ,int ) ;
 struct mptcb* FUNC_4 (struct tcpcb*) ;

void
FUNC_5(struct mptcp_dsn_opt *VAR_0, struct tcpcb *VAR_1,
    uint16_t VAR_2)
{
 struct mptcb *VAR_3 = FUNC_4(VAR_1);
 u_int64_t VAR_4 = 0;

 FUNC_1(VAR_0->mdss_dsn);
 FUNC_1(VAR_0->mdss_subflow_seqn);
 FUNC_2(VAR_0->mdss_data_len);


 FUNC_0(VAR_3->mpt_rcvnxt, VAR_0->mdss_dsn, VAR_4);
 FUNC_3(VAR_3, VAR_1,
     VAR_4, VAR_0->mdss_subflow_seqn, VAR_0->mdss_data_len,
     VAR_2);

}
