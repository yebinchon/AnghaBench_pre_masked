
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct inode {int i_rdev; } ;


 int VAR_0 ;
 struct kobject* FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct kobject*) ;

int FUNC_2(struct inode *VAR_1)
{
 int VAR_2;
 struct kobject *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->i_rdev, &VAR_2);
 if (!VAR_3)
  return -1;
 FUNC_1(VAR_3);
 return VAR_2;
}
