
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{

 if (FUNC_3(0, &VAR_1))
  return -VAR_0;


 FUNC_0(VAR_2, 30);
 FUNC_1(VAR_2);
 VAR_4->private_data = VAR_2;
 return FUNC_2(VAR_3, VAR_4);
}
