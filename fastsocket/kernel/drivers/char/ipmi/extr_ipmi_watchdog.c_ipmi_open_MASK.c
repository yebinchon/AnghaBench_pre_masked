
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 () ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 switch (FUNC_1(VAR_4)) {
 case 128:
  if (FUNC_3(0, &VAR_3))
   return -VAR_0;

  FUNC_0();





  VAR_2 = 1;
  return FUNC_2(VAR_4, VAR_5);

 default:
  return (-VAR_1);
 }
}
