
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_state; int so_timeo; int so_incqlen; int so_comp; int so_incomp; struct socket* so_head; TYPE_1__* so_proto; } ;
typedef int caddr_t ;
struct TYPE_2__ {int * pr_getlock; } ;


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
 int FUNC_0 (int *,struct socket*,int ) ;
 int FUNC_1 (int *,struct socket*,int ) ;
 int FUNC_2 (struct socket*,int ,int ) ;
 int FUNC_3 (struct socket*,int ,int *) ;
 int FUNC_4 (struct socket*,struct socket*) ;
 int VAR_11 ;
 int FUNC_5 (struct socket*) ;
 int VAR_12 ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*,int) ;
 int FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void
FUNC_14(struct socket *VAR_13)
{
 VAR_13->so_state &= ~(VAR_9|VAR_10|VAR_7);
 VAR_13->so_state |= VAR_8;

 FUNC_9(VAR_13, 0);

 FUNC_3(VAR_13, VAR_12, ((void*)0));

 if (VAR_13->so_head != ((void*)0) && (VAR_13->so_state & VAR_6)) {
  struct socket *VAR_14 = VAR_13->so_head;
  int VAR_15 = 0;




  if (VAR_14->so_proto->pr_getlock != ((void*)0)) {
   FUNC_6(VAR_14, 1);
   FUNC_4(VAR_14, VAR_13);
   VAR_15 = 1;
  }
  if (VAR_13->so_head == VAR_14 && (VAR_13->so_state & VAR_6)) {
   VAR_13->so_state &= ~VAR_6;
   VAR_13->so_state |= VAR_5;
   FUNC_1(&VAR_14->so_incomp, VAR_13, VAR_11);
   FUNC_0(&VAR_14->so_comp, VAR_13, VAR_11);
   VAR_14->so_incqlen--;





   if (VAR_15 != 0) {
    FUNC_5(VAR_14);
    FUNC_7(VAR_13, 0);
   }
   FUNC_2(VAR_14, 0, VAR_0);
   FUNC_10(VAR_14);
   FUNC_13((caddr_t)&VAR_14->so_timeo);

   if (VAR_15 != 0) {
    FUNC_7(VAR_14, 1);
    FUNC_6(VAR_13, 0);
   }
  } else if (VAR_15 != 0) {
   FUNC_5(VAR_14);
   FUNC_7(VAR_14, 1);
  }
 } else {
  FUNC_2(VAR_13, 0, VAR_1);
  FUNC_12((caddr_t)&VAR_13->so_timeo);
  FUNC_10(VAR_13);
  FUNC_11(VAR_13);
  FUNC_8(VAR_13, VAR_4 | VAR_2 |
      VAR_3);
 }
}
