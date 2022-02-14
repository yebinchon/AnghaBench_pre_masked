
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 FUNC_0("(dtlk_open");

 FUNC_1();
 FUNC_3(VAR_3, VAR_4);
 switch (FUNC_2(VAR_3)) {
 case 128:
  if (VAR_2)
   return -VAR_0;
  return FUNC_3(VAR_3, VAR_4);

 default:
  return -VAR_1;
 }
}
