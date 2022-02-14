
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_update_window {int x; int y; int width; int height; int out_x; int out_y; int out_width; int out_height; int format; } ;
struct list_head {int dummy; } ;
struct blizzard_request {int dummy; } ;
struct TYPE_4__ {int max_transmit_size; TYPE_1__* plane; } ;
struct TYPE_3__ {int bpp; } ;


 int FUNC_0 (int,unsigned int,int,unsigned int,int,unsigned int,int,unsigned int) ;

 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3,
       struct omapfb_update_window *VAR_4,
       struct list_head *VAR_5)
{
 struct blizzard_request *VAR_6;
 int VAR_7 = VAR_4->x;
 int VAR_8 = VAR_4->y;
 int VAR_9 = VAR_4->width;
 int VAR_10 = VAR_4->height;
 int VAR_11 = VAR_4->out_x;
 int VAR_12 = VAR_4->out_y;
 int VAR_13 = VAR_4->out_width;
 int VAR_14 = VAR_4->out_height;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 unsigned int VAR_18 = VAR_8;
 unsigned int VAR_19 = VAR_10;
 unsigned int VAR_20 = VAR_12;
 unsigned int VAR_21 = VAR_14;

 VAR_17 = VAR_4->format & ~VAR_1;
 VAR_15 = VAR_4->format & VAR_1;
 switch (VAR_15) {
 case 128:

  VAR_16 = 12;

  VAR_7 &= ~1;
  VAR_8 &= ~1;
  VAR_10 = VAR_19 = VAR_10 & ~1;
  VAR_9 = VAR_9 & ~3;
  break;
 default:

  VAR_16 = VAR_2.plane[VAR_3].bpp;
  break;
 }
 if (VAR_9 * VAR_10 * VAR_16 / 8 > VAR_2.max_transmit_size) {
  VAR_19 = VAR_2.max_transmit_size / (VAR_9 * VAR_16 / 8);
  VAR_21 = VAR_19 * VAR_14 / VAR_10;
  FUNC_0(VAR_7, VAR_18, VAR_9, VAR_19, VAR_11, VAR_20,
    VAR_13, VAR_21);
  VAR_18 += VAR_19;
  VAR_20 += VAR_21;
  VAR_19 = VAR_10 - VAR_19;
  VAR_21 = VAR_14 - VAR_21;
  VAR_17 &= ~VAR_0;
 }

 FUNC_0(VAR_7, VAR_18, VAR_9, VAR_19, VAR_11, VAR_20,
   VAR_13, VAR_21);
}
