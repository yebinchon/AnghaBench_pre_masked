
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int xpanstep; int ypanstep; int line_length; scalar_t__ type_aux; int accel; scalar_t__ ywrapstep; scalar_t__ mmio_len; scalar_t__ mmio_start; int visual; int type; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct fb_info *VAR_4, uint32_t VAR_5,
       uint32_t VAR_6)
{
 VAR_4->fix.type = VAR_1;
 VAR_4->fix.visual = VAR_6 == 8 ? VAR_2 :
  VAR_3;
 VAR_4->fix.mmio_start = 0;
 VAR_4->fix.mmio_len = 0;
 VAR_4->fix.type_aux = 0;
 VAR_4->fix.xpanstep = 1;
 VAR_4->fix.ypanstep = 1;
 VAR_4->fix.ywrapstep = 0;
 VAR_4->fix.accel = VAR_0;
 VAR_4->fix.type_aux = 0;

 VAR_4->fix.line_length = VAR_5;
 return;
}
