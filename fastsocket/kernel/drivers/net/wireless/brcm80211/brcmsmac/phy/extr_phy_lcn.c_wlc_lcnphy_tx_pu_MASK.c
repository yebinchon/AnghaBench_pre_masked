
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int ) ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

void FUNC_4(struct brcms_phy *VAR_0, bool VAR_1)
{
 if (!VAR_1) {

  FUNC_1(VAR_0, 0x43b, ~(u16) ((0x1 << 1) | (0x1 << 4)));

  FUNC_2(VAR_0, 0x43c, (0x1 << 1), 1 << 1);

  FUNC_1(VAR_0, 0x44c,
       ~(u16) ((0x1 << 3) |
        (0x1 << 5) |
        (0x1 << 12) |
        (0x1 << 0) | (0x1 << 1) | (0x1 << 2)));

  FUNC_1(VAR_0, 0x44d,
       ~(u16) ((0x1 << 3) | (0x1 << 5) | (0x1 << 14)));
  FUNC_2(VAR_0, 0x44d, (0x1 << 2), 1 << 2);

  FUNC_2(VAR_0, 0x44d, (0x1 << 1) | (0x1 << 0), (0x1 << 0));

  FUNC_1(VAR_0, 0x4f9,
       ~(u16) ((0x1 << 0) | (0x1 << 1) | (0x1 << 2)));

  FUNC_1(VAR_0, 0x4fa,
       ~(u16) ((0x1 << 0) | (0x1 << 1) | (0x1 << 2)));
 } else {

  FUNC_2(VAR_0, 0x43b, (0x1 << 1), 1 << 1);
  FUNC_2(VAR_0, 0x43c, (0x1 << 1), 0 << 1);

  FUNC_2(VAR_0, 0x43b, (0x1 << 4), 1 << 4);
  FUNC_2(VAR_0, 0x43c, (0x1 << 6), 0 << 6);

  FUNC_2(VAR_0, 0x44c, (0x1 << 12), 1 << 12);
  FUNC_2(VAR_0, 0x44d, (0x1 << 14), 1 << 14);

  FUNC_3(VAR_0, 1, 0);

  FUNC_2(VAR_0, 0x44d, (0x1 << 2), 0 << 2);
  FUNC_2(VAR_0, 0x44c, (0x1 << 2), 1 << 2);

  if (FUNC_0(VAR_0->radio_chanspec)) {

   FUNC_2(VAR_0, 0x44c, (0x1 << 3), 1 << 3);
   FUNC_2(VAR_0, 0x44d, (0x1 << 3), 1 << 3);

   FUNC_2(VAR_0, 0x44c, (0x1 << 5), 1 << 5);
   FUNC_2(VAR_0, 0x44d, (0x1 << 5), 0 << 5);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 1), 1 << 1);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 1), 1 << 1);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 2), 1 << 2);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 2), 1 << 2);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 0), 1 << 0);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 0), 1 << 0);
  } else {

   FUNC_2(VAR_0, 0x44c, (0x1 << 3), 1 << 3);
   FUNC_2(VAR_0, 0x44d, (0x1 << 3), 0 << 3);

   FUNC_2(VAR_0, 0x44c, (0x1 << 5), 1 << 5);
   FUNC_2(VAR_0, 0x44d, (0x1 << 5), 1 << 5);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 1), 1 << 1);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 1), 0 << 1);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 2), 1 << 2);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 2), 0 << 2);

   FUNC_2(VAR_0, 0x4f9, (0x1 << 0), 1 << 0);
   FUNC_2(VAR_0, 0x4fa, (0x1 << 0), 0 << 0);
  }
 }
}
