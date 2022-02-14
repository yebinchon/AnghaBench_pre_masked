
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_pgoff; int vm_mm; scalar_t__ vm_start; scalar_t__ vm_end; int * vm_ops; } ;
struct inode {int i_size; int i_mutex; } ;
struct hstate {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*) ;
 struct hstate* FUNC_1 (struct file*) ;
 int FUNC_2 (struct hstate*) ;
 int FUNC_3 (struct hstate*) ;
 int FUNC_4 (struct hstate*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct inode*,int,int,struct vm_area_struct*,int) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 struct inode *VAR_9 = VAR_7->f_path.dentry->d_inode;
 loff_t VAR_10, VAR_11;
 int VAR_12;
 struct hstate *VAR_13 = FUNC_1(VAR_7);
 VAR_8->vm_flags |= VAR_3 | VAR_4;
 VAR_8->vm_ops = &VAR_6;

 if (VAR_8->vm_pgoff & ~(FUNC_2(VAR_13) >> VAR_2))
  return -VAR_0;

 VAR_11 = (loff_t)(VAR_8->vm_end - VAR_8->vm_start);

 FUNC_7(&VAR_9->i_mutex);
 FUNC_0(VAR_7);

 VAR_12 = -VAR_1;
 VAR_10 = VAR_11 + ((loff_t)VAR_8->vm_pgoff << VAR_2);

 if (FUNC_6(VAR_9,
    VAR_8->vm_pgoff >> FUNC_3(VAR_13),
    VAR_10 >> FUNC_4(VAR_13), VAR_8,
    VAR_8->vm_flags))
  goto out;

 VAR_12 = 0;
 FUNC_5(VAR_8->vm_mm);
 if (VAR_8->vm_flags & VAR_5 && VAR_9->i_size < VAR_10)
  VAR_9->i_size = VAR_10;
out:
 FUNC_8(&VAR_9->i_mutex);

 return VAR_12;
}
