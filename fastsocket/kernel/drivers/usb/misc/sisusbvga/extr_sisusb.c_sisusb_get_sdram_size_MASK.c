
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_1__ u8 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int,TYPE_1__ const) ;
 int VAR_0 ;
 int FUNC_1 (struct sisusb_usb_data*,int*,int,int,int,TYPE_1__ const**) ;
 int FUNC_2 (struct sisusb_usb_data*,int*,int,int,int,TYPE_1__ const**,int) ;

__attribute__((used)) static int
FUNC_3(struct sisusb_usb_data *VAR_1, int *VAR_2, int VAR_3,
        int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;
 static const u8 VAR_9[13][5] = {
  { 2, 12, 9, 64, 0x35 },
  { 1, 13, 9, 64, 0x44 },
  { 2, 12, 8, 32, 0x31 },
  { 2, 11, 9, 32, 0x25 },
  { 1, 12, 9, 32, 0x34 },
  { 1, 13, 8, 32, 0x40 },
  { 2, 11, 8, 16, 0x21 },
  { 1, 12, 8, 16, 0x30 },
  { 1, 11, 9, 16, 0x24 },
  { 1, 11, 8, 8, 0x20 },
  { 2, 9, 8, 4, 0x01 },
  { 1, 10, 8, 4, 0x10 },
  { 1, 9, 8, 2, 0x00 }
 };

 *VAR_2 = 1;

 for (VAR_7 = 0; VAR_7 < 13; VAR_7++) {
  VAR_5 |= FUNC_0(VAR_0, 0x13, 0x80, VAR_9[VAR_7][4]);
  for (VAR_8 = 2; VAR_8 > 0; VAR_8--) {
   VAR_5 |= FUNC_2(VAR_1, &VAR_6, VAR_7, VAR_8,
      VAR_4, VAR_9, VAR_3);
   if (!VAR_6)
    continue;

   VAR_5 |= FUNC_1(VAR_1, &VAR_6, VAR_8, VAR_7,
      VAR_3, VAR_9);
   if (VAR_6) {
    *VAR_2 = 0;
    return VAR_5;
   }
  }
 }

 return VAR_5;
}
