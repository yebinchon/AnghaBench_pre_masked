
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct proc *VAR_4, struct proc *VAR_5, int *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 kauth_cred_t VAR_9, VAR_10;

 VAR_9 = FUNC_1();
 VAR_10 = FUNC_5(VAR_5);

 if (!FUNC_4(VAR_9) && FUNC_2(VAR_9) &&
     FUNC_3(VAR_9) != FUNC_3(VAR_10) &&
     FUNC_2(VAR_9) != FUNC_3(VAR_10)) {
  VAR_8 = VAR_0;
  goto out;
 }

 VAR_7 = (VAR_4 == VAR_5) ? VAR_3 : VAR_2;

 *VAR_6 = FUNC_7(FUNC_0(), VAR_7, VAR_1);

out:
 FUNC_6(&VAR_10);
 return (VAR_8);
}
