
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_fpxregs_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int,int ,struct user_fpxregs_struct*) ;

void FUNC_2(int VAR_4)
{
 struct user_fpxregs_struct VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_4, 0, &VAR_5);
 if (!VAR_6)
  return;

 if (VAR_2 != VAR_0)
  FUNC_0("check_ptrace : PTRACE_GETFPXREGS failed, errno = %d",
        VAR_2);

 VAR_3 = 0;
}
