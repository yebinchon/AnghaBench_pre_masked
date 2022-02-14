
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offb_par {scalar_t__ cmap_type; scalar_t__ cmap_adr; } ;
struct fb_info {scalar_t__ par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_18)
{
 struct offb_par *VAR_19 = (struct offb_par *) VAR_18->par;


 if (VAR_19->cmap_type == VAR_17) {
  FUNC_0(0, VAR_19->cmap_adr + VAR_3);
  FUNC_0(0, VAR_19->cmap_adr + VAR_0);
  FUNC_0(0, VAR_19->cmap_adr + VAR_1);
  FUNC_0(0, VAR_19->cmap_adr + VAR_2);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_4);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_5);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_6);
  FUNC_0(0, VAR_19->cmap_adr + VAR_10);
  FUNC_0(0, VAR_19->cmap_adr + VAR_7);
  FUNC_0(0, VAR_19->cmap_adr + VAR_8);
  FUNC_0(0, VAR_19->cmap_adr + VAR_9);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_11);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_12);
  FUNC_0(0x0000ffff, VAR_19->cmap_adr + VAR_13);
  FUNC_0(1, VAR_19->cmap_adr + VAR_15);
  FUNC_0(0, VAR_19->cmap_adr + VAR_14);
  FUNC_0(0x0000003f, VAR_19->cmap_adr + VAR_16);
  FUNC_0(0, VAR_19->cmap_adr + VAR_15);
  FUNC_0(0, VAR_19->cmap_adr + VAR_14);
  FUNC_0(0x0000003f, VAR_19->cmap_adr + VAR_16);
 }
 return 0;
}
