
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0, char *VAR_1, u8 VAR_2,
    const u8 VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 while (VAR_2 != (u8)(VAR_3 + 1)) {
  if ((VAR_5 % VAR_4) == 0) {
   if (VAR_5 > 0)
    FUNC_0("\n");
   FUNC_0("tvp5150: %s reg 0x%02x = ", VAR_1, VAR_2);
  }
  FUNC_0("%02x ", FUNC_1(VAR_0, VAR_2));

  VAR_2++;
  VAR_5++;
 }
 FUNC_0("\n");
}
