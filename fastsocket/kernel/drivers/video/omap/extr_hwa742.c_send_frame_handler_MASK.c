
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


struct update_param {int x; int y; int width; int height; int color_mode; int flags; } ;
struct TYPE_9__ {struct update_param update; } ;
struct hwa742_request {TYPE_3__ par; } ;
struct TYPE_12__ {int prev_flags; int prev_color_mode; TYPE_5__* extif; TYPE_4__* int_ctrl; TYPE_2__* fbdev; } ;
struct TYPE_11__ {int (* transfer_area ) (int,int,int ,struct hwa742_request*) ;int (* set_bits_per_cycle ) (int) ;} ;
struct TYPE_10__ {int (* enable_plane ) (int ,int) ;int (* setup_plane ) (int ,int ,unsigned long,int,int ,int ,int,int,int) ;} ;
struct TYPE_8__ {int dev; TYPE_1__* panel; } ;
struct TYPE_7__ {int x_res; int y_res; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int,int,int) ;
 TYPE_6__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int ,int ,unsigned long,int,int ,int ,int,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int,int ,struct hwa742_request*) ;

__attribute__((used)) static int FUNC_9(struct hwa742_request *VAR_8)
{
 struct update_param *VAR_9 = &VAR_8->par.update;
 int VAR_10 = VAR_9->x;
 int VAR_11 = VAR_9->y;
 int VAR_12 = VAR_9->width;
 int VAR_13 = VAR_9->height;
 int VAR_14;
 int VAR_15, VAR_16;
 unsigned long VAR_17;
 int VAR_18 = VAR_9->color_mode;
 int VAR_19 = VAR_9->flags;
 int VAR_20 = VAR_6->panel->x_res;
 int VAR_21 = VAR_6->panel->y_res;







 switch (VAR_18) {
 case 128:
  VAR_14 = 16;
  VAR_15 = 0x08;
  VAR_16 = 0x25;
  break;
 case 129:
  VAR_14 = 12;
  VAR_15 = 0x09;
  VAR_16 = 0x25;
  break;
 case 130:
  VAR_14 = 16;
  VAR_15 = 0x01;
  VAR_16 = 0x05;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6 != VAR_19 ||
     VAR_6 != VAR_18) {
  FUNC_3(VAR_15, VAR_16, VAR_19);
  VAR_6 = VAR_18;
  VAR_6 = VAR_19;
 }
 VAR_19 = VAR_8->par.update.flags;
 if (VAR_19 & VAR_3)
  FUNC_2(VAR_11, VAR_20, VAR_13, VAR_21,
    VAR_19 & VAR_2);
 else
  FUNC_1();

 FUNC_4(VAR_10, VAR_11, VAR_10 + VAR_12, VAR_11 + VAR_13);

 VAR_17 = (VAR_20 * VAR_11 + VAR_10) * VAR_14 / 8;

 VAR_6->setup_plane(VAR_4,
   VAR_1, VAR_17, VAR_20, 0, 0, VAR_12, VAR_13,
   VAR_18);

 VAR_6->set_bits_per_cycle(16);

 VAR_6->enable_plane(VAR_4, 1);
 VAR_6->transfer_area(VAR_12, VAR_13, VAR_7, VAR_8);

 return VAR_5;
}
