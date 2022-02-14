
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 if ((VAR_3->f_flags & VAR_0) != VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
