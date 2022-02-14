
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_9__ {int visual; } ;
struct fb_info {TYPE_5__ var; TYPE_4__ fix; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct fb_info *VAR_1)
{
 VAR_1->fix.visual = VAR_0;
 VAR_1->var.bits_per_pixel = 16;

 VAR_1->var.red.length = 5;
 VAR_1->var.red.offset = 11;

 VAR_1->var.green.length = 6;
 VAR_1->var.green.offset = 5;

 VAR_1->var.blue.length = 5;
 VAR_1->var.blue.offset = 0;
}
