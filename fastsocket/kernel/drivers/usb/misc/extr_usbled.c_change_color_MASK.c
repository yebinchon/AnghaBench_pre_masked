
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_led {TYPE_1__* udev; scalar_t__ green; scalar_t__ red; scalar_t__ blue; } ;
struct TYPE_3__ {int dev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int,int,int,unsigned char*,int,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(struct usb_led *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6 = 0x07;
 unsigned char *VAR_7;

 VAR_7 = FUNC_3(8, VAR_1);
 if (!VAR_7) {
  FUNC_1(&VAR_4->udev->dev, "out of memory\n");
  return;
 }

 if (VAR_4->blue)
  VAR_6 &= ~(VAR_0);
 if (VAR_4->red)
  VAR_6 &= ~(VAR_3);
 if (VAR_4->green)
  VAR_6 &= ~(VAR_2);
 FUNC_0(&VAR_4->udev->dev,
  "blue = %d, red = %d, green = %d, color = %.2x\n",
  VAR_4->blue, VAR_4->red, VAR_4->green, VAR_6);

 VAR_5 = FUNC_4(VAR_4->udev,
    FUNC_5(VAR_4->udev, 0),
    0x12,
    0xc8,
    (0x02 * 0x100) + 0x0a,
    (0x00 * 0x100) + VAR_6,
    VAR_7,
    8,
    2000);
 if (VAR_5)
  FUNC_0(&VAR_4->udev->dev, "retval = %d\n", VAR_5);
 FUNC_2(VAR_7);
}
