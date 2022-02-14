
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct b3dfg_dev* private_data; } ;
struct b3dfg_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct b3dfg_dev*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct b3dfg_dev *VAR_2 = VAR_1->private_data;
 FUNC_0(&VAR_2->pdev->dev, "release\n");
 FUNC_1(VAR_2);
 return 0;
}
