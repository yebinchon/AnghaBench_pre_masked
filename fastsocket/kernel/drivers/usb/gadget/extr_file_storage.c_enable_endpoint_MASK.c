
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int name; struct fsg_dev* driver_data; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct fsg_dev {int dummy; } ;


 int FUNC_0 (struct fsg_dev*,char*,int ,int) ;
 int FUNC_1 (struct usb_ep*,struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_0, struct usb_ep *VAR_1,
  const struct usb_endpoint_descriptor *VAR_2)
{
 int VAR_3;

 VAR_1->driver_data = VAR_0;
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, "can't enable %s, result %d\n", VAR_1->name, VAR_3);
 return VAR_3;
}
