
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ uregs; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static inline int FUNC_0(struct task_struct *VAR_0, int VAR_1)
{
 return *(unsigned long *)
  ((unsigned long) VAR_0->thread.uregs + VAR_1);
}
