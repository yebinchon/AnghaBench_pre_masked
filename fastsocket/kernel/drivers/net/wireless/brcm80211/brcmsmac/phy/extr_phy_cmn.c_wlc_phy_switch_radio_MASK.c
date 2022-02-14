
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int d11core; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int) ;

void FUNC_7(struct brcms_phy_pub *VAR_1, bool VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_1;
 (void)FUNC_4(VAR_3->d11core, FUNC_0(VAR_0));

 if (FUNC_2(VAR_3)) {
  FUNC_6(VAR_3, VAR_2);
 } else if (FUNC_1(VAR_3)) {
  if (VAR_2) {
   FUNC_3(VAR_3, 0x44c,
        ~((0x1 << 8) |
          (0x1 << 9) |
          (0x1 << 10) | (0x1 << 11) | (0x1 << 12)));
   FUNC_3(VAR_3, 0x4b0, ~((0x1 << 3) | (0x1 << 11)));
   FUNC_3(VAR_3, 0x4f9, ~(0x1 << 3));
  } else {
   FUNC_3(VAR_3, 0x44d,
        ~((0x1 << 10) |
          (0x1 << 11) |
          (0x1 << 12) | (0x1 << 13) | (0x1 << 14)));
   FUNC_5(VAR_3, 0x44c,
       (0x1 << 8) |
       (0x1 << 9) |
       (0x1 << 10) | (0x1 << 11) | (0x1 << 12));

   FUNC_3(VAR_3, 0x4b7, ~((0x7f << 8)));
   FUNC_3(VAR_3, 0x4b1, ~((0x1 << 13)));
   FUNC_5(VAR_3, 0x4b0, (0x1 << 3) | (0x1 << 11));
   FUNC_3(VAR_3, 0x4fa, ~((0x1 << 3)));
   FUNC_5(VAR_3, 0x4f9, (0x1 << 3));
  }
 }
}
