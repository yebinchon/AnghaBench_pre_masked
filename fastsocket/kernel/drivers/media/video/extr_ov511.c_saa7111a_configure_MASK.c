
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {int maxwidth; int maxheight; int minwidth; int minheight; int has_decoder; int num_inputs; int brightness; int contrast; int colour; int hue; scalar_t__ bclass; TYPE_1__* dev; int sensor; scalar_t__ stop_during_set; int norm; scalar_t__ pal; } ;
struct ov511_regvals {int member_1; int member_2; int const member_0; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct usb_ov511*,int) ;
 scalar_t__ FUNC_5 (struct usb_ov511*) ;
 int FUNC_6 (struct usb_ov511*,int,int) ;
 scalar_t__ FUNC_7 (struct usb_ov511*,struct ov511_regvals*) ;

__attribute__((used)) static int
FUNC_8(struct usb_ov511 *VAR_3)
{
 int VAR_4;



 static struct ov511_regvals VAR_5[] = {
  { 128, 0x06, 0xce },
  { 128, 0x07, 0x00 },
  { 128, 0x10, 0x44 },
  { 128, 0x0e, 0x01 },
  { 128, 0x00, 0x00 },
  { 128, 0x01, 0x00 },
  { 128, 0x03, 0x23 },
  { 128, 0x04, 0x00 },
  { 128, 0x05, 0x00 },
  { 128, 0x08, 0xc8 },
  { 128, 0x09, 0x01 },
  { 128, 0x0a, 0x80 },
  { 128, 0x0b, 0x40 },
  { 128, 0x0c, 0x40 },
  { 128, 0x0d, 0x00 },
  { 128, 0x0f, 0x00 },
  { 128, 0x11, 0x0c },
  { 128, 0x12, 0x00 },
  { 128, 0x13, 0x00 },
  { 128, 0x14, 0x00 },
  { 128, 0x15, 0x00 },
  { 128, 0x16, 0x00 },
  { 128, 0x17, 0x00 },
  { 128, 0x02, 0xc0 },
  { 129, 0x0, 0x00 },
 };
 if (VAR_3->pal) {
  VAR_3->maxwidth = 320;
  VAR_3->maxheight = 240;
 } else {
  VAR_3->maxwidth = 640;
  VAR_3->maxheight = 480;
 }

 VAR_3->minwidth = 320;
 VAR_3->minheight = 240;

 VAR_3->has_decoder = 1;
 VAR_3->num_inputs = 8;
 VAR_3->norm = VAR_2;
 VAR_3->stop_during_set = 0;



 VAR_3->brightness = 0x80 << 8;
 VAR_3->contrast = 0x40 << 9;
 VAR_3->colour = 0x40 << 9;
 VAR_3->hue = 32768;

 FUNC_0(4, "Writing SAA7111A registers");
 if (FUNC_7(VAR_3, VAR_5))
  return -1;



 VAR_4 = FUNC_4(VAR_3, 0x00);

 if (VAR_4 < 0) {
  FUNC_3("Error detecting sensor version");
  return -1;
 } else {
  FUNC_1(&VAR_3->dev->dev,
    "Sensor is an SAA7111A (version 0x%x)\n", VAR_4);
  VAR_3->sensor = VAR_1;
 }




 if (VAR_3->bclass == VAR_0)
  FUNC_6(VAR_3, 0x11, 0x00);
 else
  FUNC_2(&VAR_3->dev->dev,
    "SAA7111A not yet supported with OV518/OV518+\n");

 return 0;
}
