
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int u_int ;
typedef int u_char ;
struct uthread {int uu_sigmask; } ;
struct uio {int dummy; } ;
struct TYPE_7__ {int c_cc; } ;
struct tty {int t_hiwat; int t_column; int t_outcc; int t_timeout; int t_state; TYPE_5__ t_outq; int t_lflag; scalar_t__ t_rocount; int t_oflag; } ;
struct pgrp {scalar_t__ pg_jobc; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {int p_lflag; int p_sigignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pgrp* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (int *,int,TYPE_5__*) ;
 int VAR_18 ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,struct tty*) ;
 int FUNC_11 (struct pgrp*) ;
 int FUNC_12 (struct pgrp*,int ,int) ;
 struct pgrp* FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int *,int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_19 ;
 int FUNC_16 (struct tty*) ;
 int FUNC_17 (struct tty*) ;
 int FUNC_18 (struct tty*) ;
 scalar_t__ FUNC_19 (char,struct tty*) ;
 int FUNC_20 (struct tty*,int ,int,char*,int ) ;
 scalar_t__ FUNC_21 (struct uio*) ;
 int FUNC_22 (struct uio*,scalar_t__) ;
 int FUNC_23 (char*,int,struct uio*) ;

int
FUNC_24(struct tty *VAR_20, struct uio *VAR_21, int VAR_22)
{
 char *VAR_23 = ((void*)0);
 int VAR_24, VAR_25;
 proc_t VAR_26;
 int VAR_27, VAR_28, VAR_29;
 user_ssize_t VAR_30;
 char VAR_31[VAR_6];
 struct uthread *VAR_32;
 struct pgrp * VAR_33;

 FUNC_5(VAR_20);

 VAR_32 = (struct uthread *)FUNC_9(FUNC_8());
 VAR_28 = VAR_20->t_hiwat;
 VAR_30 = FUNC_21(VAR_21);
 VAR_29 = 0;
 VAR_24 = 0;
loop:
 if (FUNC_0(VAR_20->t_state, VAR_15)) {
  if (FUNC_21(VAR_21) == VAR_30)
   VAR_29 = VAR_2;
  goto out;
 }
 if (!FUNC_0(VAR_20->t_state, VAR_13)) {
  if (VAR_22 & VAR_5) {
   VAR_29 = VAR_3;
   goto out;
  }
  VAR_29 = FUNC_20(VAR_20, FUNC_3(VAR_20), VAR_16 | VAR_8,
     "ttydcd", 0);
  if (VAR_29) {
   goto out; }
  goto loop;
 }



 VAR_26 = FUNC_7();
 if (FUNC_10(VAR_26, VAR_20) &&
     FUNC_0(VAR_20->t_lflag, VAR_12) && (VAR_26->p_lflag & VAR_10) == 0 &&
     (VAR_26->p_sigignore & FUNC_15(VAR_11)) == 0 &&
     (VAR_32->uu_sigmask & FUNC_15(VAR_11)) == 0) {

  VAR_33 = FUNC_13(VAR_26);
  if (VAR_33 == VAR_9) {
   VAR_29 = VAR_2;
   goto out;
  }
  if (VAR_33->pg_jobc == 0) {

   FUNC_18(VAR_20);
   FUNC_11(VAR_33);
   FUNC_17(VAR_20);
   VAR_29 = VAR_2;
   goto out;
  }

  FUNC_18(VAR_20);
  FUNC_12(VAR_33, VAR_11, 1);
  FUNC_11(VAR_33);
  FUNC_17(VAR_20);






  VAR_29 = VAR_1;
   goto out;
 }





 while (FUNC_21(VAR_21) > 0 || VAR_24 > 0) {
  if (FUNC_0(VAR_20->t_lflag, VAR_4)) {
   FUNC_22(VAR_21, 0);
   return (0);
  }
  if (VAR_20->t_outq.c_cc > VAR_28)
   goto ovhiwat;




  if (VAR_24 == 0) {
   VAR_24 = FUNC_1(FUNC_21(VAR_21), VAR_6);
   VAR_23 = VAR_31;
   VAR_29 = FUNC_23(VAR_23, VAR_24, VAR_21);
   if (VAR_29) {
    VAR_24 = 0;
    break;
   }
  }
  while (VAR_24 > 0) {
   if (!FUNC_0(VAR_20->t_oflag, VAR_7))
    VAR_25 = VAR_24;
   else {
    VAR_25 = VAR_24 - FUNC_14((u_int)VAR_24, (u_char *)VAR_23,
      VAR_18, VAR_0);




    if (VAR_25 == 0) {
     VAR_20->t_rocount = 0;
     if (FUNC_19(*VAR_23, VAR_20) >= 0) {

      goto overfull;
     }
     VAR_23++;
     VAR_24--;
     if (FUNC_0(VAR_20->t_lflag, VAR_4) ||
         VAR_20->t_outq.c_cc > VAR_28)
      goto ovhiwat;
     continue;
    }
   }
   VAR_20->t_rocount = 0;
   VAR_27 = FUNC_6((u_char *)VAR_23, VAR_25, &VAR_20->t_outq);
   VAR_25 -= VAR_27;
   VAR_20->t_column += VAR_25;
   VAR_23 += VAR_25;
   VAR_24 -= VAR_25;
   VAR_19 += VAR_25;
   VAR_20->t_outcc += VAR_25;
   if (VAR_27 > 0) {

    goto overfull;
   }
   if (FUNC_0(VAR_20->t_lflag, VAR_4) ||
       VAR_20->t_outq.c_cc > VAR_28)
    break;
  }
  FUNC_16(VAR_20);
 }
out:





 FUNC_22(VAR_21, (FUNC_21(VAR_21) + VAR_24));
 return (VAR_29);

overfull:







 VAR_28 = VAR_20->t_outq.c_cc - 1;

ovhiwat:
 FUNC_16(VAR_20);




 if (VAR_20->t_outq.c_cc <= VAR_28) {
  goto loop;
 }
 if (VAR_22 & VAR_5) {
  FUNC_22(VAR_21, (FUNC_21(VAR_21) + VAR_24));
  return (FUNC_21(VAR_21) == VAR_30 ? VAR_3 : 0);
 }
 FUNC_2(VAR_20->t_state, VAR_14);
 VAR_29 = FUNC_20(VAR_20, FUNC_4(VAR_20), VAR_17 | VAR_8, "ttywri",
    VAR_20->t_timeout);
 if (VAR_29 == VAR_3)
  VAR_29 = VAR_2;
 if (VAR_29)
  goto out;
 goto loop;
}
