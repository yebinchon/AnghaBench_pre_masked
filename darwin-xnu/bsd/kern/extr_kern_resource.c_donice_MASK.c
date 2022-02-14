
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_nice; int p_acflag; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct proc*,struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int
FUNC_9(struct proc *VAR_4, struct proc *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 kauth_cred_t VAR_8;
 kauth_cred_t VAR_9;

 VAR_8 = FUNC_2(VAR_4);
 VAR_9 = FUNC_2(VAR_5);

 if (FUNC_8(VAR_8, ((void*)0)) && FUNC_0(VAR_8) &&
     FUNC_1(VAR_8) != FUNC_1(VAR_9) &&
     FUNC_0(VAR_8) != FUNC_1(VAR_9)) {
  VAR_7 = VAR_1;
  goto out;
 }
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 if (VAR_6 < VAR_3)
  VAR_6 = VAR_3;
 if (VAR_6 < VAR_5->p_nice && FUNC_8(VAR_8, &VAR_4->p_acflag)) {
  VAR_7 = VAR_0;
  goto out;
 }





 FUNC_5(VAR_5);
 VAR_5->p_nice = VAR_6;
 FUNC_6(VAR_5);
 (void)FUNC_7(VAR_5);
out:
 FUNC_3(&VAR_8);
 FUNC_3(&VAR_9);
 return (VAR_7);
}
