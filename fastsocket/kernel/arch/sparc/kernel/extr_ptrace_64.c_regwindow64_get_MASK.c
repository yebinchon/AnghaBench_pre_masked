
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win32 ;
struct task_struct {int dummy; } ;
struct reg_window32 {int * ins; int * locals; } ;
struct reg_window {int * ins; int * locals; } ;
struct pt_regs {unsigned long* u_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct task_struct*,unsigned long,struct reg_window32*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_5,
      const struct pt_regs *VAR_6,
      struct reg_window *VAR_7)
{
 unsigned long VAR_8 = VAR_6->u_regs[VAR_3];

 if (FUNC_1(VAR_4, VAR_2)) {
  struct reg_window32 VAR_9;
  int VAR_10;

  if (FUNC_0(VAR_5, VAR_8, &VAR_9, sizeof(VAR_9)))
   return -VAR_0;
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
   VAR_7->locals[VAR_10] = VAR_9[VAR_10];
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
   VAR_7->ins[VAR_10] = VAR_9[VAR_10];
 } else {
  VAR_8 += VAR_1;
  if (FUNC_0(VAR_5, VAR_8, VAR_7, sizeof(*VAR_7)))
   return -VAR_0;
 }

 return 0;
}
