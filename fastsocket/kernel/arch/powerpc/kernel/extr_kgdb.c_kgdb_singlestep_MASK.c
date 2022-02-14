
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct pt_regs {int* gpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,struct pt_regs*) ;
 int FUNC_2 (struct thread_info*,struct thread_info*,int) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_2)
{
 struct thread_info *VAR_3, *VAR_4;

 if (FUNC_3(VAR_2))
  return 0;
 VAR_3 = (struct thread_info *)(VAR_2->gpr[1] & ~(VAR_1-1));
 VAR_4 = FUNC_0();

 if (VAR_3 != VAR_4)
  FUNC_2(VAR_4, VAR_3, sizeof *VAR_3);

 FUNC_1(0, VAR_0, 0, VAR_2);

 if (VAR_3 != VAR_4)
  FUNC_2(VAR_3, VAR_4, sizeof *VAR_3);

 return 1;
}
