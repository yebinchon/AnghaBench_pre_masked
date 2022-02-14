
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_channel {int hw_value; } ;
struct bcma_device {TYPE_1__* bus; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct TYPE_4__ {struct bcma_device* bdev; } ;
struct TYPE_3__ {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct bcma_device*,int,int,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_8,
      struct ieee80211_channel *VAR_9)
{
 struct bcma_device *VAR_10 = VAR_8->dev->bdev;
 int VAR_11 = 0;
 u16 VAR_12;


 if (VAR_9->hw_value == 13 || VAR_9->hw_value == 14)
  VAR_11 = 1;
 FUNC_4(VAR_10, VAR_2, 0, 0);
 FUNC_5(&VAR_10->bus->drv_cc, VAR_11);
 FUNC_4(VAR_10,
     VAR_0 |
     VAR_2,
     VAR_1 |
     VAR_3, 0);


 switch (VAR_11) {
 case 2:
  VAR_12 = 0x2082;
  break;
 case 1:
  VAR_12 = 0x5341;
  break;
 default:
  VAR_12 = 0x8889;
 }

 FUNC_3(VAR_8, VAR_5, VAR_12);
 FUNC_3(VAR_8, VAR_4, 0x8);



 if (VAR_11)
  FUNC_2(VAR_8, VAR_6, VAR_7);
 else
  FUNC_1(VAR_8, VAR_6,
    ~VAR_7 & 0xFFFF);

 FUNC_0(VAR_8);
}
