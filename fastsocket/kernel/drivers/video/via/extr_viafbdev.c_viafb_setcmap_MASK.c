
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ var; } ;
struct fb_cmap {int len; int* red; int* green; int* blue; int* transp; } ;
struct TYPE_6__ {TYPE_2__* chip_info; } ;
struct TYPE_5__ {scalar_t__ gfx_chip_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 TYPE_3__* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct fb_cmap *VAR_8, struct fb_info *VAR_9)
{
 u32 VAR_10 = VAR_8->len;
 u32 VAR_11;
 u16 *VAR_12 = VAR_8->red;
 u16 *VAR_13 = VAR_8->green;
 u16 *VAR_14 = VAR_8->blue;
 u16 *VAR_15 = VAR_8->transp;
 u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = 0, VAR_21 = 10;
 if (VAR_10 > 256)
  return 1;
 if (VAR_4 == VAR_7->chip_info->gfx_chip_name) {




  FUNC_3(0x80000000 | (0xf6 & ~3), (unsigned long)0xCF8);
  VAR_20 = (FUNC_1((unsigned long)0xCFC) >> ((0xf6 & 3) * 8)) & 0xff;
 }
 switch (VAR_9->var.bits_per_pixel) {
 case 8:
  FUNC_2(0x1A, 0x3C4);
  VAR_16 = FUNC_0(0x3C5);
  FUNC_2(0x1B, 0x3C4);
  VAR_17 = FUNC_0(0x3C5);
  FUNC_2(0x67, 0x3D4);
  VAR_18 = FUNC_0(0x3D5);
  FUNC_2(0x6A, 0x3D4);
  VAR_19 = FUNC_0(0x3D5);

  FUNC_2(0x1A, 0x3C4);
  FUNC_2(VAR_16 | 0x01, 0x3C5);
  FUNC_2(0x1B, 0x3C4);

  FUNC_2(VAR_17 | 0x80, 0x3C5);
  FUNC_2(0x67, 0x3D4);

  FUNC_2(VAR_18 & 0x3F, 0x3D5);
  FUNC_2(0x6A, 0x3D4);

  FUNC_2(VAR_19 & 0xBF, 0x3D5);

  FUNC_2(VAR_19 | 0x80, 0x3D5);

  FUNC_2(VAR_19 | 0xC0, 0x3D5);


  FUNC_2(0xFF, 0x3c6);
  FUNC_2(0x00, 0x3C8);
  if (VAR_4 == VAR_7->chip_info->gfx_chip_name &&
   VAR_20 >= 15) {
   VAR_21 = 8;
   FUNC_4(VAR_2, VAR_5, VAR_0, VAR_0);
   FUNC_4(VAR_3, VAR_6, VAR_1, VAR_1);
  } else {
   VAR_21 = 10;
   FUNC_4(VAR_2, VAR_5, 0, VAR_0);
   FUNC_4(VAR_3, VAR_6, 0, VAR_1);
  }
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   FUNC_2((*(VAR_12 + VAR_11)) >> VAR_21, 0x3C9);
   FUNC_2((*(VAR_13 + VAR_11)) >> VAR_21, 0x3C9);
   FUNC_2((*(VAR_14 + VAR_11)) >> VAR_21, 0x3C9);
  }

  FUNC_2(0x1A, 0x3C4);

  FUNC_2(VAR_16 & 0xFE, 0x3C5);

  FUNC_2(0xFF, 0x3c6);
  FUNC_2(0x00, 0x3C8);
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   FUNC_2((*(VAR_12 + VAR_11)) >> VAR_21, 0x3C9);
   FUNC_2((*(VAR_13 + VAR_11)) >> VAR_21, 0x3C9);
   FUNC_2((*(VAR_14 + VAR_11)) >> VAR_21, 0x3C9);
  }

  FUNC_2(0x1A, 0x3C4);
  FUNC_2(VAR_16, 0x3C5);
  FUNC_2(0x1B, 0x3C4);
  FUNC_2(VAR_17, 0x3C5);
  FUNC_2(0x67, 0x3D4);
  FUNC_2(VAR_18, 0x3D5);
  FUNC_2(0x6A, 0x3D4);
  FUNC_2(VAR_19, 0x3D5);
  break;
 case 16:
  if (VAR_10 > 17)
   return 0;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   ((u32 *) VAR_9->pseudo_palette)[VAR_11] =
       (*(VAR_12 + VAR_11) & 0xF800) |
       ((*(VAR_13 + VAR_11) & 0xFC00) >> 5) |
       ((*(VAR_14 + VAR_11) & 0xF800) >> 11);
  break;
 case 32:
  if (VAR_10 > 17)
   return 0;
  if (VAR_15) {
   for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    ((u32 *) VAR_9->pseudo_palette)[VAR_11] =
        ((*(VAR_15 + VAR_11) & 0xFF00) << 16) |
        ((*(VAR_12 + VAR_11) & 0xFF00) << 8) |
        ((*(VAR_13 + VAR_11) & 0xFF00)) |
        ((*(VAR_14 + VAR_11) & 0xFF00) >> 8);
  } else {
   for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    ((u32 *) VAR_9->pseudo_palette)[VAR_11] =
        0x00000000 |
        ((*(VAR_12 + VAR_11) & 0xFF00) << 8) |
        ((*(VAR_13 + VAR_11) & 0xFF00)) |
        ((*(VAR_14 + VAR_11) & 0xFF00) >> 8);
  }
  break;
 }
 return 0;
}
