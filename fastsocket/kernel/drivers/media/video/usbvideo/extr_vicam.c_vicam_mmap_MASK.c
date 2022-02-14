
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct vicam_camera {scalar_t__ framebuf; } ;
struct file {struct vicam_camera* private_data; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_4, struct vm_area_struct *VAR_5)
{

 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8 = VAR_5->vm_start;
 unsigned long VAR_9 = VAR_5->vm_end-VAR_5->vm_start;
 struct vicam_camera *VAR_10 = VAR_4->private_data;

 if (!VAR_10)
  return -VAR_1;

 FUNC_0("vicam_mmap: %ld\n", VAR_9);







 VAR_7 = (unsigned long)VAR_10->framebuf;
 while (VAR_9 > 0) {
  VAR_6 = FUNC_2((void *)VAR_7);
  if (FUNC_1(VAR_5, VAR_8, VAR_6, VAR_3, VAR_2))
   return -VAR_0;

  VAR_8 += VAR_3;
  VAR_7 += VAR_3;
  if (VAR_9 > VAR_3)
   VAR_9 -= VAR_3;
  else
   VAR_9 = 0;
 }

 return 0;
}
