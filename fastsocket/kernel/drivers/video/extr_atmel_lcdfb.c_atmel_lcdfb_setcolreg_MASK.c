
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_3__ {int visual; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_2__ var; TYPE_1__ fix; struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_info {int dummy; } ;


 int FUNC_0 (unsigned int) ;



 unsigned int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (struct atmel_lcdfb_info*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, struct fb_info *VAR_5)
{
 struct atmel_lcdfb_info *VAR_6 = VAR_5->par;
 unsigned int VAR_7;
 u32 *VAR_8;
 int VAR_9 = 1;

 if (VAR_5->var.grayscale)
  VAR_1 = VAR_2 = VAR_3 = (19595 * VAR_1 + 38470 * VAR_2
          + 7471 * VAR_3) >> 16;

 switch (VAR_5->fix.visual) {
 case 128:
  if (VAR_0 < 16) {
   VAR_8 = VAR_5->pseudo_palette;

   VAR_7 = FUNC_1(VAR_1, &VAR_5->var.red);
   VAR_7 |= FUNC_1(VAR_2, &VAR_5->var.green);
   VAR_7 |= FUNC_1(VAR_3, &VAR_5->var.blue);

   VAR_8[VAR_0] = VAR_7;
   VAR_9 = 0;
  }
  break;

 case 129:
  if (VAR_0 < 256) {
   VAR_7 = ((VAR_1 >> 11) & 0x001f);
   VAR_7 |= ((VAR_2 >> 6) & 0x03e0);
   VAR_7 |= ((VAR_3 >> 1) & 0x7c00);






   FUNC_2(VAR_6, FUNC_0(VAR_0), VAR_7);
   VAR_9 = 0;
  }
  break;

 case 130:
  if (VAR_0 < 2) {
   VAR_7 = (VAR_0 == 0) ? 0x00 : 0x1F;
   FUNC_2(VAR_6, FUNC_0(VAR_0), VAR_7);
   VAR_9 = 0;
  }
  break;

 }

 return VAR_9;
}
