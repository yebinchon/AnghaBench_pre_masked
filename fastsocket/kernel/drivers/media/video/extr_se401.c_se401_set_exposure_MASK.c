
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int brightness; int expose_h; int expose_m; int expose_l; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct usb_se401 *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 << 5;

 if (VAR_0 == 50)
  VAR_3 = VAR_3-VAR_3 % 106667;
 if (VAR_0 == 60)
  VAR_3 = VAR_3-VAR_3 % 88889;
 VAR_1->brightness = VAR_3 >> 5;
 VAR_1->expose_h = (VAR_3 >> 16) & 0xff;
 VAR_1->expose_m = (VAR_3 >> 8) & 0xff;
 VAR_1->expose_l = VAR_3 & 0xff;
}
