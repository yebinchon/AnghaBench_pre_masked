
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tseg_qent {scalar_t__ tqe_len; TYPE_3__* tqe_m; } ;
struct socket {int so_state; } ;
struct mptcb {scalar_t__ mpt_state; scalar_t__ mpt_rcvnxt; int mpt_flags; int mpt_segq; int mpt_reassqlen; } ;
struct TYPE_9__ {TYPE_1__* mpp_pcbe; } ;
struct TYPE_7__ {scalar_t__ mp_dsn; int pkt_flags; } ;
struct TYPE_8__ {TYPE_2__ m_pkthdr; } ;
struct TYPE_6__ {struct mptcb* mpte_mptcb; } ;


 struct tseg_qent* FUNC_0 (int *) ;
 int FUNC_1 (struct tseg_qent*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*,TYPE_3__*,int ,int ) ;
 int FUNC_5 (struct socket*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,struct tseg_qent*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_6)
{
 struct mptcb *VAR_7 = FUNC_3(VAR_6)->mpp_pcbe->mpte_mptcb;
 struct tseg_qent *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;





 if (VAR_7->mpt_state < VAR_1)
  return (VAR_10);
 VAR_8 = FUNC_0(&VAR_7->mpt_segq);
 if (!VAR_8 || VAR_8->tqe_m->m_pkthdr.mp_dsn != VAR_7->mpt_rcvnxt)
  return (VAR_10);






 if (VAR_7->mpt_flags & VAR_0)
  return (VAR_10);

 VAR_7->mpt_flags |= VAR_0;

 do {
  VAR_7->mpt_rcvnxt += VAR_8->tqe_len;
  FUNC_1(VAR_8, VAR_5);
  if (VAR_6->so_state & VAR_3) {
   FUNC_2(VAR_8->tqe_m);
  } else {
   VAR_10 = !!(VAR_8->tqe_m->m_pkthdr.pkt_flags & VAR_2);
   if (FUNC_4(VAR_6, VAR_8->tqe_m, 0, 0))
    VAR_9 = 1;
  }
  FUNC_6(VAR_4, VAR_8);
  VAR_7->mpt_reassqlen--;
  VAR_8 = FUNC_0(&VAR_7->mpt_segq);
 } while (VAR_8 && VAR_8->tqe_m->m_pkthdr.mp_dsn == VAR_7->mpt_rcvnxt);
 VAR_7->mpt_flags &= ~VAR_0;

 if (VAR_9)
  FUNC_5(VAR_6);
 return (VAR_10);

}
