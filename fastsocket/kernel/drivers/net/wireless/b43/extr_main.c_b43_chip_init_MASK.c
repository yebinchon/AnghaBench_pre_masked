
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_phy {scalar_t__ type; TYPE_1__* ops; scalar_t__ gmode; } ;
struct b43_wldev {int wl; TYPE_5__* dev; struct b43_phy phy; } ;
struct TYPE_10__ {int core_rev; int bus_type; TYPE_4__* sdev; } ;
struct TYPE_9__ {TYPE_3__* bus; } ;
struct TYPE_7__ {int fast_pwrup_delay; } ;
struct TYPE_8__ {TYPE_2__ chipco; } ;
struct TYPE_6__ {int (* set_rx_antenna ) (struct b43_wldev*,int ) ;int (* interf_mitigation ) (struct b43_wldev*,int ) ;int (* switch_analog ) (struct b43_wldev*,int) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct b43_wldev*,int) ;
 int FUNC_15 (struct b43_wldev*,int ) ;
 int FUNC_16 (struct b43_wldev*,int ) ;

__attribute__((used)) static int FUNC_17(struct b43_wldev *VAR_18)
{
 struct b43_phy *VAR_19 = &VAR_18->phy;
 int VAR_20;
 u32 VAR_21;
 u16 VAR_22;


 VAR_21 = VAR_3 | VAR_5;
 if (VAR_18->phy.gmode)
  VAR_21 |= VAR_2;
 VAR_21 |= VAR_4;
 FUNC_12(VAR_18, VAR_13, VAR_21);

 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_2(VAR_18);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_9(VAR_18);
 if (VAR_20)
  goto err_gpio_clean;


 VAR_19->ops->switch_analog(VAR_18, 1);
 VAR_20 = FUNC_6(VAR_18);
 if (VAR_20)
  goto err_gpio_clean;


 if (VAR_19->ops->interf_mitigation)
  VAR_19->ops->interf_mitigation(VAR_18, VAR_1);


 if (VAR_19->ops->set_rx_antenna)
  VAR_19->ops->set_rx_antenna(VAR_18, VAR_0);
 FUNC_5(VAR_18, VAR_0);

 if (VAR_19->type == VAR_15) {
  VAR_22 = FUNC_7(VAR_18, 0x005E);
  VAR_22 |= 0x0004;
  FUNC_11(VAR_18, 0x005E, VAR_22);
 }
 FUNC_12(VAR_18, 0x0100, 0x01000000);
 if (VAR_18->dev->core_rev < 5)
  FUNC_12(VAR_18, 0x010C, 0x01000000);

 FUNC_4(VAR_18, VAR_13, ~VAR_4, 0);
 FUNC_4(VAR_18, VAR_13, ~0, VAR_4);



 FUNC_8(VAR_18, VAR_16, VAR_17, 0);


 FUNC_0(VAR_18);

 if (VAR_18->dev->core_rev < 3) {
  FUNC_11(VAR_18, 0x060E, 0x0000);
  FUNC_11(VAR_18, 0x0610, 0x8000);
  FUNC_11(VAR_18, 0x0604, 0x0000);
  FUNC_11(VAR_18, 0x0606, 0x0200);
 } else {
  FUNC_12(VAR_18, 0x0188, 0x80000000);
  FUNC_12(VAR_18, 0x018C, 0x02000000);
 }
 FUNC_12(VAR_18, VAR_12, 0x00004000);
 FUNC_12(VAR_18, VAR_6, 0x0001FC00);
 FUNC_12(VAR_18, VAR_7, 0x0000DC00);
 FUNC_12(VAR_18, VAR_8, 0x0000DC00);
 FUNC_12(VAR_18, VAR_9, 0x0001DC00);
 FUNC_12(VAR_18, VAR_10, 0x0000DC00);
 FUNC_12(VAR_18, VAR_11, 0x0000DC00);

 FUNC_3(VAR_18, 1);

 switch (VAR_18->dev->bus_type) {
 }

 VAR_20 = 0;
 FUNC_13(VAR_18->wl, "Chip initialized\n");
out:
 return VAR_20;

err_gpio_clean:
 FUNC_1(VAR_18);
 return VAR_20;
}
