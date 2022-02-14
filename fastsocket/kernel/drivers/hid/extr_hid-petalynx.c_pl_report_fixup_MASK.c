
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
 if (VAR_2 >= 60 && VAR_1[39] == 0x2a && VAR_1[40] == 0xf5 &&
   VAR_1[41] == 0x00 && VAR_1[59] == 0x26 &&
   VAR_1[60] == 0xf9 && VAR_1[61] == 0x00) {
  FUNC_0(&VAR_0->dev, "fixing up Petalynx Maxter Remote report "
    "descriptor\n");
  VAR_1[60] = 0xfa;
  VAR_1[40] = 0xfa;
 }
}
