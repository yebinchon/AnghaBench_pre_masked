
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct bsg_device* private_data; } ;
struct bsg_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct bsg_device*) ;
 int FUNC_1 (struct bsg_device*) ;
 struct bsg_device* FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct bsg_device *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_4();

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->private_data = VAR_2;
 return 0;
}
