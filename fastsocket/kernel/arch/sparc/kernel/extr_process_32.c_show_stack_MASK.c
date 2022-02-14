
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct reg_window32 {unsigned long* ins; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5;
 struct reg_window32 *VAR_6;
 int VAR_7 = 0;

 if (VAR_1 != ((void*)0))
  VAR_5 = (unsigned long) FUNC_2(VAR_1);
 else
  VAR_5 = (unsigned long) FUNC_0();

 VAR_4 = (unsigned long) VAR_2;
 do {

  if (VAR_4 < (VAR_5 + sizeof(struct thread_info)) ||
      VAR_4 >= (VAR_5 + (VAR_0 << 1)))
   break;
  VAR_6 = (struct reg_window32 *) VAR_4;
  VAR_3 = VAR_6->ins[7];
  FUNC_1("[%08lx : ", VAR_3);
  FUNC_1("%pS ] ", (void *) VAR_3);
  VAR_4 = VAR_6->ins[6];
 } while (++VAR_7 < 16);
 FUNC_1("\n");
}
