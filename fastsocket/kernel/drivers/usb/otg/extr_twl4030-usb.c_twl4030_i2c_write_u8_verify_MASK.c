
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct twl4030_usb {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct twl4030_usb *VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;

 if ((FUNC_2(VAR_2, VAR_3, VAR_4) >= 0) &&
     (FUNC_1(VAR_2, &VAR_5, VAR_4) >= 0) &&
      (VAR_5 == VAR_3))
  return 0;
 FUNC_0(VAR_1->dev, "Write%d[%d,0x%x] wrote %02x but read %02x\n",
   1, VAR_2, VAR_4, VAR_5, VAR_3);


 if ((FUNC_2(VAR_2, VAR_3, VAR_4) >= 0) &&
     (FUNC_1(VAR_2, &VAR_5, VAR_4) >= 0) &&
      (VAR_5 == VAR_3))
  return 0;
 FUNC_0(VAR_1->dev, "Write%d[%d,0x%x] wrote %02x but read %02x\n",
   2, VAR_2, VAR_4, VAR_5, VAR_3);


 return -VAR_0;
}
