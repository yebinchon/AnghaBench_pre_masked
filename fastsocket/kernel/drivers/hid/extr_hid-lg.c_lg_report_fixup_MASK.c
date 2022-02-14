
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
typedef int __u8 ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int VAR_3)
{
 unsigned long VAR_4 = (unsigned long)FUNC_1(VAR_1);

 if ((VAR_4 & VAR_0) && VAR_3 >= 90 && VAR_2[83] == 0x26 &&
   VAR_2[84] == 0x8c && VAR_2[85] == 0x02) {
  FUNC_0(&VAR_1->dev, "fixing up Logitech keyboard report "
    "descriptor\n");
  VAR_2[84] = VAR_2[89] = 0x4d;
  VAR_2[85] = VAR_2[90] = 0x10;
 }
}
