
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int prog_data; int dumpreq; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int *,int) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct usb_line6_pod* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_2(VAR_0);
 struct usb_line6_pod *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_0(&VAR_4->dumpreq, 0);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_1(VAR_2, &VAR_4->prog_data, sizeof(VAR_4->prog_data));
 return sizeof(VAR_4->prog_data);
}
