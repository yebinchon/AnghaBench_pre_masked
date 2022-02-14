
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_10__ {TYPE_4__* mm; } ;
struct TYPE_9__ {int start_stack; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_5__* VAR_4 ;
 struct vm_area_struct* FUNC_1 (TYPE_4__*,unsigned long) ;
 int FUNC_2 (char*,unsigned long,...) ;

unsigned long FUNC_3(struct file *VAR_5, unsigned long VAR_6, unsigned long VAR_7,
         unsigned long VAR_8, unsigned long VAR_9)
{
 struct vm_area_struct *VAR_10;
 unsigned long VAR_11;

 if (VAR_7 > VAR_3)
  return -VAR_0;


 if (VAR_9 & VAR_1)
  return VAR_6;


 if (VAR_6) {
  VAR_6 = FUNC_0(VAR_6);
  VAR_10 = FUNC_1(VAR_4->mm, VAR_6);
  if (VAR_3 - VAR_7 >= VAR_6 &&
      (!VAR_10 || VAR_6 + VAR_7 <= VAR_10->vm_start))
   goto success;
 }


 VAR_6 = VAR_2;
 VAR_11 = (VAR_4->mm->start_stack - 0x00200000);
 if (VAR_6 + VAR_7 <= VAR_11) {
  VAR_11 -= VAR_7;

  if (VAR_6 <= VAR_11) {
   VAR_10 = FUNC_1(VAR_4->mm, VAR_2);
   for (; VAR_10; VAR_10 = VAR_10->vm_next) {
    if (VAR_6 > VAR_11)
     break;
    if (VAR_6 + VAR_7 <= VAR_10->vm_start)
     goto success;
    VAR_6 = VAR_10->vm_end;
   }
  }
 }


 VAR_6 = FUNC_0(0x80000000);
 VAR_11 = VAR_3 - VAR_7;
 if (VAR_6 <= VAR_11) {
  VAR_10 = FUNC_1(VAR_4->mm, VAR_6);
  for (; VAR_10; VAR_10 = VAR_10->vm_next) {
   if (VAR_6 > VAR_11)
    break;
   if (VAR_6 + VAR_7 <= VAR_10->vm_start)
    goto success;
   VAR_6 = VAR_10->vm_end;
  }

  if (!VAR_10 && VAR_6 <= VAR_11)
   goto success;
 }





 return -VAR_0;

 success:




 return VAR_6;
}
