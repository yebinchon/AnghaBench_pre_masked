
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdfx_par {int dummy; } ;
struct fb_info {struct tdfx_par* par; } ;
struct banshee_reg {int vgainit1; int vidcfg; int mempll; int gfxpll; int vidpll; int* misc; int* crt; int* ext; int vgainit0; int dacmode; int stride; int curspataddr; int screensize; int startaddr; int miscinit0; int * att; int * gra; int * seq; } ;


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
 int FUNC_0 (struct tdfx_par*,int,int ) ;
 int FUNC_1 (struct tdfx_par*,int) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct tdfx_par*,int) ;
 int FUNC_4 (struct tdfx_par*,int,int) ;
 int FUNC_5 (struct tdfx_par*,int,int ) ;
 int FUNC_6 (struct tdfx_par*,int,int ) ;
 int FUNC_7 (struct tdfx_par*,int ) ;
 int FUNC_8 (struct tdfx_par*,int ,int) ;
 int FUNC_9 (struct tdfx_par*) ;
 int FUNC_10 (struct tdfx_par*) ;
 int FUNC_11 (struct tdfx_par*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct fb_info *VAR_22, struct banshee_reg *VAR_23)
{
 struct tdfx_par *VAR_24 = VAR_22->par;
 int VAR_25;

 FUNC_2(VAR_22);

 FUNC_8(VAR_24, VAR_9, FUNC_7(VAR_24, VAR_9) | 0x01);

 FUNC_4(VAR_24, 0x11, FUNC_3(VAR_24, 0x11) & 0x7f);

 FUNC_1(VAR_24, 3);
 FUNC_8(VAR_24, VAR_17, VAR_23->vgainit1 & 0x001FFFFF);
 FUNC_8(VAR_24, VAR_20, VAR_23->vidcfg & ~0x00000001);




 FUNC_8(VAR_24, VAR_11, VAR_23->vidpll);

 FUNC_11(VAR_24, VAR_10, VAR_23->misc[0x00] | 0x01);

 for (VAR_25 = 0; VAR_25 < 5; VAR_25++)
  FUNC_6(VAR_24, VAR_25, VAR_23->seq[VAR_25]);

 for (VAR_25 = 0; VAR_25 < 25; VAR_25++)
  FUNC_4(VAR_24, VAR_25, VAR_23->crt[VAR_25]);

 for (VAR_25 = 0; VAR_25 < 9; VAR_25++)
  FUNC_5(VAR_24, VAR_25, VAR_23->gra[VAR_25]);

 for (VAR_25 = 0; VAR_25 < 21; VAR_25++)
  FUNC_0(VAR_24, VAR_25, VAR_23->att[VAR_25]);

 FUNC_4(VAR_24, 0x1a, VAR_23->ext[0]);
 FUNC_4(VAR_24, 0x1b, VAR_23->ext[1]);

 FUNC_9(VAR_24);
 FUNC_10(VAR_24);

 FUNC_1(VAR_24, 9);
 FUNC_8(VAR_24, VAR_16, VAR_23->vgainit0);
 FUNC_8(VAR_24, VAR_5, VAR_23->dacmode);
 FUNC_8(VAR_24, VAR_19, VAR_23->stride);
 FUNC_8(VAR_24, VAR_7, VAR_23->curspataddr);

 FUNC_8(VAR_24, VAR_21, VAR_23->screensize);
 FUNC_8(VAR_24, VAR_18, VAR_23->startaddr);
 FUNC_8(VAR_24, VAR_20, VAR_23->vidcfg);
 FUNC_8(VAR_24, VAR_17, VAR_23->vgainit1);
 FUNC_8(VAR_24, VAR_8, VAR_23->miscinit0);

 FUNC_1(VAR_24, 8);
 FUNC_8(VAR_24, VAR_14, VAR_23->startaddr);
 FUNC_8(VAR_24, VAR_6, VAR_23->startaddr);
 FUNC_8(VAR_24, VAR_4, 0);
 FUNC_8(VAR_24, VAR_1, 0);
 FUNC_8(VAR_24, VAR_0, 0x0fff0fff);
 FUNC_8(VAR_24, VAR_3, 0);
 FUNC_8(VAR_24, VAR_2, 0x0fff0fff);
 FUNC_8(VAR_24, VAR_15, 0);

 FUNC_2(VAR_22);
}
