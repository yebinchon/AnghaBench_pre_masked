
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct plane_info {int bpp; unsigned long offset; int pos_x; int pos_y; int width; int height; int scr_width; int out_width; int out_height; int color_mode; } ;
struct TYPE_4__ {int vid_nonstd_color; struct plane_info* plane; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int,unsigned long,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4,
      unsigned long VAR_5, int VAR_6,
      int VAR_7, int VAR_8, int VAR_9, int VAR_10,
      int VAR_11)
{
 struct plane_info *VAR_12;
 if ((unsigned)VAR_3 > VAR_1)
  return -VAR_0;
 VAR_12 = &VAR_2.plane[VAR_3];

 switch (VAR_11) {
 case 129:
 case 128:
  VAR_12->bpp = 16;
  VAR_2.vid_nonstd_color &= ~(1 << VAR_3);
  break;
 case 130:
  VAR_12->bpp = 12;
  VAR_2.vid_nonstd_color |= 1 << VAR_3;
  break;
 case 131:
  VAR_12->bpp = 16;
  VAR_2.vid_nonstd_color &= ~(1 << VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_12->offset = VAR_5;
 VAR_12->pos_x = VAR_7;
 VAR_12->pos_y = VAR_8;
 VAR_12->width = VAR_9;
 VAR_12->height = VAR_10;
 VAR_12->scr_width = VAR_6;
 if (!VAR_12->out_width)
  VAR_12->out_width = VAR_9;
 if (!VAR_12->out_height)
  VAR_12->out_height = VAR_10;

 VAR_12->color_mode = VAR_11;

 return 0;
}
