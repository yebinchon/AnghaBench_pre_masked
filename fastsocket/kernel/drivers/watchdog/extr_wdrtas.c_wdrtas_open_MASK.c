
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{

 if (FUNC_1(&VAR_1) > 1) {
  FUNC_0(&VAR_1);
  return -VAR_0;
 }

 FUNC_4();
 FUNC_3();

 return FUNC_2(VAR_2, VAR_3);
}
