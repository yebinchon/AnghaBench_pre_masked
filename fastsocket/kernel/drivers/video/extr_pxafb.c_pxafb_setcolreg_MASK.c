
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef unsigned int u32 ;
struct TYPE_5__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_4__ {int visual; } ;
struct TYPE_6__ {unsigned int* pseudo_palette; TYPE_2__ var; TYPE_1__ fix; } ;
struct pxafb_info {TYPE_3__ fb; scalar_t__ cmap_inverse; } ;
struct fb_info {int dummy; } ;





 unsigned int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int,int,int,int,struct fb_info*) ;

__attribute__((used)) static int
FUNC_2(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
     u_int VAR_4, struct fb_info *VAR_5)
{
 struct pxafb_info *VAR_6 = (struct pxafb_info *)VAR_5;
 unsigned int VAR_7;
 int VAR_8 = 1;







 if (VAR_6->cmap_inverse) {
  VAR_1 = 0xffff - VAR_1;
  VAR_2 = 0xffff - VAR_2;
  VAR_3 = 0xffff - VAR_3;
 }





 if (VAR_6->fb.var.grayscale)
  VAR_1 = VAR_2 = VAR_3 = (19595 * VAR_1 + 38470 * VAR_2 +
     7471 * VAR_3) >> 16;

 switch (VAR_6->fb.fix.visual) {
 case 128:




  if (VAR_0 < 16) {
   u32 *VAR_9 = VAR_6->fb.pseudo_palette;

   VAR_7 = FUNC_0(VAR_1, &VAR_6->fb.var.red);
   VAR_7 |= FUNC_0(VAR_2, &VAR_6->fb.var.green);
   VAR_7 |= FUNC_0(VAR_3, &VAR_6->fb.var.blue);

   VAR_9[VAR_0] = VAR_7;
   VAR_8 = 0;
  }
  break;

 case 129:
 case 130:
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 }

 return VAR_8;
}
