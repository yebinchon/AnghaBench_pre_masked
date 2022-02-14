
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {int kref; } ;
struct inode {int dummy; } ;
struct file {struct usbtmc_device_data* private_data; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct usbtmc_device_data *VAR_3 = VAR_2->private_data;

 FUNC_0(&VAR_3->kref, VAR_0);
 return 0;
}
