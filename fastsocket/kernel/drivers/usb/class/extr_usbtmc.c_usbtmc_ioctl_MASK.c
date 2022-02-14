
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {int io_mutex; scalar_t__ zombie; } ;
struct file {struct usbtmc_device_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbtmc_device_data*) ;
 int FUNC_3 (struct usbtmc_device_data*) ;
 int FUNC_4 (struct usbtmc_device_data*) ;
 int FUNC_5 (struct usbtmc_device_data*) ;
 int FUNC_6 (struct usbtmc_device_data*) ;
 int FUNC_7 (struct usbtmc_device_data*) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 struct usbtmc_device_data *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = VAR_2->private_data;
 FUNC_0(&VAR_5->io_mutex);
 if (VAR_5->zombie) {
  VAR_6 = -VAR_1;
  goto skip_io_on_zombie;
 }

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_6(VAR_5);
  break;

 case 130:
  VAR_6 = FUNC_5(VAR_5);
  break;

 case 128:
  VAR_6 = FUNC_7(VAR_5);
  break;

 case 131:
  VAR_6 = FUNC_4(VAR_5);
  break;

 case 132:
  VAR_6 = FUNC_3(VAR_5);
  break;

 case 133:
  VAR_6 = FUNC_2(VAR_5);
  break;
 }

skip_io_on_zombie:
 FUNC_1(&VAR_5->io_mutex);
 return VAR_6;
}
