
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
struct TYPE_8__ {int length; } ;
struct TYPE_12__ {int bits_per_pixel; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; TYPE_2__ transp; } ;
struct TYPE_7__ {unsigned int len; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_6__ var; TYPE_1__ cmap; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      struct fb_info *VAR_5)
{
 u32 VAR_6;

 if (VAR_0 > VAR_5->cmap.len)
  return 1;


 VAR_1 = ((((VAR_1)<<(VAR_5->var.red.length))+0x7FFF-(VAR_1))>>16);
 VAR_2 = ((((VAR_2)<<(VAR_5->var.green.length))+0x7FFF-(VAR_2))>>16);
 VAR_3 = ((((VAR_3)<<(VAR_5->var.blue.length))+0x7FFF-(VAR_3))>>16);
 VAR_4 = ((((VAR_4)<<(VAR_5->var.transp.length))+0x7FFF-(VAR_4))>>16);


 VAR_6 = (VAR_1 << VAR_5->var.red.offset) |
     (VAR_2 << VAR_5->var.green.offset) |
     (VAR_3 << VAR_5->var.blue.offset);

 switch (VAR_5->var.bits_per_pixel) {
 case 16:
 case 24:
 case 32:
  ((u32 *)VAR_5->pseudo_palette)[VAR_0] = VAR_6;
  break;
 }

 return 0;
}
