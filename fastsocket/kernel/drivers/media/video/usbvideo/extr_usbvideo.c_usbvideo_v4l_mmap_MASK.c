
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct uvd {int max_frame_size; scalar_t__ fbuf; } ;
struct file {struct uvd* private_data; } ;


 int FUNC_0 (struct uvd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 unsigned long FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct uvd *VAR_8 = VAR_6->private_data;
 unsigned long VAR_9 = VAR_7->vm_start;
 unsigned long VAR_10 = VAR_7->vm_end-VAR_7->vm_start;
 unsigned long VAR_11, VAR_12;

 if (!FUNC_0(VAR_8))
  return -VAR_1;

 if (VAR_10 > (((VAR_5 * VAR_8->max_frame_size) + VAR_4 - 1) & ~(VAR_4 - 1)))
  return -VAR_2;

 VAR_12 = (unsigned long) VAR_8->fbuf;
 while (VAR_10 > 0) {
  VAR_11 = FUNC_2((void *)VAR_12);
  if (FUNC_1(VAR_7, VAR_9, VAR_11, VAR_4, VAR_3))
   return -VAR_0;

  VAR_9 += VAR_4;
  VAR_12 += VAR_4;
  if (VAR_10 > VAR_4)
   VAR_10 -= VAR_4;
  else
   VAR_10 = 0;
 }

 return 0;
}
