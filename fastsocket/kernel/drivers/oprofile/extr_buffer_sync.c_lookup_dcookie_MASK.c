
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; TYPE_1__* vm_file; struct vm_area_struct* vm_next; } ;
struct mm_struct {int dummy; } ;
typedef unsigned long off_t ;
struct TYPE_2__ {int f_path; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_2(struct mm_struct *VAR_3, unsigned long VAR_4, off_t *VAR_5)
{
 unsigned long VAR_6 = VAR_1;
 struct vm_area_struct *VAR_7;

 for (VAR_7 = FUNC_1(VAR_3, VAR_4); VAR_7; VAR_7 = VAR_7->vm_next) {

  if (VAR_4 < VAR_7->vm_start || VAR_4 >= VAR_7->vm_end)
   continue;

  if (VAR_7->vm_file) {
   VAR_6 = FUNC_0(&VAR_7->vm_file->f_path);
   *VAR_5 = (VAR_7->vm_pgoff << VAR_2) + VAR_4 -
    VAR_7->vm_start;
  } else {

   *VAR_5 = VAR_4;
  }

  break;
 }

 if (!VAR_7)
  VAR_6 = VAR_0;

 return VAR_6;
}
