
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int t_state; TYPE_1__* t_session; int t_cflag; } ;
struct TYPE_2__ {scalar_t__ s_leader; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct tty*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*,int) ;
 int FUNC_10 (struct tty*,int ) ;
 int FUNC_11 (int ) ;

int
FUNC_12(struct tty *VAR_11, int VAR_12)
{
 int VAR_13 = 1;

 FUNC_4(VAR_11);

 if (FUNC_1(VAR_11->t_state, VAR_5) && FUNC_1(VAR_11->t_cflag, VAR_3)) {





  if (VAR_12) {
   FUNC_0(VAR_11->t_state, VAR_6);
   FUNC_0(VAR_11->t_state, VAR_9);
   FUNC_6(VAR_11);
  } else if (!FUNC_1(VAR_11->t_state, VAR_6)) {
   FUNC_2(VAR_11->t_state, VAR_6);
   FUNC_2(VAR_11->t_state, VAR_9);
                        FUNC_10(VAR_11, 0);
  }
 } else if (VAR_12 == 0) {



  FUNC_0(VAR_11->t_state, VAR_5);
  if (FUNC_1(VAR_11->t_state, VAR_8) &&
      !FUNC_1(VAR_11->t_cflag, VAR_0)) {
   FUNC_2(VAR_11->t_state, VAR_10);
   FUNC_0(VAR_11->t_state, VAR_7);
   if (VAR_11->t_session && VAR_11->t_session->s_leader)
    FUNC_5(VAR_11->t_session->s_leader, VAR_4);
   FUNC_9(VAR_11, VAR_1 | VAR_2);
   VAR_13 = 0;
   goto out;
  }
 } else {



  FUNC_2(VAR_11->t_state, VAR_5);
  if (!FUNC_1(VAR_11->t_state, VAR_10))
   FUNC_2(VAR_11->t_state, VAR_7);
  FUNC_11(FUNC_3(VAR_11));
  FUNC_7(VAR_11);
  FUNC_8(VAR_11);
 }

out:
 return (VAR_13);
}
