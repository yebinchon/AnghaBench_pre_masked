
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* ioctl ) (int ,struct file*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 struct file* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct file *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 int VAR_5 = 0;
 struct file *VAR_6 = ((void*)0);

 if (FUNC_1(VAR_2))
  VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 && VAR_6->f_op && VAR_6->f_op->ioctl)
  VAR_5 = VAR_6->f_op->ioctl(FUNC_2(VAR_1),
          VAR_6, VAR_3, VAR_4);
 else
  VAR_5 = -VAR_0;
 return VAR_5;
}
