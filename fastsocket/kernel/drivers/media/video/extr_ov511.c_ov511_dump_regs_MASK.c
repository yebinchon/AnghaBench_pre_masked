
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
 FUNC_0(&VAR_0->dev->dev, "CAMERA INTERFACE REGS\n");
 FUNC_1(VAR_0, 0x10, 0x1f);
 FUNC_0(&VAR_0->dev->dev, "DRAM INTERFACE REGS\n");
 FUNC_1(VAR_0, 0x20, 0x23);
 FUNC_0(&VAR_0->dev->dev, "ISO FIFO REGS\n");
 FUNC_1(VAR_0, 0x30, 0x31);
 FUNC_0(&VAR_0->dev->dev, "PIO REGS\n");
 FUNC_1(VAR_0, 0x38, 0x39);
 FUNC_1(VAR_0, 0x3e, 0x3e);
 FUNC_0(&VAR_0->dev->dev, "I2C REGS\n");
 FUNC_1(VAR_0, 0x40, 0x49);
 FUNC_0(&VAR_0->dev->dev, "SYSTEM CONTROL REGS\n");
 FUNC_1(VAR_0, 0x50, 0x55);
 FUNC_1(VAR_0, 0x5e, 0x5f);
 FUNC_0(&VAR_0->dev->dev, "OmniCE REGS\n");
 FUNC_1(VAR_0, 0x70, 0x79);


 FUNC_1(VAR_0, 0x80, 0x9f);
 FUNC_1(VAR_0, 0xa0, 0xbf);

}
