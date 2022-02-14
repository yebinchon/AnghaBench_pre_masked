
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
typedef int __u8 ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_2 >= 30 && VAR_1[29] == 0x05 && VAR_1[30] == 0x09) {
  FUNC_0(&VAR_0->dev, "fixing up button/consumer in HID report "
    "descriptor\n");
  VAR_1[30] = 0x0c;
 }
}
