
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


struct TYPE_12__ {void* visual; } ;
struct TYPE_10__ {int length; int offset; } ;
struct TYPE_9__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_11__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; } ;
struct fb_info {TYPE_6__ fix; TYPE_5__ var; struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (struct ep93xx_fbi*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_13)
{
 struct ep93xx_fbi *VAR_14 = VAR_13->par;
 unsigned int VAR_15;

 VAR_13->var.transp.offset = 0;
 VAR_13->var.transp.length = 0;

 switch (VAR_13->var.bits_per_pixel) {
 case 8:
  VAR_15 = VAR_5 | VAR_8 |
   VAR_9;

  VAR_13->var.red.offset = 0;
  VAR_13->var.red.length = 8;
  VAR_13->var.green.offset = 0;
  VAR_13->var.green.length = 8;
  VAR_13->var.blue.offset = 0;
  VAR_13->var.blue.length = 8;
  VAR_13->fix.visual = VAR_11;
  break;

 case 16:
  VAR_15 = VAR_2 | VAR_6 |
   VAR_9;

  VAR_13->var.red.offset = 11;
  VAR_13->var.red.length = 5;
  VAR_13->var.green.offset = 5;
  VAR_13->var.green.length = 6;
  VAR_13->var.blue.offset = 0;
  VAR_13->var.blue.length = 5;
  VAR_13->fix.visual = VAR_12;
  break;

 case 24:
  VAR_15 = VAR_3 | VAR_7 |
   VAR_10;

  VAR_13->var.red.offset = 16;
  VAR_13->var.red.length = 8;
  VAR_13->var.green.offset = 8;
  VAR_13->var.green.length = 8;
  VAR_13->var.blue.offset = 0;
  VAR_13->var.blue.length = 8;
  VAR_13->fix.visual = VAR_12;
  break;

 case 32:
  VAR_15 = VAR_4 | VAR_7 |
   VAR_10;

  VAR_13->var.red.offset = 16;
  VAR_13->var.red.length = 8;
  VAR_13->var.green.offset = 8;
  VAR_13->var.green.length = 8;
  VAR_13->var.blue.offset = 0;
  VAR_13->var.blue.length = 8;
  VAR_13->fix.visual = VAR_12;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_14, VAR_15, VAR_1);
 return 0;
}
