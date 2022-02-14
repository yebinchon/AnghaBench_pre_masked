
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_0,
  pm_message_t VAR_1)
{
 FUNC_0(&VAR_0->dev, "suspending now...\n");

 return 0;
}
