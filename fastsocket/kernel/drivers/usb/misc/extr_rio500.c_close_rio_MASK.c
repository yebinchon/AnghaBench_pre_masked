
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_usb_data {TYPE_1__* rio_dev; scalar_t__ isopen; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct rio_usb_data VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct rio_usb_data *VAR_3 = &VAR_0;

 VAR_3->isopen = 0;

 FUNC_0(&VAR_3->rio_dev->dev, "Rio closed.\n");
 return 0;
}
