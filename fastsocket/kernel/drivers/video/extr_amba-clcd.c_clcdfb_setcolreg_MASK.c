
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct fb_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ visual; } ;
struct TYPE_4__ {int red; int green; int blue; int transp; } ;
struct TYPE_6__ {TYPE_2__ fix; TYPE_1__ var; } ;
struct clcd_fb {int* cmap; int clcd_cntl; scalar_t__ regs; TYPE_3__ fb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct clcd_fb* FUNC_2 (struct fb_info*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, unsigned int VAR_7, struct fb_info *VAR_8)
{
 struct clcd_fb *VAR_9 = FUNC_2(VAR_8);

 if (VAR_3 < 16)
  VAR_9->cmap[VAR_3] = FUNC_0(VAR_7, &VAR_9->fb.var.transp) |
      FUNC_0(VAR_6, &VAR_9->fb.var.blue) |
      FUNC_0(VAR_5, &VAR_9->fb.var.green) |
      FUNC_0(VAR_4, &VAR_9->fb.var.red);

 if (VAR_9->fb.fix.visual == VAR_2 && VAR_3 < 256) {
  int VAR_10 = VAR_0 + ((VAR_3 * 2) & ~3);
  u32 VAR_11, VAR_12, VAR_13;

  VAR_13 = (VAR_4 >> 11) & 0x001f;
  VAR_13 |= (VAR_5 >> 6) & 0x03e0;
  VAR_13 |= (VAR_6 >> 1) & 0x7c00;





  if (VAR_9->clcd_cntl & VAR_1)
   VAR_3 ^= 1;

  if (VAR_3 & 1) {
   VAR_13 <<= 16;
   VAR_12 = 0x0000ffff;
  } else {
   VAR_12 = 0xffff0000;
  }

  VAR_11 = FUNC_1(VAR_9->regs + VAR_10) & VAR_12;
  FUNC_3(VAR_11 | VAR_13, VAR_9->regs + VAR_10);
 }

 return VAR_3 > 255;
}
