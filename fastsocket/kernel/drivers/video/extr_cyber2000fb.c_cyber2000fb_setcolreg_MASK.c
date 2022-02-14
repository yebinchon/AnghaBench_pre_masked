
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_8__ {int length; int offset; } ;
struct fb_var_screeninfo {TYPE_4__ blue; TYPE_4__ green; TYPE_4__ red; TYPE_4__ transp; } ;
struct fb_info {int dummy; } ;
struct TYPE_5__ {int visual; } ;
struct TYPE_7__ {scalar_t__ pseudo_palette; TYPE_1__ fix; struct fb_var_screeninfo var; } ;
struct cfb_info {TYPE_3__ fb; TYPE_2__* palette; } ;
struct TYPE_6__ {int red; int green; int blue; } ;





 int VAR_0 ;
 int FUNC_0 (int,TYPE_4__*) ;
 int FUNC_1 (int,int,struct cfb_info*) ;

__attribute__((used)) static int
FUNC_2(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
        u_int VAR_5, struct fb_info *VAR_6)
{
 struct cfb_info *VAR_7 = (struct cfb_info *)VAR_6;
 struct fb_var_screeninfo *VAR_8 = &VAR_7->fb.var;
 u32 VAR_9;
 int VAR_10 = 1;

 switch (VAR_7->fb.fix.visual) {
 default:
  return 1;
 case 129:
  if (VAR_1 >= VAR_0)
   return 1;

  VAR_2 >>= 8;
  VAR_3 >>= 8;
  VAR_4 >>= 8;

  VAR_7->palette[VAR_1].red = VAR_2;
  VAR_7->palette[VAR_1].green = VAR_3;
  VAR_7->palette[VAR_1].blue = VAR_4;

  FUNC_1(VAR_1, 0x3c8, VAR_7);
  FUNC_1(VAR_2, 0x3c9, VAR_7);
  FUNC_1(VAR_3, 0x3c9, VAR_7);
  FUNC_1(VAR_4, 0x3c9, VAR_7);
  return 0;
 case 130:
  VAR_2 >>= 8;
  VAR_3 >>= 8;
  VAR_4 >>= 8;

  if (VAR_8->green.length == 6 && VAR_1 < 64) {
   VAR_7->palette[VAR_1 << 2].green = VAR_3;





   FUNC_1(VAR_1 << 2, 0x3c8, VAR_7);
   FUNC_1(VAR_7->palette[VAR_1 >> 1].red,
        0x3c9, VAR_7);
   FUNC_1(VAR_3, 0x3c9, VAR_7);
   FUNC_1(VAR_7->palette[VAR_1 >> 1].blue,
        0x3c9, VAR_7);

   VAR_3 = VAR_7->palette[VAR_1 << 3].green;

   VAR_10 = 0;
  }

  if (VAR_8->green.length >= 5 && VAR_1 < 32) {
   VAR_7->palette[VAR_1 << 3].red = VAR_2;
   VAR_7->palette[VAR_1 << 3].green = VAR_3;
   VAR_7->palette[VAR_1 << 3].blue = VAR_4;





   FUNC_1(VAR_1 << 3, 0x3c8, VAR_7);
   FUNC_1(VAR_2, 0x3c9, VAR_7);
   FUNC_1(VAR_3, 0x3c9, VAR_7);
   FUNC_1(VAR_4, 0x3c9, VAR_7);
   VAR_10 = 0;
  }

  if (VAR_8->green.length == 4 && VAR_1 < 16) {
   VAR_7->palette[VAR_1 << 4].red = VAR_2;
   VAR_7->palette[VAR_1 << 4].green = VAR_3;
   VAR_7->palette[VAR_1 << 4].blue = VAR_4;





   FUNC_1(VAR_1 << 4, 0x3c8, VAR_7);
   FUNC_1(VAR_2, 0x3c9, VAR_7);
   FUNC_1(VAR_3, 0x3c9, VAR_7);
   FUNC_1(VAR_4, 0x3c9, VAR_7);
   VAR_10 = 0;
  }





  VAR_9 = VAR_1 << VAR_8->red.offset |
        VAR_1 << VAR_8->green.offset |
        VAR_1 << VAR_8->blue.offset;
  break;
 case 128:
  VAR_9 = FUNC_0(VAR_5 ^ 0xffff, &VAR_8->transp);
  VAR_9 |= FUNC_0(VAR_2, &VAR_8->red);
  VAR_9 |= FUNC_0(VAR_3, &VAR_8->green);
  VAR_9 |= FUNC_0(VAR_4, &VAR_8->blue);
  break;
 }




 if (VAR_1 < 16)
  ((u32 *)VAR_7->fb.pseudo_palette)[VAR_1] = VAR_9;

 return VAR_10;
}
