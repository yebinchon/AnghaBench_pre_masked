
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct file*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;

 if (!VAR_2)
  return -VAR_1;

 if (FUNC_1(0, &VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 != 0)
  return VAR_6;

 return FUNC_0(VAR_4, VAR_5);
}
