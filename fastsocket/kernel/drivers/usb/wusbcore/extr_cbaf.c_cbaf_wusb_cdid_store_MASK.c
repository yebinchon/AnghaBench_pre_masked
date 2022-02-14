
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_ckhdid {int * data; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cbaf {struct wusb_ckhdid cdid; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct cbaf* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct usb_interface *VAR_6 = FUNC_1(VAR_1);
 struct cbaf *VAR_7 = FUNC_2(VAR_6);
 struct wusb_ckhdid VAR_8;

 VAR_5 = FUNC_0(VAR_3,
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx",
   &VAR_8.data[0] , &VAR_8.data[1],
   &VAR_8.data[2] , &VAR_8.data[3],
   &VAR_8.data[4] , &VAR_8.data[5],
   &VAR_8.data[6] , &VAR_8.data[7],
   &VAR_8.data[8] , &VAR_8.data[9],
   &VAR_8.data[10], &VAR_8.data[11],
   &VAR_8.data[12], &VAR_8.data[13],
   &VAR_8.data[14], &VAR_8.data[15]);
 if (VAR_5 != 16)
  return -VAR_0;

 VAR_7->cdid = VAR_8;

 return VAR_4;
}
