
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct task_struct*,struct unw_frame_info*,unsigned long,unsigned long*,int) ;
 int FUNC_3 (struct task_struct*,struct unw_frame_info*,unsigned long,unsigned long*,int) ;
 int FUNC_4 (struct task_struct*,struct unw_frame_info*,unsigned long,unsigned long*,int) ;

__attribute__((used)) static int
FUNC_5(struct task_struct *VAR_0, struct unw_frame_info *VAR_1,
  unsigned long VAR_2, unsigned long *VAR_3, int VAR_4)
{
 if (VAR_2 >= FUNC_1(1) && VAR_2 <= FUNC_1(15))
  return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (VAR_2 >= FUNC_0(0) && VAR_2 <= FUNC_0(7))
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
