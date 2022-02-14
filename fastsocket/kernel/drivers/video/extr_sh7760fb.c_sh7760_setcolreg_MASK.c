
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
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int* pseudo_palette; TYPE_5__ var; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (u_int VAR_1,
 u_int VAR_2, u_int VAR_3, u_int VAR_4,
 u_int VAR_5, struct fb_info *VAR_6)
{
 u32 *VAR_7 = VAR_6->pseudo_palette;

 if (VAR_1 >= 16)
  return -VAR_0;



 VAR_2 >>= 16 - VAR_6->var.red.length;
 VAR_3 >>= 16 - VAR_6->var.green.length;
 VAR_4 >>= 16 - VAR_6->var.blue.length;
 VAR_5 >>= 16 - VAR_6->var.transp.length;

 VAR_7[VAR_1] = (VAR_2 << VAR_6->var.red.offset) |
  (VAR_3 << VAR_6->var.green.offset) |
  (VAR_4 << VAR_6->var.blue.offset) |
  (VAR_5 << VAR_6->var.transp.offset);

 return 0;
}
