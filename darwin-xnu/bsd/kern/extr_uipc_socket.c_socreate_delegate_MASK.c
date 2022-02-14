
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct proc {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 struct proc* VAR_1 ;
 int FUNC_0 () ;
 struct proc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,struct socket**,int,int,int ,int ,struct proc*) ;

int
FUNC_5(int VAR_2, struct socket **VAR_3, int VAR_4, int VAR_5, pid_t VAR_6)
{
 int VAR_7 = 0;
 struct proc *VAR_8 = VAR_1;

 if ((FUNC_3() != VAR_6) && ((VAR_8 = FUNC_1(VAR_6)) == VAR_1)) {
  VAR_7 = VAR_0;
  goto done;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, FUNC_0(), 0, VAR_8);





done:
 if (VAR_8 != VAR_1)
  FUNC_2(VAR_8);

 return (VAR_7);
}
