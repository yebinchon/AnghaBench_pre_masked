
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_8)
{
 struct b43_phy *VAR_9 = &VAR_8->phy;

 if (VAR_9->type == VAR_0) {
  if (VAR_9->rev <= 1)
   FUNC_2(VAR_8);
  else if (VAR_9->rev == 2)
   FUNC_1(VAR_8, VAR_3);
  else if (VAR_9->rev == 3)
   FUNC_1(VAR_8, VAR_4);
  else
   FUNC_1(VAR_8, VAR_7);
 } else {
  if (VAR_9->rev >= 6) {
   if (FUNC_0(VAR_8, VAR_1) & VAR_2)
    FUNC_1(VAR_8, VAR_7);
   else
    FUNC_1(VAR_8, VAR_6);
  } else {
   FUNC_1(VAR_8, VAR_5);
  }
 }
}
