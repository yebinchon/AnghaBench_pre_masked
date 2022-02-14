
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bNumConfigurations; } ;
struct usb_device {scalar_t__ config; scalar_t__ actconfig; int speed; TYPE_1__ descriptor; } ;


 char* FUNC_0 (int ,char*,char*,scalar_t__,int) ;
 char* FUNC_1 (char*,char*,TYPE_1__*) ;
 char* FUNC_2 (char*,char*,struct usb_device*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, char *VAR_1, struct usb_device *VAR_2)
{
 int VAR_3;

 if (VAR_0 > VAR_1)
  return VAR_0;

 VAR_0 = FUNC_1(VAR_0, VAR_1, &VAR_2->descriptor);

 if (VAR_0 > VAR_1)
  return VAR_0;

 VAR_0 = FUNC_2(VAR_0, VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->descriptor.bNumConfigurations; VAR_3++) {
  if (VAR_0 > VAR_1)
   return VAR_0;
  VAR_0 = FUNC_0(VAR_2->speed,
    VAR_0, VAR_1, VAR_2->config + VAR_3,

    (VAR_2->config + VAR_3) == VAR_2->actconfig);
 }
 return VAR_0;
}
