
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_2__* dev; } ;
struct ihex_binrec {int len; scalar_t__ data; int addr; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_3__ {int idProduct; int bcdDevice; } ;
struct TYPE_4__ {int dev; TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct usb_serial*,int) ;
 int FUNC_5 (struct usb_serial*,int ,unsigned char*,int ,int) ;
 struct ihex_binrec* FUNC_6 (struct ihex_binrec const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct firmware const*) ;
 scalar_t__ FUNC_9 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_10(struct usb_serial *VAR_0)
{
 int VAR_1;
 const struct ihex_binrec *VAR_2;
 char *VAR_3;
 const struct firmware *VAR_4;

 FUNC_2("Keyspan startup version %04x product %04x",
     FUNC_7(VAR_0->dev->descriptor.bcdDevice),
     FUNC_7(VAR_0->dev->descriptor.idProduct));

 if ((FUNC_7(VAR_0->dev->descriptor.bcdDevice) & 0x8000)
        != 0x8000) {
  FUNC_2("Firmware already loaded.  Quitting.");
  return 1;
 }


 switch (FUNC_7(VAR_0->dev->descriptor.idProduct)) {
 case 133:
  VAR_3 = "keyspan/usa28.fw";
  break;

 case 132:
  VAR_3 = "keyspan/usa28x.fw";
  break;

 case 131:
  VAR_3 = "keyspan/usa28xa.fw";
  break;

 case 130:
  VAR_3 = "keyspan/usa28xb.fw";
  break;

 case 137:
  VAR_3 = "keyspan/usa19.fw";
  break;

 case 136:
  VAR_3 = "keyspan/usa19qi.fw";
  break;

 case 139:
  VAR_3 = "keyspan/mpr.fw";
  break;

 case 135:
  VAR_3 = "keyspan/usa19qw.fw";
  break;

 case 138:
  VAR_3 = "keyspan/usa18x.fw";
  break;

 case 134:
  VAR_3 = "keyspan/usa19w.fw";
  break;

 case 129:
  VAR_3 = "keyspan/usa49w.fw";
  break;

 case 128:
  VAR_3 = "keyspan/usa49wlc.fw";
  break;

 default:
  FUNC_3(&VAR_0->dev->dev, "Unknown product ID (%04x)\n",
   FUNC_7(VAR_0->dev->descriptor.idProduct));
  return 1;
 }

 if (FUNC_9(&VAR_4, VAR_3, &VAR_0->dev->dev)) {
  FUNC_3(&VAR_0->dev->dev, "Required keyspan firmware image (%s) unavailable.\n", VAR_3);
  return(1);
 }

 FUNC_2("Uploading Keyspan %s firmware.", VAR_3);


 VAR_1 = FUNC_4(VAR_0, 1);

 VAR_2 = (const struct ihex_binrec *)VAR_4->data;

 while (VAR_2) {
  VAR_1 = FUNC_5(VAR_0, FUNC_1(VAR_2->addr),
          (unsigned char *)VAR_2->data,
          FUNC_0(VAR_2->len), 0xa0);
  if (VAR_1 < 0) {
   FUNC_3(&VAR_0->dev->dev, "ezusb_writememory failed for Keyspan firmware (%d %04X %p %d)\n",
    VAR_1, FUNC_1(VAR_2->addr),
    VAR_2->data, FUNC_0(VAR_2->len));
   break;
  }
  VAR_2 = FUNC_6(VAR_2);
 }
 FUNC_8(VAR_4);


 VAR_1 = FUNC_4(VAR_0, 0);


 return 1;
}
