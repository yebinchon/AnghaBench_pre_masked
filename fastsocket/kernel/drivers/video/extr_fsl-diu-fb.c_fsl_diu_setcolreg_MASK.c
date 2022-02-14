
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_11__ {unsigned int offset; int length; } ;
struct TYPE_10__ {unsigned int offset; int length; } ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_12__ {TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_7__ {int visual; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_6__ var; TYPE_1__ fix; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;




__attribute__((used)) static int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4, struct fb_info *VAR_5)
{
 int VAR_6 = 1;





 if (VAR_5->var.grayscale)
  VAR_1 = VAR_2 = VAR_3 = (19595 * VAR_1 + 38470 * VAR_2 +
          7471 * VAR_3) >> 16;
 switch (VAR_5->fix.visual) {
 case 128:




  if (VAR_0 < 16) {
   u32 *VAR_7 = VAR_5->pseudo_palette;
   u32 VAR_8;

   VAR_1 = FUNC_0(VAR_1, VAR_5->var.red.length);
   VAR_2 = FUNC_0(VAR_2, VAR_5->var.green.length);
   VAR_3 = FUNC_0(VAR_3, VAR_5->var.blue.length);
   VAR_4 = FUNC_0(VAR_4, VAR_5->var.transp.length);

   VAR_8 = (VAR_1 << VAR_5->var.red.offset) |
       (VAR_2 << VAR_5->var.green.offset) |
       (VAR_3 << VAR_5->var.blue.offset) |
       (VAR_4 << VAR_5->var.transp.offset);

   VAR_7[VAR_0] = VAR_8;
   VAR_6 = 0;
  }
  break;
 case 129:
 case 130:
  break;
 }

 return VAR_6;
}
