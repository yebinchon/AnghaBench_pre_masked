
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; struct pt_regs* next_frame; } ;


 scalar_t__ FUNC_0 (struct pt_regs const*) ;

inline unsigned long FUNC_1(const struct pt_regs *VAR_0)
{
 while (VAR_0->next_frame)
  VAR_0 = VAR_0->next_frame;
 return FUNC_0(VAR_0) ? VAR_0->sp : 0;
}
