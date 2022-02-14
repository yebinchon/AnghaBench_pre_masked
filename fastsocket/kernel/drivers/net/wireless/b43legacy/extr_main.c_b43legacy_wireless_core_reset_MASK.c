
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gmode; } ;
struct b43legacy_wldev {TYPE_1__ phy; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

void FUNC_7(struct b43legacy_wldev *VAR_8, u32 VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;

 VAR_9 |= VAR_4;
 VAR_9 |= VAR_5;
 FUNC_4(VAR_8->dev, VAR_9);
 FUNC_3(2);


 VAR_10 = FUNC_5(VAR_8->dev, VAR_6);
 VAR_10 |= VAR_7;
 VAR_10 &= ~VAR_5;
 FUNC_6(VAR_8->dev, VAR_6, VAR_10);
 FUNC_5(VAR_8->dev, VAR_6);
 FUNC_3(1);
 VAR_10 &= ~VAR_7;
 FUNC_6(VAR_8->dev, VAR_6, VAR_10);
 FUNC_5(VAR_8->dev, VAR_6);
 FUNC_3(1);


 FUNC_1(VAR_8, 1);

 VAR_11 = FUNC_0(VAR_8, VAR_2);
 VAR_11 &= ~VAR_0;
 if (VAR_9 & VAR_3) {
  VAR_11 |= VAR_0;
  VAR_8->phy.gmode = 1;
 } else
  VAR_8->phy.gmode = 0;
 VAR_11 |= VAR_1;
 FUNC_2(VAR_8, VAR_2, VAR_11);
}
