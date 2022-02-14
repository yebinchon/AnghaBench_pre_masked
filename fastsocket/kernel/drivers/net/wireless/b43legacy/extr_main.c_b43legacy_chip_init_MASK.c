
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int interfmode; scalar_t__ type; int txerr_cnt; scalar_t__ gmode; } ;
struct b43legacy_wldev {int wl; TYPE_4__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {int revision; } ;
struct TYPE_9__ {TYPE_3__* bus; TYPE_1__ id; } ;
struct TYPE_7__ {int fast_pwrup_delay; } ;
struct TYPE_8__ {TYPE_2__ chipco; } ;


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
 int VAR_18 ;
 int FUNC_0 (int) ;
 int VAR_19 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int ) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*) ;
 int FUNC_8 (struct b43legacy_wldev*,int) ;
 int FUNC_9 (struct b43legacy_wldev*,int) ;
 int FUNC_10 (struct b43legacy_wldev*) ;
 int FUNC_11 (struct b43legacy_wldev*,int) ;
 int FUNC_12 (struct b43legacy_wldev*,int) ;
 int FUNC_13 (struct b43legacy_wldev*,int ,int,int) ;
 int FUNC_14 (struct b43legacy_wldev*) ;
 int FUNC_15 (struct b43legacy_wldev*) ;
 scalar_t__ FUNC_16 (struct b43legacy_wldev*) ;
 int FUNC_17 (struct b43legacy_wldev*,int,int) ;
 int FUNC_18 (struct b43legacy_wldev*,int,int) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (TYPE_4__*,int ) ;
 int FUNC_21 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_22(struct b43legacy_wldev *VAR_20)
{
 struct b43legacy_phy *VAR_21 = &VAR_20->phy;
 int VAR_22;
 int VAR_23;
 u32 VAR_24, VAR_25;
 u16 VAR_26;


 VAR_25 = VAR_3 | VAR_5;
 if (VAR_20->phy.gmode)
  VAR_25 |= VAR_2;
 VAR_25 |= VAR_4;
 FUNC_18(VAR_20, VAR_13, VAR_25);

 VAR_22 = FUNC_15(VAR_20);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_4(VAR_20);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_14(VAR_20);
 if (VAR_22)
  goto err_gpio_clean;
 FUNC_10(VAR_20);

 FUNC_17(VAR_20, 0x03E6, 0x0000);
 VAR_22 = FUNC_6(VAR_20);
 if (VAR_22)
  goto err_radio_off;


 VAR_23 = VAR_21->interfmode;
 VAR_21->interfmode = VAR_1;
 FUNC_8(VAR_20, VAR_23);

 FUNC_7(VAR_20);
 FUNC_5(VAR_20, VAR_0);

 if (VAR_21->type == VAR_15) {
  VAR_26 = FUNC_11(VAR_20, 0x005E);
  VAR_26 |= 0x0004;
  FUNC_17(VAR_20, 0x005E, VAR_26);
 }
 FUNC_18(VAR_20, 0x0100, 0x01000000);
 if (VAR_20->dev->id.revision < 5)
  FUNC_18(VAR_20, 0x010C, 0x01000000);

 VAR_24 = FUNC_12(VAR_20, VAR_13);
 VAR_24 &= ~VAR_4;
 FUNC_18(VAR_20, VAR_13, VAR_24);
 VAR_24 = FUNC_12(VAR_20, VAR_13);
 VAR_24 |= VAR_4;
 FUNC_18(VAR_20, VAR_13, VAR_24);

 if (FUNC_16(VAR_20)) {
  FUNC_18(VAR_20, 0x0210, 0x00000100);
  FUNC_18(VAR_20, 0x0230, 0x00000100);
  FUNC_18(VAR_20, 0x0250, 0x00000100);
  FUNC_18(VAR_20, 0x0270, 0x00000100);
  FUNC_13(VAR_20, VAR_17, 0x0034,
          0x0000);
 }



 FUNC_13(VAR_20, VAR_17, 0x0074, 0x0000);


 FUNC_2(VAR_20);

 if (VAR_20->dev->id.revision < 3) {
  FUNC_17(VAR_20, 0x060E, 0x0000);
  FUNC_17(VAR_20, 0x0610, 0x8000);
  FUNC_17(VAR_20, 0x0604, 0x0000);
  FUNC_17(VAR_20, 0x0606, 0x0200);
 } else {
  FUNC_18(VAR_20, 0x0188, 0x80000000);
  FUNC_18(VAR_20, 0x018C, 0x02000000);
 }
 FUNC_18(VAR_20, VAR_12, 0x00004000);
 FUNC_18(VAR_20, VAR_6, 0x0001DC00);
 FUNC_18(VAR_20, VAR_7, 0x0000DC00);
 FUNC_18(VAR_20, VAR_8, 0x0000DC00);
 FUNC_18(VAR_20, VAR_9, 0x0001DC00);
 FUNC_18(VAR_20, VAR_10, 0x0000DC00);
 FUNC_18(VAR_20, VAR_11, 0x0000DC00);

 VAR_24 = FUNC_20(VAR_20->dev, VAR_19);
 VAR_24 |= VAR_18;
 FUNC_21(VAR_20->dev, VAR_19, VAR_24);

 FUNC_17(VAR_20, VAR_14,
     VAR_20->dev->bus->chipco.fast_pwrup_delay);


 FUNC_1(&VAR_21->txerr_cnt, VAR_16);

 FUNC_0(VAR_22 != 0);
 FUNC_19(VAR_20->wl, "Chip initialized\n");
out:
 return VAR_22;

err_radio_off:
 FUNC_9(VAR_20, 1);
err_gpio_clean:
 FUNC_3(VAR_20);
 goto out;
}
