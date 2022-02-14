
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tcpcb {scalar_t__ t_rxtshift; } ;
struct socket {int dummy; } ;
struct mptcp_mpcapable_opt_common {int mmco_len; int mmco_flags; int mmco_version; int mmco_subtype; int mmco_kind; } ;
struct mptcb {int mpt_flags; struct mptcp_mpcapable_opt_common mpt_localkey; int mpt_version; int mpt_mpte; } ;
typedef int mptcp_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mptcp_mpcapable_opt_common*,int) ;
 int FUNC_1 (int *,struct mptcp_mpcapable_opt_common*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 struct tcpcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcpcb*) ;
 struct mptcb* FUNC_6 (struct tcpcb*) ;

__attribute__((used)) static unsigned
FUNC_7(struct socket *VAR_8, u_char *VAR_9, unsigned VAR_10)
{
 struct mptcp_mpcapable_opt_common VAR_11;
 struct tcpcb *VAR_12 = FUNC_3(VAR_8);
 struct mptcb *VAR_13 = FUNC_6(VAR_12);

 FUNC_2(VAR_13->mpt_mpte);




 if (VAR_12->t_rxtshift > VAR_7) {
  if (!(VAR_13->mpt_flags & (VAR_4 | VAR_5))) {
   VAR_13->mpt_flags |= VAR_5;
   FUNC_5(VAR_12);
  }
  return (VAR_10);
 }

 if (!FUNC_4(VAR_12)) {
  VAR_13->mpt_flags |= VAR_4;
  return (VAR_10);
 }

 FUNC_0(&VAR_11, sizeof (struct mptcp_mpcapable_opt_common));

 VAR_11.mmco_kind = VAR_6;
 VAR_11.mmco_len =
     sizeof (struct mptcp_mpcapable_opt_common) +
     sizeof (mptcp_key_t);
 VAR_11.mmco_subtype = VAR_2;
 VAR_11.mmco_version = VAR_13->mpt_version;
 VAR_11.mmco_flags |= VAR_1;
 if (VAR_13->mpt_flags & VAR_3)
  VAR_11.mmco_flags |= VAR_0;
 FUNC_1(VAR_9 + VAR_10, &VAR_11, sizeof (struct mptcp_mpcapable_opt_common));
 VAR_10 += sizeof (struct mptcp_mpcapable_opt_common);
 FUNC_1(VAR_9 + VAR_10, &VAR_13->mpt_localkey, sizeof (mptcp_key_t));
 VAR_10 += sizeof (mptcp_key_t);

 return (VAR_10);
}
