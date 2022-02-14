
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct dev_state {int ifclaimed; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *,struct usb_interface*) ;
 struct usb_interface* FUNC_2 (struct usb_device*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct dev_state *VAR_3, unsigned int VAR_4)
{
 struct usb_device *VAR_5;
 struct usb_interface *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (VAR_4 >= 8*sizeof(VAR_3->ifclaimed))
  return VAR_7;
 VAR_5 = VAR_3->dev;
 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (!VAR_6)
  VAR_7 = -VAR_1;
 else if (FUNC_0(VAR_4, &VAR_3->ifclaimed)) {
  FUNC_1(&VAR_2, VAR_6);
  VAR_7 = 0;
 }
 return VAR_7;
}
