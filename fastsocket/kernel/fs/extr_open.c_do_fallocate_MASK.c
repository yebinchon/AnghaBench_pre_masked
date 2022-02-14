
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {TYPE_4__* i_sb; TYPE_3__* i_op; int i_mode; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {int f_mode; TYPE_2__ f_path; } ;
typedef scalar_t__ loff_t ;
struct TYPE_9__ {scalar_t__ s_maxbytes; } ;
struct TYPE_8__ {long (* fallocate ) (struct inode*,int,scalar_t__,scalar_t__) ;} ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 long FUNC_7 (struct file*,int ) ;
 long FUNC_8 (struct inode*,int,scalar_t__,scalar_t__) ;

int FUNC_9(struct file *VAR_11, int VAR_12, loff_t VAR_13, loff_t VAR_14)
{
 struct inode *VAR_15 = VAR_11->f_path.dentry->d_inode;
 long VAR_16;

 if (VAR_13 < 0 || VAR_14 <= 0)
  return -VAR_2;


 if (VAR_12 & ~(VAR_7 | VAR_8))
  return -VAR_4;


 if ((VAR_12 & VAR_8) &&
     !(VAR_12 & VAR_7))
  return -VAR_4;

 if (!(VAR_11->f_mode & VAR_9))
  return -VAR_0;


 if (VAR_12 & VAR_8 && FUNC_0(VAR_15))
  return -VAR_5;

 if (FUNC_1(VAR_15))
  return -VAR_5;





 VAR_16 = FUNC_7(VAR_11, VAR_10);
 if (VAR_16)
  return VAR_16;

 if (FUNC_3(VAR_15->i_mode))
  return -VAR_6;





 if (!FUNC_4(VAR_15->i_mode) && !FUNC_2(VAR_15->i_mode))
  return -VAR_3;


 if (((VAR_13 + VAR_14) > VAR_15->i_sb->s_maxbytes) || ((VAR_13 + VAR_14) < 0))
  return -VAR_1;

 if (!VAR_15->i_op->fallocate)
  return -VAR_4;

 FUNC_6(VAR_15->i_sb);
 VAR_16 = VAR_15->i_op->fallocate(VAR_15, VAR_12, VAR_13, VAR_14);
 FUNC_5(VAR_15->i_sb);
 return VAR_16;
}
