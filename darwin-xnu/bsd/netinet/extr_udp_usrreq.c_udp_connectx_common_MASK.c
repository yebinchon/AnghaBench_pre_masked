
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
typedef int uint32_t ;
struct uio {int dummy; } ;
struct socket {TYPE_2__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_flags2; } ;
typedef int sae_connid_t ;
typedef int sae_associd_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sosend ) (struct socket*,int *,int ,int *,int *,int ) ;int (* pru_disconnectx ) (struct socket*,int ,int ) ;} ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inpcb*,int ,int *) ;
 int FUNC_3 (struct inpcb*,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct socket*,int ) ;
 struct inpcb* FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*,int *,int ,int *,int *,int ) ;
 int FUNC_9 (struct socket*,int ,int ) ;
 int FUNC_10 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_11 (struct socket*,struct sockaddr*,struct proc*) ;
 scalar_t__ FUNC_12 (struct uio*) ;

int
FUNC_13(struct socket *VAR_6, int VAR_7, struct sockaddr *VAR_8, struct sockaddr *VAR_9,
    struct proc *VAR_10, uint32_t VAR_11, sae_associd_t VAR_12, sae_connid_t *VAR_13,
    uint32_t VAR_14, void *VAR_15, uint32_t VAR_16,
    struct uio *VAR_17, user_ssize_t *VAR_18)
{
#pragma unused(aid, flags, arg, arglen)
 struct inpcb *VAR_19 = FUNC_7(VAR_6);
 int VAR_20 = 0;
 user_ssize_t VAR_21 = 0;

 if (VAR_19 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_9 != ((void*)0));

 FUNC_0(!(VAR_19->inp_flags2 & VAR_3));
 VAR_19->inp_flags2 |= VAR_3;






 if (VAR_11 != VAR_2 &&
  (VAR_20 = FUNC_2(VAR_19, VAR_11, ((void*)0))) != 0) {
  goto done;
 }


 if (VAR_8 != ((void*)0)) {
  VAR_20 = FUNC_4(VAR_6, VAR_8, 0);
  if (VAR_20 != 0) {
   goto done;
  }
 }

 switch (VAR_7) {
 case 129:
  VAR_20 = FUNC_11(VAR_6, VAR_9, VAR_10);
  break;





 default:
  FUNC_1(0);

 }

 if (VAR_20 != 0) {
  goto done;
 }





 if (VAR_17 != ((void*)0)) {
  FUNC_6(VAR_6, 0);

  FUNC_1(VAR_18 != ((void*)0));

  VAR_21 = FUNC_12(VAR_17);
  VAR_20 = VAR_6->so_proto->pr_usrreqs->pru_sosend(VAR_6, ((void*)0),
      (uio_t)VAR_17, ((void*)0), ((void*)0), 0);
  FUNC_5(VAR_6, 0);


  if (VAR_20 == 0 || VAR_20 == VAR_1)
   *VAR_18 = VAR_21 - FUNC_12(VAR_17);
  else
   (void) VAR_6->so_proto->pr_usrreqs->pru_disconnectx(VAR_6,
       VAR_4, VAR_5);




  if (VAR_20 == VAR_1)
   VAR_20 = 0;
 }

 if (VAR_20 == 0 && VAR_13 != ((void*)0))
  *VAR_13 = 1;

done:
 VAR_19->inp_flags2 &= ~VAR_3;
 return (VAR_20);
}
