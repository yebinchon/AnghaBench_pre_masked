
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {int irq_mask; struct b43_wl* wl; } ;
struct b43_wl {int beacon_templates_virgin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct b43_wl*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_8)
{
 struct b43_wl *VAR_9 = VAR_8->wl;
 u32 VAR_10, VAR_11, VAR_12;

 if (!FUNC_0(VAR_9, VAR_6) &&
     !FUNC_0(VAR_9, VAR_7) &&
     !FUNC_0(VAR_9, VAR_5))
  return;




 VAR_8->irq_mask &= ~VAR_0;

 VAR_10 = FUNC_1(VAR_8, VAR_4);
 VAR_11 = (VAR_10 & VAR_1);
 VAR_12 = (VAR_10 & VAR_2);


 if (VAR_11 && VAR_12) {
  FUNC_4(VAR_8, VAR_3, VAR_0);
  VAR_8->irq_mask |= VAR_0;
  return;
 }

 if (FUNC_5(VAR_9->beacon_templates_virgin)) {


  VAR_9->beacon_templates_virgin = 0;
  FUNC_2(VAR_8);
  FUNC_3(VAR_8);
  VAR_10 = FUNC_1(VAR_8, VAR_4);
  VAR_10 |= VAR_1;
  FUNC_4(VAR_8, VAR_4, VAR_10);
 } else {
  if (!VAR_11) {
   FUNC_2(VAR_8);
   VAR_10 = FUNC_1(VAR_8, VAR_4);
   VAR_10 |= VAR_1;
   FUNC_4(VAR_8, VAR_4, VAR_10);
  } else if (!VAR_12) {
   FUNC_3(VAR_8);
   VAR_10 = FUNC_1(VAR_8, VAR_4);
   VAR_10 |= VAR_2;
   FUNC_4(VAR_8, VAR_4, VAR_10);
  }
 }
}
