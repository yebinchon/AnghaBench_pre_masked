
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_5__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {TYPE_2__ transp; TYPE_1__ blue; TYPE_4__ green; TYPE_3__ red; } ;



__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 VAR_0->red.offset = 0;
 VAR_0->red.length = 8;
 VAR_0->green.offset = 8;
 VAR_0->green.length = 8;
 VAR_0->blue.offset = 16;
 VAR_0->blue.length = 8;
 VAR_0->transp.offset = 0;
 VAR_0->transp.length = 0;
}
