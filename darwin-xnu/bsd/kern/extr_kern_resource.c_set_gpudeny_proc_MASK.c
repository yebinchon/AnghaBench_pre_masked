
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
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct proc*,struct proc*) ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct proc *VAR_4, struct proc *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 kauth_cred_t VAR_8;
 kauth_cred_t VAR_9;

 VAR_8 = FUNC_0();
 VAR_9 = FUNC_4(VAR_5);



 if (!FUNC_3(VAR_8) && FUNC_1(VAR_8) &&
     FUNC_2(VAR_8) != FUNC_2(VAR_9) &&
     FUNC_1(VAR_8) != FUNC_2(VAR_9)) {
  VAR_7 = VAR_1;
  goto out;
 }

 if (VAR_4 == VAR_5) {
  VAR_7 = VAR_1;
  goto out;
 }







 switch (VAR_6) {
  case 128:
   FUNC_8(FUNC_7(VAR_5), VAR_3);
   break;
  case 129:
   FUNC_8(FUNC_7(VAR_5), VAR_2);
   break;
  default:
   VAR_7 = VAR_0;
   goto out;
 }

out:
 FUNC_5(&VAR_9);
 return (VAR_7);

}
