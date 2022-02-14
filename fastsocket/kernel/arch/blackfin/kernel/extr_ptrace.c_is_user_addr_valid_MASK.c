
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct task_struct {TYPE_2__* mm; } ;
struct sram_list_struct {unsigned long length; scalar_t__ addr; struct sram_list_struct* next; } ;
struct TYPE_3__ {struct sram_list_struct* sram_list; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct vm_area_struct* FUNC_0 (TYPE_2__*,unsigned long) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_3,
         unsigned long VAR_4, unsigned long VAR_5)
{
 struct vm_area_struct *VAR_6;
 struct sram_list_struct *VAR_7;


 if (VAR_4 + VAR_5 < VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3->mm, VAR_4);
 if (VAR_6 && VAR_4 >= VAR_6->vm_start && VAR_4 + VAR_5 <= VAR_6->vm_end)
   return 0;

 for (VAR_7 = VAR_3->mm->context.sram_list; VAR_7; VAR_7 = VAR_7->next)
  if (VAR_4 >= (unsigned long)VAR_7->addr
      && VAR_4 + VAR_5 < (unsigned long)VAR_7->addr + VAR_7->length)
   return 0;

 if (VAR_4 >= VAR_2 && VAR_4 + VAR_5 < VAR_1)
  return 0;

 return -VAR_0;
}
