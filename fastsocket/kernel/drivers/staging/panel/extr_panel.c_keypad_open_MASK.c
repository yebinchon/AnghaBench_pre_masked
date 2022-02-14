
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_5, struct file *VAR_6)
{

 if (VAR_4)
  return -VAR_0;

 if (VAR_6->f_mode & VAR_2)
  return -VAR_1;

 VAR_3 = 0;
 VAR_4++;
 return 0;
}
