
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ hsync_pol; } ;
struct TYPE_6__ {int type; TYPE_1__ vfe_pol; } ;
struct TYPE_5__ {int field_per_buff; int img_y; int img_height; int img_x; int img_width; scalar_t__ odd_even; } ;
struct zoran {TYPE_3__ card; int stat_com; TYPE_2__ jpg_settings; struct tvnorm* timing; } ;
struct tvnorm {int Ht; int VStart; int HSyncStart; int Wt; int HStart; } ;
typedef enum zoran_codec_mode { ____Placeholder_zoran_codec_mode } zoran_codec_mode ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct zoran*,int) ;

__attribute__((used)) static void
FUNC_5 (struct zoran *VAR_30,
   enum zoran_codec_mode VAR_31)
{
 struct tvnorm *VAR_32;
 u32 VAR_33;

 VAR_32 = VAR_30->timing;


 FUNC_2(0, VAR_22);


 switch (VAR_31) {

 case 131:
 default:
  VAR_33 = VAR_19;
  break;

 case 130:
  VAR_33 = VAR_20;
  VAR_33 |= VAR_21;


  break;

 case 129:
  VAR_33 = VAR_17;
  break;

 case 128:
  VAR_33 = VAR_18;
  break;

 }
 VAR_33 |= VAR_16;
 if (VAR_30->jpg_settings.field_per_buff == 1)
  VAR_33 |= VAR_15;
 FUNC_2(VAR_33, VAR_14);


 FUNC_1(VAR_26, VAR_25);
 VAR_33 = (6 << VAR_29) |
       (VAR_32->Ht << VAR_28);
 FUNC_2(VAR_33, VAR_27);
 VAR_33 = ((VAR_30->jpg_settings.img_y + VAR_32->VStart) << VAR_7) |
       (VAR_30->jpg_settings.img_height << VAR_8);
 FUNC_2(VAR_33, VAR_6);


 if (VAR_30->card.vfe_pol.hsync_pol)
  FUNC_1(VAR_24, VAR_23);
 else
  FUNC_0(~VAR_24, VAR_23);
 VAR_33 = ((VAR_32->HSyncStart) << VAR_10) |
       (VAR_32->Wt << VAR_11);
 FUNC_2(VAR_33, VAR_9);
 VAR_33 = ((VAR_30->jpg_settings.img_x +
  VAR_32->HStart + 4) << VAR_2) |
       (VAR_30->jpg_settings.img_width << VAR_3);
 FUNC_2(VAR_33, VAR_1);


 if (VAR_30->jpg_settings.odd_even)
  VAR_33 = VAR_5;
 else
  VAR_33 = 0;

 FUNC_2(VAR_33, VAR_4);





 VAR_33 = FUNC_3(VAR_30->stat_com);
 FUNC_2(VAR_33, VAR_12);



 switch (VAR_31) {

 case 129:
 case 131:
  if (VAR_30->card.type != VAR_0)
   VAR_33 = 140;
  else
   VAR_33 = 60;
  break;

 case 128:
 case 130:
  VAR_33 = 20;
  break;

 default:
  VAR_33 = 80;
  break;

 }
 FUNC_2(VAR_33, VAR_13);
 FUNC_4(VAR_30, VAR_31);

}
