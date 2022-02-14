
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct pt_regs {int dummy; } ;
struct dwarf_frame {unsigned long return_addr; } ;


 int FUNC_0 (struct dwarf_frame*) ;
 int VAR_0 ;
 struct dwarf_frame* FUNC_1 (unsigned long,struct dwarf_frame*) ;
 int FUNC_2 (struct dwarf_frame*,int ) ;
 int FUNC_3 (void*,unsigned long,int) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_1,
    struct pt_regs *VAR_2,
    unsigned long *VAR_3,
    const struct stacktrace_ops *VAR_4,
    void *VAR_5)
{
 struct dwarf_frame *VAR_6, *VAR_7;
 unsigned long VAR_8;

 VAR_7 = ((void*)0);
 VAR_8 = 0;

 while (1) {
  VAR_6 = FUNC_1(VAR_8, VAR_7);

  if (VAR_7) {
   FUNC_0(VAR_7);
   FUNC_2(VAR_7, VAR_0);
  }

  VAR_7 = VAR_6;

  if (!VAR_6 || !VAR_6->return_addr)
   break;

  VAR_8 = VAR_6->return_addr;
  VAR_4->address(VAR_5, VAR_8, 1);
 }
}
