
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct tcpcb {int t_mpflags; scalar_t__ t_local_aid; } ;
struct socket {int so_flags; } ;
struct mptcp_subf_auth_entry {scalar_t__ msae_laddr_rand; scalar_t__ msae_raddr_rand; scalar_t__ msae_raddr_id; scalar_t__ msae_laddr_id; } ;
struct mptcb {scalar_t__ mpt_state; int mpt_subauth_list; int mpt_mpte; } ;


 int FUNC_0 (int *,struct mptcp_subf_auth_entry*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 struct tcpcb* FUNC_3 (struct socket*) ;
 struct mptcp_subf_auth_entry* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct socket *VAR_6, struct mptcb *VAR_7,
    uint8_t VAR_8)
{
 struct tcpcb *VAR_9 = FUNC_3(VAR_6);
 struct mptcp_subf_auth_entry *VAR_10;
 FUNC_2(VAR_7->mpt_mpte);




 if (VAR_7->mpt_state == VAR_0) {
  VAR_9->t_local_aid = 0;
 } else {
  VAR_9->t_local_aid = VAR_8;
  VAR_9->t_mpflags |= (VAR_3 | VAR_2);
  VAR_6->so_flags |= VAR_1;
 }
 VAR_10 = FUNC_4(VAR_4);
 VAR_10->msae_laddr_id = VAR_9->t_local_aid;
 VAR_10->msae_raddr_id = 0;
 VAR_10->msae_raddr_rand = 0;
try_again:
 VAR_10->msae_laddr_rand = FUNC_1();
 if (VAR_10->msae_laddr_rand == 0)
  goto try_again;
 FUNC_0(&VAR_7->mpt_subauth_list, VAR_10, VAR_5);
}
