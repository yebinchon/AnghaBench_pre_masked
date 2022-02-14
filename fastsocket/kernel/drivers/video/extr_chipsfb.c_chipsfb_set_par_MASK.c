
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {int line_length; int visual; } ;
struct fb_info {TYPE_5__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2)
{
 if (VAR_2->var.bits_per_pixel == 16) {
  FUNC_0(0x13, 200);
  FUNC_1(0x81, 0x14);
  FUNC_1(0x82, 0x00);
  FUNC_1(0x20, 0x10);

  VAR_2->fix.line_length = 800*2;
  VAR_2->fix.visual = VAR_1;

  VAR_2->var.red.offset = 10;
  VAR_2->var.green.offset = 5;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = VAR_2->var.green.length =
   VAR_2->var.blue.length = 5;

 } else {

  FUNC_0(0x13, 100);
  FUNC_1(0x81, 0x12);
  FUNC_1(0x82, 0x08);
  FUNC_1(0x20, 0x00);

  VAR_2->fix.line_length = 800;
  VAR_2->fix.visual = VAR_0;

   VAR_2->var.red.offset = VAR_2->var.green.offset =
   VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = VAR_2->var.green.length =
   VAR_2->var.blue.length = 8;

 }
 return 0;
}
