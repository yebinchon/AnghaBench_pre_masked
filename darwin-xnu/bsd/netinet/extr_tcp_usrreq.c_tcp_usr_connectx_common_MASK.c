
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
typedef int uint32_t ;
struct uio {int dummy; } ;
struct socket {int so_flags1; TYPE_2__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_flags2; } ;
typedef int sae_connid_t ;
typedef int sae_associd_t ;
struct TYPE_6__ {int t_flagsext; } ;
struct TYPE_5__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_4__ {int (* pru_sosend ) (struct socket*,int *,int ,int *,int *,int ) ;} ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inpcb*,int ,int *) ;
 int FUNC_3 (struct inpcb*,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct socket*,int ) ;
 struct inpcb* FUNC_7 (struct socket*) ;
 TYPE_3__* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int *,int ,int *,int *,int ) ;
 int FUNC_10 (struct socket*,struct sockaddr*,struct proc*) ;
 int VAR_9 ;
 int FUNC_11 (struct socket*,struct sockaddr*,struct proc*) ;
 scalar_t__ FUNC_12 (struct uio*) ;

__attribute__((used)) static int
FUNC_13(struct socket *VAR_10, int VAR_11,
    struct sockaddr *VAR_12, struct sockaddr *VAR_13,
    struct proc *VAR_14, uint32_t VAR_15, sae_associd_t VAR_16, sae_connid_t *VAR_17,
    uint32_t VAR_18, void *VAR_19, uint32_t VAR_20, struct uio *VAR_21,
    user_ssize_t *VAR_22)
{
#pragma unused(aid, flags, arg, arglen)
 struct inpcb *VAR_23 = FUNC_7(VAR_10);
 int VAR_24 = 0;
 user_ssize_t VAR_25 = 0;

 if (VAR_23 == ((void*)0))
  return (VAR_1);

 FUNC_1(VAR_13 != ((void*)0));

 FUNC_0(!(VAR_23->inp_flags2 & VAR_4));
 VAR_23->inp_flags2 |= VAR_4;





 if ((VAR_10->so_flags1 & VAR_5) &&
     (VAR_9 & VAR_7))
  FUNC_8(VAR_10)->t_flagsext |= VAR_8;


 if (VAR_15 != VAR_3 &&
  (VAR_24 = FUNC_2(VAR_23, VAR_15, ((void*)0))) != 0) {
  goto done;
 }


 if (VAR_12 != ((void*)0)) {
  VAR_24 = FUNC_4(VAR_10, VAR_12, 0);
  if (VAR_24 != 0) {
   goto done;
  }
 }

 switch (VAR_11) {
 case 129:
  VAR_24 = FUNC_11(VAR_10, VAR_13, VAR_14);
  break;





 default:
  FUNC_1(0);

 }

 if (VAR_24 != 0) {
  goto done;
 }


 if (VAR_21 != ((void*)0)) {
  FUNC_6(VAR_10, 0);

  FUNC_1(VAR_22 != ((void*)0));

  VAR_25 = FUNC_12(VAR_21);
  VAR_24 = VAR_10->so_proto->pr_usrreqs->pru_sosend(VAR_10, ((void*)0),
             (uio_t)VAR_21, ((void*)0), ((void*)0), 0);
  FUNC_5(VAR_10, 0);

  if (VAR_24 == 0 || VAR_24 == VAR_2)
   *VAR_22 = VAR_25 - FUNC_12(VAR_21);
  if (VAR_24 == VAR_2)
   VAR_24 = VAR_0;
 }

 if (VAR_24 == 0 && VAR_17 != ((void*)0))
  *VAR_17 = 1;

done:
 if (VAR_24 && VAR_24 != VAR_0)
  VAR_10->so_flags1 &= ~VAR_6;

 VAR_23->inp_flags2 &= ~VAR_4;
 return (VAR_24);
}
