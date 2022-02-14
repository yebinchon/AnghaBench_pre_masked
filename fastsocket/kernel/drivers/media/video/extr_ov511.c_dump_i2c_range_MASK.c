
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct usb_ov511*,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_ov511 *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_3);
  FUNC_0(&VAR_0->dev->dev, "Sensor[0x%02X] = 0x%02X\n", VAR_3, VAR_4);
 }
}
