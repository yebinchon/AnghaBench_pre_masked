
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
struct uio {int dummy; } ;
struct socket {TYPE_2__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {int dummy; } ;
typedef int sae_connid_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sosend ) (struct socket*,int *,int ,int *,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*,int ) ;
 struct inpcb* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*,int *,int ,int *,int *,int ) ;
 scalar_t__ FUNC_6 (struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_3, struct sockaddr *VAR_4,
    struct proc *VAR_5, sae_connid_t *VAR_6, struct uio *VAR_7, user_ssize_t *VAR_8)
{
 struct inpcb *VAR_9 = FUNC_4(VAR_3);
 int VAR_10;

 if (VAR_9 == ((void*)0)) {
  return (VAR_1);
 }

 FUNC_0(VAR_4 != ((void*)0));

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5);

 if (VAR_10 != 0) {
  return VAR_10;
 }


 if (VAR_7 != ((void*)0)) {
  user_ssize_t VAR_11 = 0;

  FUNC_3(VAR_3, 0);

  FUNC_0(VAR_8 != ((void*)0));

  VAR_11 = FUNC_6(VAR_7);
  VAR_10 = VAR_3->so_proto->pr_usrreqs->pru_sosend(VAR_3, ((void*)0), (uio_t)VAR_7, ((void*)0), ((void*)0), 0);
  FUNC_2(VAR_3, 0);

  if (VAR_10 == 0 || VAR_10 == VAR_2) {
   *VAR_8 = VAR_11 - FUNC_6(VAR_7);
  }
  if (VAR_10 == VAR_2) {
   VAR_10 = VAR_0;
  }
 }

 if (VAR_10 == 0 && VAR_6 != ((void*)0)) {
  *VAR_6 = 1;
 }

 return (VAR_10);
}
