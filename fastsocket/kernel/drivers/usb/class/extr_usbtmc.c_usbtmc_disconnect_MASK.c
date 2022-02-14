
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtmc_device_data {int zombie; int kref; int io_mutex; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 struct usbtmc_device_data* FUNC_6 (struct usb_interface*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_4)
{
 struct usbtmc_device_data *VAR_5;

 FUNC_0(&VAR_4->dev, "usbtmc_disconnect called\n");

 VAR_5 = FUNC_6(VAR_4);
 FUNC_5(VAR_4, &VAR_2);
 FUNC_4(&VAR_4->dev.kobj, &VAR_0);
 FUNC_4(&VAR_4->dev.kobj, &VAR_1);
 FUNC_2(&VAR_5->io_mutex);
 VAR_5->zombie = 1;
 FUNC_3(&VAR_5->io_mutex);
 FUNC_1(&VAR_5->kref, VAR_3);
}
