
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_5__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(u_int VAR_3, u_int VAR_4, u_int VAR_5,
       u_int VAR_6, u_int VAR_7,
       struct fb_info *VAR_8)
{
 if (VAR_3 >= VAR_0)
  return -VAR_1;

 if (VAR_8->var.grayscale) {

  VAR_4 = VAR_5 = VAR_6 = (VAR_4 * 77 + VAR_5 * 151 + VAR_6 * 28) >> 8;
 }

 if (VAR_8->fix.visual == VAR_2) {

  u32 VAR_9;

  if (VAR_3 > 16)
   return -VAR_1;

  VAR_4 >>= (16 - VAR_8->var.red.length);
  VAR_5 >>= (16 - VAR_8->var.green.length);
  VAR_6 >>= (16 - VAR_8->var.blue.length);

  VAR_9 = (VAR_4 << VAR_8->var.red.offset) |
      (VAR_5 << VAR_8->var.green.offset) |
      (VAR_6 << VAR_8->var.blue.offset);
  VAR_9 &= 0xFFFFFF;

  ((u32 *) (VAR_8->pseudo_palette))[VAR_3] = VAR_9;

 }

 return 0;
}
