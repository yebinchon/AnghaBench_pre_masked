
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mb862xxfb_par {unsigned int* pseudo_palette; } ;
struct TYPE_4__ {int blue; int green; int red; } ;
struct TYPE_3__ {int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct mb862xxfb_par* par; } ;




 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_2,
          unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
          unsigned VAR_6, struct fb_info *VAR_7)
{
 struct mb862xxfb_par *VAR_8 = VAR_7->par;
 unsigned int VAR_9;

 switch (VAR_7->fix.visual) {
 case 128:
  if (VAR_2 < 16) {
   VAR_9 = FUNC_0(VAR_3, &VAR_7->var.red);
   VAR_9 |= FUNC_0(VAR_4, &VAR_7->var.green);
   VAR_9 |= FUNC_0(VAR_5, &VAR_7->var.blue);
   VAR_8->pseudo_palette[VAR_2] = VAR_9;
  }
  break;
 case 129:
  if (VAR_2 < 256) {
   VAR_9 = (VAR_3 >> 8) << 16;
   VAR_9 |= (VAR_4 >> 8) << 8;
   VAR_9 |= VAR_5 >> 8;
   FUNC_1(VAR_1, VAR_0 + (VAR_2 * 4), VAR_9);
  }
  break;
 default:
  return 1;
 }
 return 0;
}
