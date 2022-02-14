
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_flags; } ;
struct socket {int so_state; int so_flags1; TYPE_1__ so_snd; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mptses {int dummy; } ;
struct mppcb {scalar_t__ mpp_state; } ;
struct mbuf {scalar_t__ m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 struct mppcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct mppcb*,struct mbuf*) ;
 int FUNC_4 (struct mptses*) ;
 struct mptses* FUNC_5 (struct mppcb*) ;
 int FUNC_6 (TYPE_1__*,struct mbuf*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_12, int VAR_13, struct mbuf *VAR_14,
    struct sockaddr *VAR_15, struct mbuf *VAR_16, struct proc *VAR_17)
{
#pragma unused(nam, p)
 struct mppcb *VAR_18 = FUNC_2(VAR_12);
 struct mptses *VAR_19;
 int VAR_20 = 0;

 if (VAR_13 & (VAR_6|VAR_5)) {
  VAR_20 = VAR_2;
  goto out;
 }

 if (VAR_15 != ((void*)0)) {
  VAR_20 = VAR_2;
  goto out;
 }

 if (VAR_16 != ((void*)0) && VAR_16->m_len != 0) {
  VAR_20 = VAR_2;
  goto out;
 }

 if (VAR_18 == ((void*)0) || VAR_18->mpp_state == VAR_4) {
  VAR_20 = VAR_0;
  goto out;
 }
 VAR_19 = FUNC_5(VAR_18);
 FUNC_0(VAR_19 != ((void*)0));

 if (!(VAR_12->so_state & VAR_9) &&
     !(VAR_12->so_flags1 & VAR_8)) {
  VAR_20 = VAR_1;
  goto out;
 }

 FUNC_3(VAR_18, VAR_14);
 FUNC_0(VAR_12->so_snd.sb_flags & VAR_7);
 FUNC_6(&VAR_12->so_snd, VAR_14);
 VAR_14 = ((void*)0);

 VAR_20 = FUNC_4(VAR_19);
 if (VAR_20 != 0)
  goto out;

 if (VAR_12->so_state & VAR_10) {
  if (VAR_12->so_state & VAR_11)
   VAR_20 = VAR_3;
  else
   VAR_20 = FUNC_7(&VAR_12->so_snd);
 }

out:
 if (VAR_20) {
  if (VAR_14 != ((void*)0))
   FUNC_1(VAR_14);
  if (VAR_16 != ((void*)0))
   FUNC_1(VAR_16);
 }
 return (VAR_20);
}
