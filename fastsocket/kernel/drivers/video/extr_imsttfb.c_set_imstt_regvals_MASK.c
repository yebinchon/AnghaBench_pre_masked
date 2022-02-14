
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct imstt_regvals {int pitch; int hes; int heb; int hsb; int ht; int ves; int veb; int vsb; int vt; int vil; } ;
struct imstt_par {scalar_t__ ramdac; int dc_regs; struct imstt_regvals init; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct imstt_par* par; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct imstt_par*,int ) ;
 int FUNC_1 (struct imstt_par*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3 (struct fb_info *VAR_23, u_int VAR_24)
{
 struct imstt_par *VAR_25 = VAR_23->par;
 struct imstt_regvals *VAR_26 = &VAR_25->init;
 __u32 VAR_27, VAR_28, VAR_29, VAR_30;

 if (VAR_25->ramdac == VAR_7)
  FUNC_0(VAR_25, VAR_24);
 else
  FUNC_1(VAR_25, VAR_24);
 switch (VAR_24) {
  default:
  case 8:
   VAR_27 = 0x17b1;
   VAR_28 = VAR_26->pitch >> 2;
   VAR_29 = 0x000;
   break;
  case 16:
   VAR_27 = 0x17b3;
   VAR_28 = VAR_26->pitch >> 1;
   VAR_29 = 0x100;
   break;
  case 24:
   VAR_27 = 0x17b9;
   VAR_28 = VAR_26->pitch - (VAR_26->pitch >> 2);
   VAR_29 = 0x200;
   break;
  case 32:
   VAR_27 = 0x17b5;
   VAR_28 = VAR_26->pitch;
   VAR_29 = 0x300;
   break;
 }
 if (VAR_25->ramdac == VAR_16)
  VAR_27 -= 0x30;

 FUNC_2(VAR_25->dc_regs, VAR_3, VAR_26->hes);
 FUNC_2(VAR_25->dc_regs, VAR_2, VAR_26->heb);
 FUNC_2(VAR_25->dc_regs, VAR_5, VAR_26->hsb);
 FUNC_2(VAR_25->dc_regs, VAR_6, VAR_26->ht);
 FUNC_2(VAR_25->dc_regs, VAR_19, VAR_26->ves);
 FUNC_2(VAR_25->dc_regs, VAR_18, VAR_26->veb);
 FUNC_2(VAR_25->dc_regs, VAR_21, VAR_26->vsb);
 FUNC_2(VAR_25->dc_regs, VAR_22, VAR_26->vt);
 FUNC_2(VAR_25->dc_regs, VAR_20, VAR_26->vil);
 FUNC_2(VAR_25->dc_regs, VAR_1, 1);
 FUNC_2(VAR_25->dc_regs, VAR_17, 1);
 FUNC_2(VAR_25->dc_regs, VAR_15, 4);
 FUNC_2(VAR_25->dc_regs, VAR_8, 1);
 FUNC_2(VAR_25->dc_regs, VAR_10, 0x980);
 FUNC_2(VAR_25->dc_regs, VAR_9, 0x11);

 if (VAR_25->ramdac == VAR_7) {
  FUNC_2(VAR_25->dc_regs, VAR_4, 0x0100);
  FUNC_2(VAR_25->dc_regs, VAR_0, 0x00ff);
  FUNC_2(VAR_25->dc_regs, VAR_13, 0x0073);
 } else {
  FUNC_2(VAR_25->dc_regs, VAR_4, 0x0200);
  FUNC_2(VAR_25->dc_regs, VAR_0, 0x01ff);
  FUNC_2(VAR_25->dc_regs, VAR_13, 0x0003);
 }

 switch (VAR_23->fix.smem_len) {
  case 0x200000:
   VAR_30 = 0x059d | VAR_29;
   break;


  default:
   VAR_28 >>= 1;
   VAR_30 = 0x150dd | VAR_29;
   break;
 }

 FUNC_2(VAR_25->dc_regs, VAR_11, VAR_30);
 FUNC_2(VAR_25->dc_regs, VAR_12, VAR_28);
 FUNC_2(VAR_25->dc_regs, VAR_14, VAR_27);
}
