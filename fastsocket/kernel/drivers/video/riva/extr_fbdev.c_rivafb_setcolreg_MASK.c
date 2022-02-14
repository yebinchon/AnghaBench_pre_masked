
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct TYPE_13__ {scalar_t__ Architecture; } ;
struct riva_par {unsigned int* palette; TYPE_5__ riva; } ;
struct TYPE_12__ {unsigned int offset; int length; } ;
struct TYPE_11__ {unsigned int offset; } ;
struct TYPE_10__ {unsigned int offset; } ;
struct TYPE_14__ {int bits_per_pixel; TYPE_4__ green; TYPE_3__ blue; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_9__ {scalar_t__ visual; } ;
struct fb_info {TYPE_8__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; struct riva_par* par; } ;
typedef TYPE_5__ RIVA_HW_INST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_5__*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (TYPE_5__*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
     unsigned VAR_6, unsigned VAR_7,
     struct fb_info *VAR_8)
{
 struct riva_par *VAR_9 = VAR_8->par;
 RIVA_HW_INST *VAR_10 = &VAR_9->riva;
 int VAR_11;

 if (VAR_3 >= FUNC_0(&VAR_8->var))
   return -VAR_0;

 if (VAR_8->var.grayscale) {

  VAR_4 = VAR_5 = VAR_6 =
      (VAR_4 * 77 + VAR_5 * 151 + VAR_6 * 28) >> 8;
 }

 if (VAR_3 < 16 && VAR_8->fix.visual == VAR_1) {
  ((u32 *) VAR_8->pseudo_palette)[VAR_3] =
   (VAR_3 << VAR_8->var.red.offset) |
   (VAR_3 << VAR_8->var.green.offset) |
   (VAR_3 << VAR_8->var.blue.offset);




  if (VAR_9->riva.Architecture == VAR_2) {
   switch (VAR_8->var.bits_per_pixel) {
   case 16:
    VAR_9->palette[VAR_3] = ((VAR_4 & 0xf800) >> 1) |
     ((VAR_5 & 0xf800) >> 6) |
     ((VAR_6 & 0xf800) >> 11);
    break;
   case 32:
    VAR_9->palette[VAR_3] = ((VAR_4 & 0xff00) << 8) |
     ((VAR_5 & 0xff00)) |
     ((VAR_6 & 0xff00) >> 8);
    break;
   }
  }
 }

 switch (VAR_8->var.bits_per_pixel) {
 case 8:

  FUNC_2(VAR_10, VAR_3, VAR_4 >> 8, VAR_5 >> 8, VAR_6 >> 8);
  break;
 case 16:
  if (VAR_8->var.green.length == 5) {
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
    FUNC_2(VAR_10, VAR_3*8+VAR_11, VAR_4 >> 8,
        VAR_5 >> 8, VAR_6 >> 8);
   }
  } else {
   u8 VAR_12, VAR_13, VAR_14;

   if (VAR_3 < 32) {
    for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
     FUNC_2(VAR_10, VAR_3*8+VAR_11,
         VAR_4 >> 8, VAR_5 >> 8,
         VAR_6 >> 8);
    }
   }
   FUNC_1(VAR_10, VAR_3*4, &VAR_12, &VAR_13, &VAR_14);
   for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
    FUNC_2(VAR_10, VAR_3*4+VAR_11, VAR_12,
        VAR_5 >> 8, VAR_14);
  }
  break;
 case 32:
  FUNC_2(VAR_10, VAR_3, VAR_4 >> 8, VAR_5 >> 8, VAR_6 >> 8);
  break;
 default:

  break;
 }
 return 0;
}
