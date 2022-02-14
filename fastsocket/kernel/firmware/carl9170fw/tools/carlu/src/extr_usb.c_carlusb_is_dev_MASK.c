
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device {int dummy; } ;
struct carlu {int dev; } ;
typedef struct libusb_device libusb_device ;


 scalar_t__ FUNC_0 (struct libusb_device*) ;
 struct libusb_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct libusb_device*) ;

__attribute__((used)) static bool FUNC_3(struct carlu *VAR_0,
          struct libusb_device *VAR_1)
{
 libusb_device *VAR_2;

 if (!VAR_0->dev)
  return 0;

 VAR_2 = FUNC_1(VAR_0->dev);

 if (FUNC_0(VAR_2) == FUNC_0(VAR_1) &&
     FUNC_2(VAR_2) == FUNC_2(VAR_1))
  return 1;

 return 0;
}
