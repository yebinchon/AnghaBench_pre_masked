
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


struct uio {int dummy; } ;
struct socket {int so_flags; int so_state; scalar_t__ last_pid; TYPE_6__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {TYPE_3__* p_stats; } ;
struct TYPE_11__ {int len; int pkt_flags; } ;
struct mbuf {TYPE_4__ m_pkthdr; } ;
struct inpcb {TYPE_1__* inp_last_outifp; } ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int mpt_mpte; } ;
struct TYPE_13__ {TYPE_5__* pr_usrreqs; } ;
struct TYPE_12__ {int (* pru_send ) (struct socket*,int ,struct mbuf*,int *,int *,struct proc*) ;} ;
struct TYPE_9__ {int ru_msgsnd; } ;
struct TYPE_10__ {TYPE_2__ p_ru; } ;
struct TYPE_8__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 struct proc* VAR_9 ;
 scalar_t__ FUNC_2 (struct socket*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct socket*) ;
 struct proc* FUNC_5 () ;
 int FUNC_6 (struct inpcb*,int *,int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct socket*,struct socket*) ;
 struct socket* FUNC_9 (int ) ;
 struct proc* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct proc*) ;
 int FUNC_12 (struct proc*) ;
 int FUNC_13 (struct socket*) ;
 int FUNC_14 (struct socket*,int *,int,int ,int,int ,int*,int *) ;
 struct inpcb* FUNC_15 (struct socket*) ;
 int FUNC_16 (struct socket*) ;
 int FUNC_17 (struct socket*,int ,struct mbuf*,int *,int *,struct proc*) ;
 TYPE_7__* FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(struct socket *VAR_17, struct sockaddr *VAR_18, struct uio *VAR_19,
    struct mbuf *VAR_20, struct mbuf *VAR_21, int VAR_22)
{
 struct socket *VAR_23 = FUNC_9(FUNC_18(FUNC_16(VAR_17))->mpt_mpte);
 struct proc *VAR_24 = FUNC_5();
 boolean_t VAR_25 = VAR_6, VAR_26 = VAR_6;
 int VAR_27;
 int VAR_28 = 1;
 int VAR_29;

 FUNC_3(VAR_21 == ((void*)0));
 FUNC_3(VAR_18 == ((void*)0));
 FUNC_3(VAR_19 == ((void*)0));
 FUNC_3(VAR_22 == 0);
 FUNC_3((VAR_17->so_flags & VAR_10) == 0);

 FUNC_3(VAR_20->m_pkthdr.len > 0 && VAR_20->m_pkthdr.len <= VAR_13);
 FUNC_3(VAR_20->m_pkthdr.pkt_flags & VAR_8);





 if (VAR_4 &&
     (FUNC_2(VAR_17, VAR_0) || FUNC_2(VAR_17, VAR_1))) {
  struct inpcb *VAR_30 = FUNC_15(VAR_17);
  if (VAR_30->inp_last_outifp != ((void*)0) &&
      !(VAR_30->inp_last_outifp->if_flags & VAR_7)) {
   VAR_25 = VAR_12;
   VAR_27 = VAR_20->m_pkthdr.len;
   FUNC_0(VAR_14, VAR_3,
       FUNC_4(VAR_17),
       ((VAR_17->so_state & VAR_11) ? VAR_16 : 0),
       (int64_t)VAR_27);
  }
 }

 FUNC_8(VAR_17, VAR_23);

 if (VAR_23->last_pid != FUNC_11(VAR_24)) {
  VAR_24 = FUNC_10(VAR_23->last_pid);
  if (VAR_24 == VAR_9) {
   VAR_24 = FUNC_5();
  } else {
   VAR_26 = VAR_12;
  }
 }





 FUNC_1(&VAR_24->p_stats->p_ru.ru_msgsnd);

 VAR_29 = FUNC_14(VAR_17, ((void*)0), VAR_20->m_pkthdr.len, 0, 1, 0, &VAR_28, ((void*)0));
 if (VAR_29)
  goto out;

 VAR_29 = (*VAR_17->so_proto->pr_usrreqs->pru_send)(VAR_17, 0, VAR_20, ((void*)0), ((void*)0), VAR_24);
 VAR_20 = ((void*)0);

out:
 if (VAR_20 != ((void*)0))
  FUNC_7(VAR_20);

 if (VAR_26)
  FUNC_12(VAR_24);

 FUNC_13(VAR_17);

 if (VAR_25) {
  FUNC_0(VAR_14, VAR_2,
      FUNC_4(VAR_17),
      ((VAR_29 == VAR_5) ? VAR_15 : 0),
      (int64_t)VAR_27);
 }

 return (VAR_29);

}
