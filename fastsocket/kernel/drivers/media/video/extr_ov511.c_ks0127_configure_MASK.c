
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {int maxwidth; int maxheight; int minwidth; int minheight; int brightness; int contrast; int colour; int hue; int sensor; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct usb_ov511*,int) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;

__attribute__((used)) static int
FUNC_5(struct usb_ov511 *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_3(VAR_2, 0x00);
 if (VAR_3 < 0) {
  FUNC_2("Error detecting sensor type");
  return -1;
 } else if (VAR_3 & 0x08) {
  VAR_3 = FUNC_3(VAR_2, 0x3d);
  if (VAR_3 < 0) {
   FUNC_2("Error detecting sensor type");
   return -1;
  } else if ((VAR_3 & 0x0f) == 0) {
   FUNC_1(&VAR_2->dev->dev, "Sensor is a KS0127\n");
   VAR_2->sensor = VAR_0;
  } else if ((VAR_3 & 0x0f) == 9) {
   FUNC_1(&VAR_2->dev->dev, "Sensor is a KS0127B Rev. A\n");
   VAR_2->sensor = VAR_1;
  }
 } else {
  FUNC_2("Error: Sensor is an unsupported KS0122");
  return -1;
 }


 VAR_2->maxwidth = 640;
 VAR_2->maxheight = 480;
 VAR_2->minwidth = 64;
 VAR_2->minheight = 48;


 VAR_2->brightness = 0x80 << 8;
 VAR_2->contrast = 0x80 << 8;
 VAR_2->colour = 0x80 << 8;
 VAR_2->hue = 0x80 << 8;


 FUNC_2("This sensor is not supported yet.");
 return -1;

 return 0;
}
