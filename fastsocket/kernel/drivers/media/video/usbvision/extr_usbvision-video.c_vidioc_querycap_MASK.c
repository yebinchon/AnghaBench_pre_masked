
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct usb_usbvision {size_t dev_model; scalar_t__ have_tuner; int dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* model_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* VAR_6 ;
 struct usb_usbvision* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
     struct v4l2_capability *VAR_9)
{
 struct usb_usbvision *VAR_10 = FUNC_2(VAR_7);

 FUNC_0(VAR_9->driver, "USBVision", sizeof(VAR_9->driver));
 FUNC_0(VAR_9->card,
  VAR_6[VAR_10->dev_model].model_string,
  sizeof(VAR_9->card));
 FUNC_1(VAR_10->dev, VAR_9->bus_info, sizeof(VAR_9->bus_info));
 VAR_9->version = VAR_0;
 VAR_9->capabilities = VAR_5 |
  VAR_1 |
  VAR_2 |
  VAR_3 |
  (VAR_10->have_tuner ? VAR_4 : 0);
 return 0;
}
