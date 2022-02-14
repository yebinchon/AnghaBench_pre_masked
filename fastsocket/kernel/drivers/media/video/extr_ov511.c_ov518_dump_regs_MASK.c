
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_ov511*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_ov511 *VAR_0)
{
 FUNC_0(&VAR_0->dev->dev, "VIDEO MODE REGS\n");
 FUNC_1(VAR_0, 0x20, 0x2f);
 FUNC_0(&VAR_0->dev->dev, "DATA PUMP AND SNAPSHOT REGS\n");
 FUNC_1(VAR_0, 0x30, 0x3f);
 FUNC_0(&VAR_0->dev->dev, "I2C REGS\n");
 FUNC_1(VAR_0, 0x40, 0x4f);
 FUNC_0(&VAR_0->dev->dev, "SYSTEM CONTROL AND VENDOR REGS\n");
 FUNC_1(VAR_0, 0x50, 0x5f);
 FUNC_0(&VAR_0->dev->dev, "60 - 6F\n");
 FUNC_1(VAR_0, 0x60, 0x6f);
 FUNC_0(&VAR_0->dev->dev, "70 - 7F\n");
 FUNC_1(VAR_0, 0x70, 0x7f);
 FUNC_0(&VAR_0->dev->dev, "Y QUANTIZATION TABLE\n");
 FUNC_1(VAR_0, 0x80, 0x8f);
 FUNC_0(&VAR_0->dev->dev, "UV QUANTIZATION TABLE\n");
 FUNC_1(VAR_0, 0x90, 0x9f);
 FUNC_0(&VAR_0->dev->dev, "A0 - BF\n");
 FUNC_1(VAR_0, 0xa0, 0xbf);
 FUNC_0(&VAR_0->dev->dev, "CBR\n");
 FUNC_1(VAR_0, 0xc0, 0xcf);
}
