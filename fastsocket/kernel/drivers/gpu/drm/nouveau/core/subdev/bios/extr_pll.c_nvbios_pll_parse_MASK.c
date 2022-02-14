
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_n; int max_n; int min_m; int max_m; } ;
struct TYPE_5__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_n; int max_n; int min_m; int max_m; } ;
struct nvbios_pll {int type; int reg; int max_p; int max_p_usable; int refclk; TYPE_2__ vco1; void* min_p; void* bias_p; TYPE_1__ vco2; } ;
struct TYPE_7__ {int chip; } ;
struct nouveau_bios {int bmp_offset; TYPE_3__ version; } ;
struct TYPE_8__ {int crystal; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_bios*) ;
 int FUNC_1 (struct nvbios_pll*,int ,int) ;
 TYPE_4__* FUNC_2 (struct nouveau_bios*) ;
 int FUNC_3 (struct nouveau_bios*,char*,int) ;
 int FUNC_4 (struct nouveau_bios*,int) ;
 int FUNC_5 (struct nouveau_bios*,int ,int) ;
 void* FUNC_6 (struct nouveau_bios*,int) ;
 int FUNC_7 (struct nouveau_bios*,int) ;
 void* FUNC_8 (struct nouveau_bios*,int) ;
 int FUNC_9 (struct nouveau_bios*,int,int*,int*,int*) ;
 int FUNC_10 (struct nouveau_bios*,int,int*,int*,int*) ;

int
FUNC_11(struct nouveau_bios *VAR_4, u32 VAR_5, struct nvbios_pll *VAR_6)
{
 u8 VAR_7, VAR_8;
 u32 VAR_9 = VAR_5;
 u16 VAR_10;

 if (VAR_5 > VAR_3) {
  VAR_9 = VAR_5;
  VAR_10 = FUNC_9(VAR_4, VAR_9, &VAR_5, &VAR_7, &VAR_8);
 } else {
  VAR_10 = FUNC_10(VAR_4, VAR_5, &VAR_9, &VAR_7, &VAR_8);
 }

 if (VAR_7 && !VAR_10)
  return -VAR_1;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = VAR_5;
 VAR_6->reg = VAR_9;

 switch (VAR_7) {
 case 0x00:
  break;
 case 0x10:
 case 0x11:
  VAR_6->vco1.min_freq = FUNC_8(VAR_4, VAR_10 + 0);
  VAR_6->vco1.max_freq = FUNC_8(VAR_4, VAR_10 + 4);
  VAR_6->vco2.min_freq = FUNC_8(VAR_4, VAR_10 + 8);
  VAR_6->vco2.max_freq = FUNC_8(VAR_4, VAR_10 + 12);
  VAR_6->vco1.min_inputfreq = FUNC_8(VAR_4, VAR_10 + 16);
  VAR_6->vco2.min_inputfreq = FUNC_8(VAR_4, VAR_10 + 20);
  VAR_6->vco1.max_inputfreq = VAR_2;
  VAR_6->vco2.max_inputfreq = VAR_2;

  VAR_6->max_p = 0x7;
  VAR_6->max_p_usable = 0x6;


  switch (VAR_4->version.chip) {
  case 0x36:
   VAR_6->vco1.min_n = 0x5;
   break;
  default:
   VAR_6->vco1.min_n = 0x1;
   break;
  }
  VAR_6->vco1.max_n = 0xff;
  VAR_6->vco1.min_m = 0x1;
  VAR_6->vco1.max_m = 0xd;







  VAR_6->vco2.min_n = 0x4;
  switch (VAR_4->version.chip) {
  case 0x30:
  case 0x35:
   VAR_6->vco2.max_n = 0x1f;
   break;
  default:
   VAR_6->vco2.max_n = 0x28;
   break;
  }
  VAR_6->vco2.min_m = 0x1;
  VAR_6->vco2.max_m = 0x4;
  break;
 case 0x20:
 case 0x21:
  VAR_6->vco1.min_freq = FUNC_7(VAR_4, VAR_10 + 4) * 1000;
  VAR_6->vco1.max_freq = FUNC_7(VAR_4, VAR_10 + 6) * 1000;
  VAR_6->vco2.min_freq = FUNC_7(VAR_4, VAR_10 + 8) * 1000;
  VAR_6->vco2.max_freq = FUNC_7(VAR_4, VAR_10 + 10) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_7(VAR_4, VAR_10 + 12) * 1000;
  VAR_6->vco2.min_inputfreq = FUNC_7(VAR_4, VAR_10 + 14) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_7(VAR_4, VAR_10 + 16) * 1000;
  VAR_6->vco2.max_inputfreq = FUNC_7(VAR_4, VAR_10 + 18) * 1000;
  VAR_6->vco1.min_n = FUNC_6(VAR_4, VAR_10 + 20);
  VAR_6->vco1.max_n = FUNC_6(VAR_4, VAR_10 + 21);
  VAR_6->vco1.min_m = FUNC_6(VAR_4, VAR_10 + 22);
  VAR_6->vco1.max_m = FUNC_6(VAR_4, VAR_10 + 23);
  VAR_6->vco2.min_n = FUNC_6(VAR_4, VAR_10 + 24);
  VAR_6->vco2.max_n = FUNC_6(VAR_4, VAR_10 + 25);
  VAR_6->vco2.min_m = FUNC_6(VAR_4, VAR_10 + 26);
  VAR_6->vco2.max_m = FUNC_6(VAR_4, VAR_10 + 27);

  VAR_6->max_p = FUNC_6(VAR_4, VAR_10 + 29);
  VAR_6->max_p_usable = VAR_6->max_p;
  if (VAR_4->version.chip < 0x60)
   VAR_6->max_p_usable = 0x6;
  VAR_6->bias_p = FUNC_6(VAR_4, VAR_10 + 30);

  if (VAR_8 > 0x22)
   VAR_6->refclk = FUNC_8(VAR_4, VAR_10 + 31);
  break;
 case 0x30:
  VAR_10 = FUNC_7(VAR_4, VAR_10 + 1);

  VAR_6->vco1.min_freq = FUNC_7(VAR_4, VAR_10 + 0) * 1000;
  VAR_6->vco1.max_freq = FUNC_7(VAR_4, VAR_10 + 2) * 1000;
  VAR_6->vco2.min_freq = FUNC_7(VAR_4, VAR_10 + 4) * 1000;
  VAR_6->vco2.max_freq = FUNC_7(VAR_4, VAR_10 + 6) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_7(VAR_4, VAR_10 + 8) * 1000;
  VAR_6->vco2.min_inputfreq = FUNC_7(VAR_4, VAR_10 + 10) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_7(VAR_4, VAR_10 + 12) * 1000;
  VAR_6->vco2.max_inputfreq = FUNC_7(VAR_4, VAR_10 + 14) * 1000;
  VAR_6->vco1.min_n = FUNC_6(VAR_4, VAR_10 + 16);
  VAR_6->vco1.max_n = FUNC_6(VAR_4, VAR_10 + 17);
  VAR_6->vco1.min_m = FUNC_6(VAR_4, VAR_10 + 18);
  VAR_6->vco1.max_m = FUNC_6(VAR_4, VAR_10 + 19);
  VAR_6->vco2.min_n = FUNC_6(VAR_4, VAR_10 + 20);
  VAR_6->vco2.max_n = FUNC_6(VAR_4, VAR_10 + 21);
  VAR_6->vco2.min_m = FUNC_6(VAR_4, VAR_10 + 22);
  VAR_6->vco2.max_m = FUNC_6(VAR_4, VAR_10 + 23);
  VAR_6->max_p_usable = VAR_6->max_p = FUNC_6(VAR_4, VAR_10 + 25);
  VAR_6->bias_p = FUNC_6(VAR_4, VAR_10 + 27);
  VAR_6->refclk = FUNC_8(VAR_4, VAR_10 + 28);
  break;
 case 0x40:
  VAR_6->refclk = FUNC_7(VAR_4, VAR_10 + 9) * 1000;
  VAR_10 = FUNC_7(VAR_4, VAR_10 + 1);

  VAR_6->vco1.min_freq = FUNC_7(VAR_4, VAR_10 + 0) * 1000;
  VAR_6->vco1.max_freq = FUNC_7(VAR_4, VAR_10 + 2) * 1000;
  VAR_6->vco1.min_inputfreq = FUNC_7(VAR_4, VAR_10 + 4) * 1000;
  VAR_6->vco1.max_inputfreq = FUNC_7(VAR_4, VAR_10 + 6) * 1000;
  VAR_6->vco1.min_m = FUNC_6(VAR_4, VAR_10 + 8);
  VAR_6->vco1.max_m = FUNC_6(VAR_4, VAR_10 + 9);
  VAR_6->vco1.min_n = FUNC_6(VAR_4, VAR_10 + 10);
  VAR_6->vco1.max_n = FUNC_6(VAR_4, VAR_10 + 11);
  VAR_6->min_p = FUNC_6(VAR_4, VAR_10 + 12);
  VAR_6->max_p = FUNC_6(VAR_4, VAR_10 + 13);
  break;
 default:
  FUNC_3(VAR_4, "unknown pll limits version 0x%02x\n", VAR_7);
  return -VAR_0;
 }

 if (!VAR_6->refclk) {
  VAR_6->refclk = FUNC_2(VAR_4)->crystal;
  if (VAR_4->version.chip == 0x51) {
   u32 VAR_11 = FUNC_4(VAR_4, 0x680524);
   if ((VAR_6->reg == 0x680508 && VAR_11 & 0x20) ||
       (VAR_6->reg == 0x680520 && VAR_11 & 0x80)) {
    if (FUNC_5(VAR_4, 0, 0x27) < 0xa3)
     VAR_6->refclk = 200000;
    else
     VAR_6->refclk = 25000;
   }
  }
 }






 if (!VAR_6->vco1.max_freq) {
  VAR_6->vco1.max_freq = FUNC_8(VAR_4, VAR_4->bmp_offset + 67);
  VAR_6->vco1.min_freq = FUNC_8(VAR_4, VAR_4->bmp_offset + 71);
  if (FUNC_0(VAR_4) < 0x0506) {
   VAR_6->vco1.max_freq = 256000;
   VAR_6->vco1.min_freq = 128000;
  }

  VAR_6->vco1.min_inputfreq = 0;
  VAR_6->vco1.max_inputfreq = VAR_2;
  VAR_6->vco1.min_n = 0x1;
  VAR_6->vco1.max_n = 0xff;
  VAR_6->vco1.min_m = 0x1;

  if (FUNC_2(VAR_4)->crystal == 13500) {

   if (VAR_4->version.chip < 0x11)
    VAR_6->vco1.min_m = 0x7;
   VAR_6->vco1.max_m = 0xd;
  } else {
   if (VAR_4->version.chip < 0x11)
    VAR_6->vco1.min_m = 0x8;
   VAR_6->vco1.max_m = 0xe;
  }

  if (VAR_4->version.chip < 0x17 ||
      VAR_4->version.chip == 0x1a ||
      VAR_4->version.chip == 0x20)
   VAR_6->max_p = 4;
  else
   VAR_6->max_p = 5;
  VAR_6->max_p_usable = VAR_6->max_p;
 }

 return 0;
}
