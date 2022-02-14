
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
struct uio {int dummy; } ;
struct socket {scalar_t__ so_type; int so_flags; int so_snd; TYPE_4__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {TYPE_2__* p_stats; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {TYPE_3__* pr_usrreqs; } ;
struct TYPE_7__ {int (* pru_send ) (struct socket*,int,struct mbuf*,int *,int *,struct proc*) ;} ;
struct TYPE_5__ {int ru_msgsnd; } ;
struct TYPE_6__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 struct proc* FUNC_2 () ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct uio*,int ,scalar_t__,int ,struct mbuf**) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct socket*,int *,struct mbuf**,struct mbuf**,int ) ;
 int FUNC_8 (struct socket*,struct proc*) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,int) ;
 int FUNC_11 (struct socket*,int) ;
 int FUNC_12 (struct socket*) ;
 int FUNC_13 (struct socket*,int *,scalar_t__,int ,int ,int,int*,int *) ;
 int FUNC_14 (struct socket*,int,struct mbuf*,int *,int *,struct proc*) ;
 scalar_t__ FUNC_15 (struct uio*) ;

__attribute__((used)) static int
FUNC_16(struct socket *VAR_15, struct sockaddr *VAR_16, struct uio *VAR_17,
    struct mbuf *VAR_18, struct mbuf *VAR_19, int VAR_20)
{
#pragma unused(addr)
 int32_t VAR_21;
 user_ssize_t VAR_22;
 int VAR_23, VAR_24;
 struct proc *VAR_25 = FUNC_2();
 int VAR_26 = 0;


 if (VAR_17 == ((void*)0) || VAR_18 != ((void*)0)) {
  VAR_23 = VAR_0;
  goto out;
 }
 VAR_22 = FUNC_15(VAR_17);

 FUNC_10(VAR_15, 1);
 FUNC_8(VAR_15, VAR_25);
 FUNC_9(VAR_15);

 FUNC_1(VAR_15->so_type == VAR_12);
 FUNC_1(!(VAR_15->so_flags & VAR_14));

 if ((VAR_20 & (VAR_8|VAR_4|VAR_7|VAR_9|VAR_6)) ||
     (VAR_15->so_flags & VAR_13)) {
  VAR_23 = VAR_2;
  FUNC_11(VAR_15, 1);
  goto out;
 }
 if (VAR_22 < 0 || (VAR_20 & VAR_5) || VAR_19 != ((void*)0)) {
  VAR_23 = VAR_0;
  FUNC_11(VAR_15, 1);
  goto out;
 }

 FUNC_0(&VAR_25->p_stats->p_ru.ru_msgsnd);

 do {
  VAR_23 = FUNC_13(VAR_15, ((void*)0), VAR_22, 0, 0, VAR_20,
      &VAR_26, ((void*)0));
  if (VAR_23 != 0)
   goto release;

  VAR_21 = FUNC_5(&VAR_15->so_snd);
  do {
   FUNC_11(VAR_15, 0);



   VAR_23 = FUNC_4(VAR_17, VAR_10, VAR_21, 0, &VAR_18);
   if (VAR_23 != 0) {
    FUNC_10(VAR_15, 0);
    goto release;
   }
   FUNC_1(VAR_18 != ((void*)0));
   VAR_21 -= VAR_22 - FUNC_15(VAR_17);
   VAR_22 = FUNC_15(VAR_17);
   FUNC_10(VAR_15, 0);




   VAR_24 = (VAR_22 > 0 && VAR_21 > 0) ?
       VAR_11 : 0;




   FUNC_1(VAR_19 == ((void*)0));
   VAR_23 = FUNC_7(VAR_15, ((void*)0), &VAR_18, &VAR_19, 0);
   if (VAR_23 != 0) {
    if (VAR_23 == VAR_1) {
     VAR_23 = 0;
     VAR_18 = ((void*)0);

    }
    goto release;
   }
   if (VAR_19 != ((void*)0)) {
    FUNC_3(VAR_19);
    VAR_19 = ((void*)0);
   }




   VAR_23 = (*VAR_15->so_proto->pr_usrreqs->pru_send)
       (VAR_15, VAR_24, VAR_18, ((void*)0), ((void*)0), VAR_25);

   VAR_18 = ((void*)0);
   if (VAR_23 != 0)
    goto release;
  } while (VAR_22 != 0 && VAR_21 > 0);
 } while (VAR_22 != 0);

release:
 if (VAR_26)
  FUNC_6(&VAR_15->so_snd, VAR_3);
 else
  FUNC_11(VAR_15, 1);
out:
 if (VAR_18 != ((void*)0))
  FUNC_3(VAR_18);
 if (VAR_19 != ((void*)0))
  FUNC_3(VAR_19);

 FUNC_12(VAR_15);

 return (VAR_23);
}
