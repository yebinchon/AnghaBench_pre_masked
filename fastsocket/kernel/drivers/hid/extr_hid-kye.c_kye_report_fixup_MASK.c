
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
 if (VAR_2 >= 74 &&
  VAR_1[61] == 0x05 && VAR_1[62] == 0x08 &&
  VAR_1[63] == 0x19 && VAR_1[64] == 0x08 &&
  VAR_1[65] == 0x29 && VAR_1[66] == 0x0f &&
  VAR_1[71] == 0x75 && VAR_1[72] == 0x08 &&
  VAR_1[73] == 0x95 && VAR_1[74] == 0x01) {
  FUNC_0(&VAR_0->dev, "fixing up Kye/Genius Ergo Mouse report "
    "descriptor\n");
  VAR_1[62] = 0x09;
  VAR_1[64] = 0x04;
  VAR_1[66] = 0x07;
  VAR_1[72] = 0x01;
  VAR_1[74] = 0x08;
 }
}
