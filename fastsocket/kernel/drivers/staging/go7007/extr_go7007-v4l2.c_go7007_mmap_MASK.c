
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; scalar_t__ vm_end; scalar_t__ vm_start; unsigned int vm_pgoff; TYPE_2__* vm_private_data; int * vm_ops; } ;
struct go7007_file {unsigned int buf_count; int lock; TYPE_2__* bufs; TYPE_1__* go; } ;
struct file {struct go7007_file* private_data; } ;
struct TYPE_4__ {int mapped; scalar_t__ user_addr; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 struct go7007_file *VAR_12 = VAR_10->private_data;
 unsigned int VAR_13;

 if (VAR_12->go->status != VAR_5)
  return -VAR_2;
 if (!(VAR_11->vm_flags & VAR_8))
  return -VAR_1;
 if (VAR_11->vm_end - VAR_11->vm_start != VAR_4)
  return -VAR_1;
 FUNC_0(&VAR_12->lock);
 VAR_13 = VAR_11->vm_pgoff / VAR_3;
 if (VAR_13 >= VAR_12->buf_count) {
  FUNC_1(&VAR_12->lock);
  return -VAR_1;
 }
 if (VAR_13 * VAR_3 != VAR_11->vm_pgoff) {
  FUNC_1(&VAR_12->lock);
  return -VAR_1;
 }
 if (VAR_12->bufs[VAR_13].mapped > 0) {
  FUNC_1(&VAR_12->lock);
  return -VAR_0;
 }
 VAR_12->bufs[VAR_13].mapped = 1;
 VAR_12->bufs[VAR_13].user_addr = VAR_11->vm_start;
 VAR_11->vm_ops = &VAR_9;
 VAR_11->vm_flags |= VAR_6;
 VAR_11->vm_flags &= ~VAR_7;
 VAR_11->vm_private_data = &VAR_12->bufs[VAR_13];
 FUNC_1(&VAR_12->lock);
 return 0;
}
