
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_flags; int * vm_ops; } ;
struct file {struct b3dfg_dev* private_data; } ;
struct b3dfg_dev {int frame_size; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_8, struct vm_area_struct *VAR_9)
{
 struct b3dfg_dev *VAR_10 = VAR_8->private_data;
 unsigned long VAR_11 = VAR_9->vm_pgoff << VAR_1;
 unsigned long VAR_12 = VAR_9->vm_end - VAR_9->vm_start;
 unsigned long VAR_13 = VAR_6 * VAR_10->frame_size * 3;
 unsigned long VAR_14 = VAR_13 - VAR_11;
 int VAR_15 = 0;

 if (VAR_12 <= VAR_14) {
  VAR_9->vm_flags |= VAR_3 | VAR_5 | VAR_2 |
     VAR_4;
  VAR_9->vm_ops = &VAR_7;
 } else {
  VAR_15 = -VAR_0;
 }

 return VAR_15;
}
