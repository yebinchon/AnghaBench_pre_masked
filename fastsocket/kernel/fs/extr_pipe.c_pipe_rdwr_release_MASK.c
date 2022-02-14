
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (VAR_3->f_mode & VAR_0) != 0;
 VAR_5 = (VAR_3->f_mode & VAR_1) != 0;
 return FUNC_0(VAR_2, VAR_4, VAR_5);
}
