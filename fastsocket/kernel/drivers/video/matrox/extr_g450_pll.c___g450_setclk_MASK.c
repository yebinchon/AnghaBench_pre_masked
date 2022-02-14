
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct matrox_pll_limits {int vcomin; } ;
struct matrox_pll_cache {int dummy; } ;
struct TYPE_4__ {struct matrox_pll_cache video; struct matrox_pll_cache system; struct matrox_pll_cache pixel; } ;
struct TYPE_3__ {struct matrox_pll_limits video; struct matrox_pll_limits system; struct matrox_pll_limits pixel; } ;
struct matrox_fb_info {unsigned int max_pixel_clock_panellink; int hw; TYPE_2__ cache; TYPE_1__ limits; int pcidev; } ;


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


 unsigned int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct matrox_pll_cache*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct matrox_fb_info*,struct matrox_pll_cache*,unsigned int) ;
 unsigned int FUNC_2 (struct matrox_fb_info*,unsigned int,unsigned int*,unsigned int) ;
 unsigned int FUNC_3 (struct matrox_fb_info*,struct matrox_pll_limits const*,unsigned int*,unsigned int) ;
 unsigned int FUNC_4 (struct matrox_fb_info*,unsigned int) ;
 unsigned int FUNC_5 (struct matrox_fb_info*,struct matrox_pll_limits const*,unsigned int*,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (struct matrox_fb_info*,int ) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct matrox_fb_info*,int ,int) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct matrox_fb_info*,unsigned int,unsigned int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ,int*) ;
 int FUNC_15 (int ,int ,int) ;
 unsigned int FUNC_16 (unsigned int,int ) ;
 int FUNC_17 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct matrox_fb_info *VAR_22, unsigned int VAR_23,
    unsigned int VAR_24, unsigned int *VAR_25,
    unsigned int *VAR_26)
{
 unsigned int VAR_27;
 unsigned int VAR_28;
 const struct matrox_pll_limits* VAR_29;
 struct matrox_pll_cache* VAR_30;

 VAR_28 = 0;
 switch (VAR_24) {
  case 132:
  case 131:
  case 130:
   {
    u_int8_t VAR_31, VAR_32;
    unsigned long VAR_33;

    FUNC_8(VAR_33);

    VAR_32 = FUNC_7(VAR_22, VAR_12);
    FUNC_9(VAR_22, VAR_12, VAR_32 & ~VAR_13);
    FUNC_13(VAR_19, VAR_16);
    FUNC_13(VAR_18, FUNC_12(VAR_18) | VAR_17);
    VAR_31 = FUNC_7(VAR_22, VAR_7);
    VAR_31 |= VAR_8;
    if (!(VAR_31 & VAR_9)) {
     VAR_31 |= VAR_9;
    }
    FUNC_9(VAR_22, VAR_7, VAR_31);


    if (VAR_23 >= VAR_22->max_pixel_clock_panellink)
     VAR_31 = 0;
    else VAR_31 =
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_5 |
     VAR_6;


    FUNC_9(VAR_22, VAR_12,
       VAR_32);

    FUNC_10(VAR_33);
   }
   {
    u_int8_t VAR_34;

    VAR_34 = FUNC_12(VAR_15) & ~0x0C;
    switch (VAR_24) {
     case 132:
      break;
     case 131:
      VAR_34 |= 0x04;
      break;
     default:
      VAR_34 |= 0x0C;
      break;
    }
    FUNC_13(VAR_14, VAR_34);
   }
   VAR_29 = &VAR_22->limits.pixel;
   VAR_30 = &VAR_22->cache.pixel;
   break;
  case 129:
   {
    u_int32_t VAR_35;

    FUNC_14(VAR_22->pcidev, VAR_21, &VAR_35);
    if (!(VAR_35 & 0x20)) {
     FUNC_15(VAR_22->pcidev, VAR_21, VAR_35 | 0x20);
    }
   }
   VAR_29 = &VAR_22->limits.system;
   VAR_30 = &VAR_22->cache.system;
   break;
  case 128:
   {
    u_int8_t VAR_36;
    unsigned int VAR_37;
    unsigned long VAR_38;

    FUNC_8(VAR_38);
    VAR_36 = FUNC_7(VAR_22, VAR_12);
    if (!(VAR_36 & 2)) {
     FUNC_9(VAR_22, VAR_12, VAR_36 | 2);
    }

    VAR_37 = FUNC_7(VAR_22, VAR_10) << 16;
    VAR_37 |= FUNC_7(VAR_22, VAR_11) << 8;
    VAR_28 = FUNC_4(VAR_22, VAR_37);
    FUNC_10(VAR_38);
   }
   VAR_29 = &VAR_22->limits.video;
   VAR_30 = &VAR_22->cache.video;
   break;
  default:
   return -VAR_1;
 }

 VAR_27 = 0;
 {
  unsigned int VAR_39;
  unsigned int VAR_40;

  for (VAR_39 = FUNC_3(VAR_22, VAR_29, &VAR_40, VAR_23); VAR_39 != VAR_20; VAR_39 = FUNC_5(VAR_22, VAR_29, &VAR_40, VAR_39)) {
   unsigned int VAR_41;
   unsigned int VAR_42;
   unsigned int VAR_43;

   VAR_42 = FUNC_4(VAR_22, VAR_39);
   VAR_43 = FUNC_16(VAR_23, FUNC_6(VAR_39, VAR_42));
   for (VAR_41 = VAR_27; VAR_41 > 0; VAR_41--) {




    if (VAR_43 <= VAR_26[VAR_41-1]) {




     if (VAR_43 == VAR_26[VAR_41-1]
         && VAR_42 != FUNC_4(VAR_22, VAR_25[VAR_41-1])
         && VAR_42 < (VAR_29->vcomin * 17 / 16)) {
      break;
     }
     VAR_25[VAR_41] = VAR_25[VAR_41-1];
     VAR_26[VAR_41] = VAR_26[VAR_41-1];
    } else {
     break;
    }
   }
   VAR_25[VAR_41] = VAR_39;
   VAR_26[VAR_41] = VAR_43;
   VAR_27++;
  }
 }

 if (!VAR_27) {
  return -VAR_0;
 }
 {
  unsigned long VAR_44;
  unsigned int VAR_45;

  FUNC_8(VAR_44);
  VAR_45 = FUNC_1(VAR_22, VAR_30, VAR_25[0]);
  if (VAR_45 != VAR_20) {
   FUNC_11(VAR_22, VAR_45, VAR_24);
  } else {
   VAR_45 = FUNC_2(VAR_22, VAR_24, VAR_25, VAR_27);
   FUNC_0(VAR_30, VAR_25[0], VAR_45);
  }
  FUNC_17(&VAR_22->hw, VAR_45, VAR_24);
  FUNC_10(VAR_44);
  return VAR_45;
 }
}
