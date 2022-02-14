
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
struct TYPE_9__ {int crystalfreq; } ;
struct TYPE_10__ {TYPE_4__ pmu; } ;
struct ssb_bus {TYPE_5__ chipco; } ;
struct TYPE_6__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_3__* dev; TYPE_1__ phy; } ;
struct b43_phy_lp {int pdiv; } ;
struct b206x_channel {unsigned int channel; int* data; } ;
struct TYPE_8__ {TYPE_2__* sdev; } ;
struct TYPE_7__ {struct ssb_bus* bus; } ;


 int FUNC_0 (struct b206x_channel*) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 struct b206x_channel* VAR_22 ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_23,
       unsigned int VAR_24)
{
 struct b43_phy_lp *VAR_25 = VAR_23->phy.lp;
 struct ssb_bus *VAR_26 = VAR_23->dev->sdev->bus;
 const struct b206x_channel *VAR_27 = ((void*)0);
 u32 VAR_28 = VAR_26->chipco.pmu.crystalfreq * 1000;
 u32 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 int VAR_38, VAR_39 = 0;

 for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_22); VAR_38++) {
  if (VAR_22[VAR_38].channel == VAR_24) {
   VAR_27 = &VAR_22[VAR_38];
   break;
  }
 }

 if (FUNC_1(!VAR_27))
  return -VAR_20;

 FUNC_4(VAR_23, VAR_9, 0x04);
 FUNC_5(VAR_23, VAR_2, VAR_27->data[0]);
 FUNC_5(VAR_23, VAR_3, VAR_27->data[1]);
 FUNC_5(VAR_23, VAR_4, VAR_27->data[2]);
 FUNC_5(VAR_23, VAR_7, VAR_27->data[3]);
 FUNC_5(VAR_23, VAR_8, VAR_27->data[4]);
 FUNC_5(VAR_23, VAR_0, VAR_27->data[5]);
 FUNC_5(VAR_23, VAR_1, VAR_27->data[6]);
 FUNC_5(VAR_23, VAR_6, VAR_27->data[7]);
 FUNC_5(VAR_23, VAR_5, VAR_27->data[8]);

 VAR_29 = VAR_28 / 1000;
 VAR_30 = VAR_25->pdiv * 1000;
 FUNC_5(VAR_23, VAR_18, 0xCC);
 FUNC_5(VAR_23, VAR_19, 0x07);
 FUNC_7(VAR_23);
 VAR_31 = VAR_30 * FUNC_6(VAR_24);
 if (FUNC_6(VAR_24) < 4000)
  VAR_31 *= 2;
 VAR_32 = 48 * VAR_29;
 VAR_34 = VAR_31 / VAR_32;
 VAR_35 = VAR_31 % VAR_32;
 FUNC_5(VAR_23, VAR_13, VAR_34);
 VAR_33 = VAR_35 * 0x100;
 VAR_34 = VAR_33 / VAR_32;
 VAR_35 = VAR_33 % VAR_32;
 FUNC_5(VAR_23, VAR_14, VAR_34);
 VAR_33 = VAR_35 * 0x100;
 VAR_34 = VAR_33 / VAR_32;
 VAR_35 = VAR_33 % VAR_32;
 FUNC_5(VAR_23, VAR_15, VAR_34);
 VAR_33 = VAR_35 * 0x100;
 VAR_34 = VAR_33 / VAR_32;
 VAR_35 = VAR_33 % VAR_32;
 FUNC_5(VAR_23, VAR_16, VAR_34 + ((2 * VAR_35) / VAR_32));
 VAR_36 = FUNC_3(VAR_23, VAR_10);
 VAR_37 = ((2 * VAR_31 * (VAR_36 + 1)) + (3 * VAR_29)) / (6 * VAR_29);
 FUNC_5(VAR_23, VAR_11, (VAR_37 >> 8) + 16);
 FUNC_5(VAR_23, VAR_12, VAR_37 & 0xFF);

 FUNC_8(VAR_23);
 if (FUNC_3(VAR_23, VAR_17) & 0x10) {
  FUNC_5(VAR_23, VAR_18, 0xFC);
  FUNC_5(VAR_23, VAR_19, 0);
  FUNC_7(VAR_23);
  FUNC_8(VAR_23);
  if (FUNC_3(VAR_23, VAR_17) & 0x10)
   VAR_39 = -VAR_21;
 }

 FUNC_2(VAR_23, VAR_9, ~0x04);
 return VAR_39;
}
