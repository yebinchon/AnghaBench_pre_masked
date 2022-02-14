
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; } ;
struct hid_device {int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int VAR_3)
{
 struct sony_sc *VAR_4 = FUNC_1(VAR_1);

 if ((VAR_4->quirks & VAR_0) &&
   VAR_3 >= 56 && VAR_2[54] == 0x81 && VAR_2[55] == 0x07) {
  FUNC_0(&VAR_1->dev, "Fixing up Sony Vaio VGX report "
    "descriptor\n");
  VAR_2[55] = 0x06;
 }
}
