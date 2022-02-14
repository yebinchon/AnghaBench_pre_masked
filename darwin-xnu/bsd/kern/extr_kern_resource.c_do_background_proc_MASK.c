
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct proc*,struct proc*) ;
 int FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (struct proc*) ;

__attribute__((used)) static int
FUNC_9(struct proc *VAR_6, struct proc *VAR_7, int VAR_8)
{

#pragma unused(curp)

 int VAR_9 = 0;
 kauth_cred_t VAR_10;
 kauth_cred_t VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_0();
 VAR_11 = FUNC_4(VAR_7);

 if (!FUNC_3(VAR_10) && FUNC_1(VAR_10) &&
  FUNC_2(VAR_10) != FUNC_2(VAR_11) &&
  FUNC_1(VAR_10) != FUNC_2(VAR_11))
 {
  VAR_9 = VAR_0;
  goto out;
 }







 VAR_12 = (VAR_6 == VAR_7) ? VAR_5 : VAR_4;

 switch (VAR_8) {
  case 129:
   VAR_13 = VAR_3;
   break;
  case 128:

   goto out;
  default:

   VAR_13 = VAR_2;
   break;
 }

 FUNC_7(FUNC_8(VAR_7), VAR_12, VAR_1, VAR_13);

out:
 FUNC_5(&VAR_11);
 return (VAR_9);
}
