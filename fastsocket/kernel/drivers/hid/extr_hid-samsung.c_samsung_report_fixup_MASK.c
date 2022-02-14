
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
typedef int __u8 ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_2 == 184 && VAR_1[175] == 0x25 && VAR_1[176] == 0x40 &&
   VAR_1[177] == 0x75 && VAR_1[178] == 0x30 &&
   VAR_1[179] == 0x95 && VAR_1[180] == 0x01 &&
   VAR_1[182] == 0x40) {
  FUNC_0(&VAR_0->dev, "fixing up Samsung IrDA %d byte report "
    "descriptor\n", 184);
  VAR_1[176] = 0xff;
  VAR_1[178] = 0x08;
  VAR_1[180] = 0x06;
  VAR_1[182] = 0x42;
 } else
 if (VAR_2 == 203 && VAR_1[192] == 0x15 && VAR_1[193] == 0x0 &&
   VAR_1[194] == 0x25 && VAR_1[195] == 0x12) {
  FUNC_0(&VAR_0->dev, "fixing up Samsung IrDA %d byte report "
    "descriptor\n", 203);
  VAR_1[193] = 0x1;
  VAR_1[195] = 0xf;
 } else
 if (VAR_2 == 135 && VAR_1[124] == 0x15 && VAR_1[125] == 0x0 &&
   VAR_1[126] == 0x25 && VAR_1[127] == 0x11) {
  FUNC_0(&VAR_0->dev, "fixing up Samsung IrDA %d byte report "
    "descriptor\n", 135);
  VAR_1[125] = 0x1;
  VAR_1[127] = 0xe;
 }
}
