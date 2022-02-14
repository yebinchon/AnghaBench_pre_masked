
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {scalar_t__ type; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_5->phy;
 u16 VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_4) & VAR_2;
 if (VAR_7 > 2) {
  if (VAR_6->type == VAR_1)
   FUNC_2(VAR_5, VAR_3, 0x1808);
  else
   FUNC_2(VAR_5, VAR_3, 0x1000);
 } else {
  FUNC_0(VAR_5, VAR_0, 3, 0x1044);
  FUNC_0(VAR_5, VAR_0, 4, 0x7201);
  FUNC_0(VAR_5, VAR_0, 6, 0x0040);
 }
}
