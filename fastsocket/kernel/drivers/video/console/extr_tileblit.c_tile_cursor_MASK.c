
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_cursor_type; int vc_y; int vc_x; } ;
struct fb_tilecursor {int mode; int fg; int bg; int shape; int sy; int sx; } ;
struct fb_info {TYPE_1__* tileops; } ;
struct TYPE_2__ {int (* fb_tilecursor ) (struct fb_info*,struct fb_tilecursor*) ;} ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fb_info*,struct fb_tilecursor*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_7, struct fb_info *VAR_8, int VAR_9,
   int VAR_10, int VAR_11, int VAR_12)
{
 struct fb_tilecursor VAR_13;
 int VAR_14 = (VAR_7->vc_cursor_type & 0x01);

 VAR_13.sx = VAR_7->vc_x;
 VAR_13.sy = VAR_7->vc_y;
 VAR_13.mode = (VAR_9 == VAR_0 || VAR_14) ? 0 : 1;
 VAR_13.fg = VAR_11;
 VAR_13.bg = VAR_12;

 switch (VAR_7->vc_cursor_type & 0x0f) {
 case 130:
  VAR_13.shape = VAR_4;
  break;
 case 128:
  VAR_13.shape = VAR_6;
  break;
 case 131:
  VAR_13.shape = VAR_3;
  break;
 case 132:
  VAR_13.shape = VAR_2;
  break;
 case 129:
  VAR_13.shape = VAR_5;
  break;
 case 133:
 default:
  VAR_13.shape = VAR_1;
  break;
 }

 VAR_8->tileops->fb_tilecursor(VAR_8, &VAR_13);
}
