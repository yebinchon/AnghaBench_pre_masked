
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int crystalfreq; } ;
struct TYPE_8__ {TYPE_3__ pmu; } ;
struct ssb_bus {TYPE_4__ chipco; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct b206x_channel {unsigned int channel; int* data; int freq; } ;
struct TYPE_6__ {TYPE_1__* sdev; } ;
struct TYPE_5__ {struct ssb_bus* bus; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_31 ;
 struct b206x_channel* VAR_32 ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct b43_wldev *VAR_33,
       unsigned int VAR_34)
{
 struct ssb_bus *VAR_35 = VAR_33->dev->sdev->bus;

 static const struct b206x_channel *VAR_36 = ((void*)0);
 u32 VAR_37 = VAR_35->chipco.pmu.crystalfreq * 1000;
 u32 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 u16 VAR_46, VAR_47;
 u32 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
 int VAR_54, VAR_55 = (VAR_37 <= 26000000 ? 1 : 2);

 for (VAR_54 = 0; VAR_54 < FUNC_0(VAR_32); VAR_54++) {
  if (VAR_32[VAR_54].channel == VAR_34) {
   VAR_36 = &VAR_32[VAR_54];
   break;
  }
 }

 if (FUNC_1(!VAR_36))
  return -VAR_31;

 FUNC_6(VAR_33, VAR_9, VAR_36->data[0]);
 FUNC_6(VAR_33, VAR_7, VAR_36->data[1]);
 FUNC_6(VAR_33, VAR_6, VAR_36->data[2]);
 FUNC_6(VAR_33, VAR_8, VAR_36->data[3]);
 FUNC_6(VAR_33, VAR_0, VAR_36->data[4]);
 FUNC_6(VAR_33, VAR_1, VAR_36->data[5]);
 FUNC_6(VAR_33, VAR_2, VAR_36->data[6]);
 FUNC_6(VAR_33, VAR_3, VAR_36->data[7]);
 FUNC_6(VAR_33, VAR_4, VAR_36->data[8]);
 FUNC_6(VAR_33, VAR_29, VAR_36->data[9]);
 FUNC_6(VAR_33, VAR_30, VAR_36->data[10]);
 FUNC_6(VAR_33, VAR_10, VAR_36->data[11]);

 VAR_46 = FUNC_4(VAR_33, VAR_5);
 FUNC_5(VAR_33, VAR_5, 0x1E);

 if (VAR_36->freq > 4000)
  VAR_39 = VAR_36->freq << 1;
 else
  VAR_39 = VAR_36->freq << 2;

 VAR_38 = VAR_37 * 3;
 VAR_40 = FUNC_8(VAR_37, 1000000, 16);
 VAR_41 = FUNC_8(VAR_37, 1000000 * VAR_55, 16);
 VAR_42 = FUNC_8(VAR_39, 3, 16);
 VAR_43 = ((((8 * VAR_37) / (VAR_55 * 5000000)) + 1) >> 1) - 1;
 FUNC_6(VAR_33, VAR_22, 0x2);
 FUNC_3(VAR_33, VAR_24,
     0xFFF8, VAR_43 >> 2);
 FUNC_3(VAR_33, VAR_25,
     0xFF9F,VAR_43 << 5);

 VAR_44 = ((((8 * VAR_37) / (VAR_55 * (VAR_43 + 1))) +
      999999) / 1000000) + 1;
 FUNC_6(VAR_33, VAR_23, VAR_44);

 VAR_45 = FUNC_8(VAR_42, VAR_41 + 16, 16);
 VAR_45 *= (VAR_43 + 1) * (VAR_44 + 1);
 VAR_45--;
 FUNC_3(VAR_33, VAR_25,
      0xF0, VAR_45 >> 8);
 FUNC_6(VAR_33, VAR_26, VAR_45 & 0xFF);

 VAR_48 = ((VAR_42 * 62500) / VAR_38) << 4;
 VAR_49 = ((VAR_42 * 62500) % VAR_38) << 4;
 while (VAR_49 >= VAR_38) {
  VAR_48++;
  VAR_49 -= VAR_38;
 }
 FUNC_3(VAR_33, VAR_17, 0xFFE0, VAR_48 >> 4);
 FUNC_3(VAR_33, VAR_18, 0xFE0F, VAR_48 << 4);
 FUNC_3(VAR_33, VAR_18, 0xFFF0, VAR_48 >> 16);
 FUNC_6(VAR_33, VAR_19, (VAR_49 >> 8) & 0xFF);
 FUNC_6(VAR_33, VAR_20, VAR_49 & 0xFF);

 FUNC_6(VAR_33, VAR_13, 0xB9);
 FUNC_6(VAR_33, VAR_14, 0x88);
 FUNC_6(VAR_33, VAR_15, 0x28);
 FUNC_6(VAR_33, VAR_16, 0x63);

 VAR_50 = ((41 * (VAR_42 - 3000)) /1200) + 27;
 VAR_51 = FUNC_8(132000 * VAR_48, 8451, 16);

 if ((VAR_51 + VAR_50 - 1) / VAR_50 > 60) {
  VAR_47 = 1;
  VAR_52 = ((VAR_51 + VAR_50) / (VAR_50 << 1)) - 8;
 } else {
  VAR_47 = 0;
  VAR_52 = ((VAR_51 + (VAR_50 >> 1)) / VAR_50) - 8;
 }
 FUNC_3(VAR_33, VAR_11, 0xFFC0, VAR_52);
 FUNC_3(VAR_33, VAR_11, 0xFFBF, VAR_47 << 6);

 VAR_53 = FUNC_8(100 * VAR_40, VAR_42, 16);
 VAR_53 *= (VAR_52 * 8) * (VAR_47 + 1);
 if (VAR_53 > 150)
  VAR_53 = 0;

 FUNC_3(VAR_33, VAR_12, 0xFFE0, VAR_53);
 FUNC_3(VAR_33, VAR_12, 0xFFDF, VAR_47 << 5);

 FUNC_3(VAR_33, VAR_27, 0xFFFB, 0x4);
 if (VAR_37 > 26000000)
  FUNC_5(VAR_33, VAR_27, 0x2);
 else
  FUNC_2(VAR_33, VAR_27, 0xFD);

 if (VAR_40 == 45)
  FUNC_5(VAR_33, VAR_21, 0x2);
 else
  FUNC_2(VAR_33, VAR_21, 0xFD);

 FUNC_5(VAR_33, VAR_28, 0x3);
 FUNC_9(1);
 FUNC_2(VAR_33, VAR_28, 0xFFFC);
 FUNC_7(VAR_33);
 FUNC_6(VAR_33, VAR_5, VAR_46);

 return 0;
}
