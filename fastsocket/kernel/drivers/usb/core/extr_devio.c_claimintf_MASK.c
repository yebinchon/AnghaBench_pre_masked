
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct dev_state {int ifclaimed; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *,struct usb_interface*,struct dev_state*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dev_state *VAR_3, unsigned int VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->dev;
 struct usb_interface *VAR_6;
 int VAR_7;

 if (VAR_4 >= 8*sizeof(VAR_3->ifclaimed))
  return -VAR_0;

 if (FUNC_1(VAR_4, &VAR_3->ifclaimed))
  return 0;

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (!VAR_6)
  VAR_7 = -VAR_1;
 else
  VAR_7 = FUNC_2(&VAR_2, VAR_6, VAR_3);
 if (VAR_7 == 0)
  FUNC_0(VAR_4, &VAR_3->ifclaimed);
 return VAR_7;
}
