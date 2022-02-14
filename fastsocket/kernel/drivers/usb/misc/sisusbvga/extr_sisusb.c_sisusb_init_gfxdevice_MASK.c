
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sisusb_usb_data {int devinit; int gfxinit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sisusb_usb_data*) ;
 int FUNC_1 (struct sisusb_usb_data*) ;
 scalar_t__ FUNC_2 (struct sisusb_usb_data*) ;
 int FUNC_3 (struct sisusb_usb_data*,int,int*) ;
 int FUNC_4 (struct sisusb_usb_data*,int) ;
 int FUNC_5 (struct sisusb_usb_data*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct sisusb_usb_data *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7;

 if (VAR_3->devinit == 1) {

  VAR_5 |= FUNC_3(VAR_3, 0x10, &VAR_7);
  if (VAR_5) return VAR_5;
  if ((VAR_7 & 0xfffffff0) == VAR_1) VAR_6++;

  VAR_5 |= FUNC_3(VAR_3, 0x14, &VAR_7);
  if (VAR_5) return VAR_5;
  if ((VAR_7 & 0xfffffff0) == VAR_2) VAR_6++;

  VAR_5 |= FUNC_3(VAR_3, 0x18, &VAR_7);
  if (VAR_5) return VAR_5;
  if ((VAR_7 & 0xfffffff0) == VAR_0) VAR_6++;
 }


 if ((VAR_3->devinit == 0) || (VAR_6 != 3)) {

  VAR_5 |= FUNC_0(VAR_3);

  if (VAR_5 == 0)
   VAR_3->devinit = 1;

 }

 if (VAR_3->devinit) {

  if (FUNC_2(VAR_3) == 0) {
   VAR_3->gfxinit = 1;
   FUNC_1(VAR_3);
   VAR_5 |= FUNC_4(VAR_3, 1);
   VAR_5 |= FUNC_5(VAR_3, 1, VAR_4);
  }
 }

 return VAR_5;
}
