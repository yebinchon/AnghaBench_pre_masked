
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
struct apple_sc {int quirks; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct apple_sc* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int VAR_3)
{
 struct apple_sc *VAR_4 = FUNC_1(VAR_1);

 if ((VAR_4->quirks & VAR_0) && VAR_3 >= 60 &&
   VAR_2[53] == 0x65 && VAR_2[59] == 0x65) {
  FUNC_0(&VAR_1->dev, "fixing up MacBook JIS keyboard report "
    "descriptor\n");
  VAR_2[53] = VAR_2[59] = 0xe7;
 }
}
