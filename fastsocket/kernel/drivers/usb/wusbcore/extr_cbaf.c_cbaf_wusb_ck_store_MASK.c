
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct cbaf {TYPE_1__ ck; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct cbaf*) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct cbaf* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct usb_interface *VAR_6 = FUNC_2(VAR_1);
 struct cbaf *VAR_7 = FUNC_3(VAR_6);

 VAR_5 = FUNC_1(VAR_3,
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx",
   &VAR_7->ck.data[0] , &VAR_7->ck.data[1],
   &VAR_7->ck.data[2] , &VAR_7->ck.data[3],
   &VAR_7->ck.data[4] , &VAR_7->ck.data[5],
   &VAR_7->ck.data[6] , &VAR_7->ck.data[7],
   &VAR_7->ck.data[8] , &VAR_7->ck.data[9],
   &VAR_7->ck.data[10], &VAR_7->ck.data[11],
   &VAR_7->ck.data[12], &VAR_7->ck.data[13],
   &VAR_7->ck.data[14], &VAR_7->ck.data[15]);
 if (VAR_5 != 16)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
