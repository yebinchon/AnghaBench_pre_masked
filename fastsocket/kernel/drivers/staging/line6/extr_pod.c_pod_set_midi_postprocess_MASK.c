
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int midi_postprocess; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char const*,int *,int) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct usb_line6_pod* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_1(VAR_0);
 struct usb_line6_pod *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = FUNC_0(VAR_2, ((void*)0), 10);
 VAR_5->midi_postprocess = VAR_6 ? 1 : 0;
 return VAR_3;
}
