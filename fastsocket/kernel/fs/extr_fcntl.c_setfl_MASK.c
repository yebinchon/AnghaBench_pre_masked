
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {unsigned long f_flags; int f_lock; TYPE_5__* f_op; TYPE_4__* f_mapping; TYPE_2__ f_path; } ;
struct TYPE_10__ {int (* check_flags ) (unsigned long) ;int (* fasync ) (int,struct file*,int) ;} ;
struct TYPE_9__ {TYPE_3__* a_ops; } ;
struct TYPE_8__ {int direct_IO; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int,struct file*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_9, struct file * VAR_10, unsigned long VAR_11)
{
 struct inode * VAR_12 = VAR_10->f_path.dentry->d_inode;
 int VAR_13 = 0;





 if (((VAR_11 ^ VAR_10->f_flags) & VAR_3) && FUNC_0(VAR_12))
  return -VAR_1;


 if ((VAR_11 & VAR_6) && !(VAR_10->f_flags & VAR_6))
  if (!FUNC_1(VAR_12))
   return -VAR_1;


 if (VAR_7 != VAR_5)
        if (VAR_11 & VAR_5)
     VAR_11 |= VAR_7;

 if (VAR_11 & VAR_4) {
  if (!VAR_10->f_mapping || !VAR_10->f_mapping->a_ops ||
   !VAR_10->f_mapping->a_ops->direct_IO)
    return -VAR_0;
 }

 if (VAR_10->f_op && VAR_10->f_op->check_flags)
  VAR_13 = VAR_10->f_op->check_flags(VAR_11);
 if (VAR_13)
  return VAR_13;




 if (((VAR_11 ^ VAR_10->f_flags) & VAR_2) && VAR_10->f_op &&
   VAR_10->f_op->fasync) {
  VAR_13 = VAR_10->f_op->fasync(VAR_9, VAR_10, (VAR_11 & VAR_2) != 0);
  if (VAR_13 < 0)
   goto out;
  if (VAR_13 > 0)
   VAR_13 = 0;
 }
 FUNC_2(&VAR_10->f_lock);
 VAR_10->f_flags = (VAR_11 & VAR_8) | (VAR_10->f_flags & ~VAR_8);
 FUNC_3(&VAR_10->f_lock);

 out:
 return VAR_13;
}
