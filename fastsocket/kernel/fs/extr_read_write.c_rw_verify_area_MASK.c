
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_flock; } ;
struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct inode*,struct file*,scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(int VAR_7, struct file *VAR_8, loff_t *VAR_9, size_t VAR_10)
{
 struct inode *VAR_11;
 loff_t VAR_12;
 int VAR_13 = -VAR_0;

 VAR_11 = VAR_8->f_path.dentry->d_inode;
 if (FUNC_3((ssize_t) VAR_10 < 0))
  return VAR_13;
 VAR_12 = *VAR_9;
 if (FUNC_3((VAR_12 < 0) || (loff_t) (VAR_12 + VAR_10) < 0))
  return VAR_13;

 if (FUNC_3(VAR_11->i_flock && FUNC_1(VAR_11))) {
  VAR_13 = FUNC_0(
   VAR_7 == VAR_6 ? VAR_1 : VAR_2,
   VAR_11, VAR_8, VAR_12, VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
 }
 VAR_13 = FUNC_2(VAR_8,
    VAR_7 == VAR_6 ? VAR_4 : VAR_5);
 if (VAR_13)
  return VAR_13;
 return VAR_10 > VAR_3 ? VAR_3 : VAR_10;
}
