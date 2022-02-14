
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (struct pt_regs*,unsigned long) ;
 unsigned long FUNC_2 (struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_3 (struct unw_frame_info*,int ,unsigned long*) ;
 int FUNC_4 (struct unw_frame_info*,unsigned long,unsigned long*,char*) ;
 scalar_t__ FUNC_5 (struct unw_frame_info*,int ,unsigned long) ;
 int FUNC_6 (struct unw_frame_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_7 (struct task_struct *VAR_1, struct pt_regs *VAR_2,
   struct unw_frame_info *VAR_3,
   unsigned long *VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 char VAR_10 = 0;

 if (VAR_5) {
  VAR_7 = *VAR_4;
  VAR_8 = FUNC_2(VAR_2, VAR_7);
  if (FUNC_5(VAR_3, VAR_0, VAR_8) < 0) {
   FUNC_0("ptrace: failed to set ar.unat\n");
   return -1;
  }
  for (VAR_6 = 4; VAR_6 <= 7; ++VAR_6) {
   FUNC_4(VAR_3, VAR_6, &VAR_9, &VAR_10);
   FUNC_6(VAR_3, VAR_6, VAR_9,
       (VAR_7 >> VAR_6) & 1);
  }
 } else {
  if (FUNC_3(VAR_3, VAR_0, &VAR_8) < 0) {
   FUNC_0("ptrace: failed to read ar.unat\n");
   return -1;
  }
  VAR_7 = FUNC_1(VAR_2, VAR_8);
  for (VAR_6 = 4; VAR_6 <= 7; ++VAR_6) {
   FUNC_4(VAR_3, VAR_6, &VAR_9, &VAR_10);
   VAR_7 |= (VAR_10 != 0) << VAR_6;
  }
  *VAR_4 = VAR_7;
 }
 return 0;
}
