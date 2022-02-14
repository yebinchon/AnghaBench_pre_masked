
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_cytherm {int brightness; TYPE_1__* udev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (char const*,int *,int) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct usb_cytherm* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6,
         size_t VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_5(VAR_4);
 struct usb_cytherm *VAR_9 = FUNC_6(VAR_8);

 unsigned char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(8, VAR_2);
 if (!VAR_10) {
  FUNC_1(&VAR_9->udev->dev, "out of memory\n");
  return 0;
 }

 VAR_9->brightness = FUNC_4(VAR_6, ((void*)0), 10);

 if (VAR_9->brightness > 0xFF)
  VAR_9->brightness = 0xFF;
 else if (VAR_9->brightness < 0)
  VAR_9->brightness = 0;


 VAR_11 = FUNC_7(VAR_9->udev, VAR_3, VAR_0,
    VAR_9->brightness, VAR_10, 8);
 if (VAR_11)
  FUNC_0(&VAR_9->udev->dev, "retval = %d\n", VAR_11);

 VAR_11 = FUNC_7(VAR_9->udev, VAR_3, VAR_1,
    0x01, VAR_10, 8);
 if (VAR_11)
  FUNC_0(&VAR_9->udev->dev, "retval = %d\n", VAR_11);

 FUNC_2(VAR_10);

 return VAR_7;
}
