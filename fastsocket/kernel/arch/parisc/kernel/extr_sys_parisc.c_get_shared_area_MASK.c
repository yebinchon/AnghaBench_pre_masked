
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_end; struct vm_area_struct* vm_next; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct address_space*) ;

__attribute__((used)) static unsigned long FUNC_3(struct address_space *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 struct vm_area_struct *VAR_7;
 int VAR_8 = VAR_3 ? FUNC_2(VAR_3) : 0;

 VAR_4 = FUNC_0(VAR_4 - VAR_8) + VAR_8;

 for (VAR_7 = FUNC_1(VAR_2->mm, VAR_4); ; VAR_7 = VAR_7->vm_next) {

  if (VAR_1 - VAR_5 < VAR_4)
   return -VAR_0;
  if (!VAR_7 || VAR_4 + VAR_5 <= VAR_7->vm_start)
   return VAR_4;
  VAR_4 = FUNC_0(VAR_7->vm_end - VAR_8) + VAR_8;
  if (VAR_4 < VAR_7->vm_end)
   return -VAR_0;
 }
}
