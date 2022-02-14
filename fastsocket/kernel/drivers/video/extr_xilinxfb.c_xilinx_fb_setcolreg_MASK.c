
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {scalar_t__ grayscale; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_1__ var; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int
FUNC_0(unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8,
 unsigned VAR_9, struct fb_info *VAR_10)
{
 u32 *VAR_11 = VAR_10->pseudo_palette;

 if (VAR_5 >= VAR_3)
  return -VAR_1;

 if (VAR_10->var.grayscale) {


  VAR_6 = VAR_7 = VAR_8 =
   (VAR_6 * 77 + VAR_7 * 151 + VAR_8 * 28 + 127) >> 8;
 }




 VAR_6 >>= 8;
 VAR_7 >>= 8;
 VAR_8 >>= 8;
 VAR_11[VAR_5] = (VAR_6 << VAR_4) | (VAR_7 << VAR_2) |
    (VAR_8 << VAR_0);

 return 0;
}
