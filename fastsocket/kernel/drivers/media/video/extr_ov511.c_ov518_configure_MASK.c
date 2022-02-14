
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ov511 {scalar_t__ led_policy; int compress; scalar_t__ bridge; int packet_numbering; int maxwidth; int maxheight; int minwidth; int minheight; void* primary_i2c_slave; int snap_enabled; TYPE_3__* dev; int desc; } ;
struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct ov511_regvals {int const member_1; int member_2; int const member_0; } ;
typedef int __u16 ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int,char*) ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct usb_ov511*) ;
 int FUNC_7 (struct usb_ov511*,int ) ;
 int FUNC_8 (struct usb_ov511*,int) ;
 scalar_t__ FUNC_9 (struct usb_ov511*,void*) ;
 scalar_t__ FUNC_10 (struct usb_ov511*) ;
 scalar_t__ FUNC_11 (struct usb_ov511*) ;
 int FUNC_12 (struct usb_ov511*,int ) ;
 scalar_t__ FUNC_13 (struct usb_ov511*,int,int) ;
 scalar_t__ FUNC_14 (struct usb_ov511*,int,int,int) ;
 int VAR_11 ;
 int FUNC_15 (int ,int ) ;
 struct usb_host_interface* FUNC_16 (struct usb_interface*,int) ;
 struct usb_interface* FUNC_17 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_18 (struct usb_ov511*,struct ov511_regvals*) ;

__attribute__((used)) static int
FUNC_19(struct usb_ov511 *VAR_12)
{

 static struct ov511_regvals VAR_13[] = {
  { 131, 129, 0x40 },
  { 131, 130, 0xe1 },
  { 131, 129, 0x3e },
  { 131, 130, 0xe1 },
  { 131, 129, 0x00 },
  { 131, 130, 0xe1 },
  { 131, 0x46, 0x00 },
  { 131, 0x5d, 0x03 },
  { 132, 0x0, 0x00},
 };

 static struct ov511_regvals VAR_14[] = {
  { 131, 128, 0x02 },
  { 131, 128, 0x01 },
  { 131, 0x31, 0x0f },
  { 131, 0x5d, 0x03 },
  { 131, 0x24, 0x9f },
  { 131, 0x25, 0x90 },
  { 131, 0x20, 0x00 },
  { 131, 0x51, 0x04 },
  { 131, 0x71, 0x19 },
  { 132, 0x0, 0x00 },
 };

 static struct ov511_regvals VAR_15[] = {
  { 131, 128, 0x02 },
  { 131, 128, 0x01 },
  { 131, 0x31, 0x0f },
  { 131, 0x5d, 0x03 },
  { 131, 0x24, 0x9f },
  { 131, 0x25, 0x90 },
  { 131, 0x20, 0x60 },
  { 131, 0x51, 0x02 },
  { 131, 0x71, 0x19 },
  { 131, 0x40, 0xff },
  { 131, 0x41, 0x42 },
  { 131, 0x46, 0x00 },
  { 131, 0x33, 0x04 },
  { 131, 0x21, 0x19 },
  { 131, 0x3f, 0x10 },
  { 132, 0x0, 0x00 },
 };

 FUNC_0(4, "");


 FUNC_1(&VAR_12->dev->dev, "Device revision %d\n",
   0x1F & FUNC_12(VAR_12, VAR_8));


 VAR_12->desc = FUNC_15(VAR_9, 0);

 if (FUNC_18(VAR_12, VAR_13))
  goto error;


 if (FUNC_14(VAR_12, 0x57, 0x00, 0x02) < 0)
  goto error;


 if (VAR_12->led_policy == VAR_4 || VAR_12->led_policy == VAR_3)
  FUNC_8(VAR_12, 0);
 else
  FUNC_8(VAR_12, 1);



 if (!VAR_10 && !VAR_12->compress) {
  VAR_12->compress = 1;
  FUNC_2(&VAR_12->dev->dev,
    "Compression required with OV518...enabling\n");
 }

 if (VAR_12->bridge == VAR_0) {
  if (FUNC_18(VAR_12, VAR_14))
   goto error;
 } else if (VAR_12->bridge == VAR_1) {
  if (FUNC_18(VAR_12, VAR_15))
   goto error;
 } else {
  FUNC_3("Invalid bridge");
 }

 if (FUNC_13(VAR_12, 0x2f, 0x80) < 0)
  goto error;

 if (FUNC_6(VAR_12))
  goto error;

 if (VAR_12->bridge == VAR_0)
 {
  struct usb_interface *VAR_16;
  struct usb_host_interface *VAR_17;
  __u16 VAR_18 = 0;

  VAR_16 = FUNC_17(VAR_12->dev, 0);
  if (VAR_16) {
   VAR_17 = FUNC_16(VAR_16, 7);
   if (VAR_17)
    VAR_18 = FUNC_5(VAR_17->endpoint[0].desc.wMaxPacketSize);
  }


  if (VAR_18 == 897)
   VAR_12->packet_numbering = 1;
  else
   VAR_12->packet_numbering = 0;
 } else {

  VAR_12->packet_numbering = 1;
 }

 FUNC_7(VAR_12, 0);

 VAR_12->snap_enabled = VAR_11;


 VAR_12->primary_i2c_slave = VAR_6;
 if (FUNC_9(VAR_12, VAR_6) < 0)
  goto error;





 if (FUNC_4(VAR_12) < 0) {

  VAR_12->primary_i2c_slave = VAR_5;
  if (FUNC_9(VAR_12, VAR_5) < 0)
   goto error;

  if (FUNC_4(VAR_12) < 0) {

   VAR_12->primary_i2c_slave = VAR_7;
   if (FUNC_9(VAR_12, VAR_7) < 0)
    goto error;

   if (FUNC_4(VAR_12) < 0) {
    FUNC_3("Can't determine sensor slave IDs");
    goto error;
   } else {
    FUNC_3("Detected unsupported OV8xx0 sensor");
    goto error;
   }
  } else {
   if (FUNC_10(VAR_12) < 0) {
    FUNC_3("Failed to configure OV6xx0");
    goto error;
   }
  }
 } else {
  if (FUNC_11(VAR_12) < 0) {
   FUNC_3("Failed to configure OV7xx0");
   goto error;
  }
 }

 VAR_12->maxwidth = 352;
 VAR_12->maxheight = 288;


 VAR_12->minwidth = 160;
 VAR_12->minheight = 120;

 return 0;

error:
 FUNC_3("OV518 Config failed");

 return -VAR_2;
}
