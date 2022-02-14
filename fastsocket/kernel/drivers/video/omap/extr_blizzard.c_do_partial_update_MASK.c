
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


struct plane_info {int pos_x; int pos_y; int width; int height; int offset; int scr_width; int bpp; int color_mode; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ update; } ;
struct blizzard_request {TYPE_4__ par; } ;
struct TYPE_12__ {int enabled_planes; int last_color_mode; int screen_height; int zoom_on; int screen_width; int zoom_area_gx1; int zoom_area_gx2; int zoom_area_gy1; int zoom_area_gy2; TYPE_2__* extif; TYPE_5__* int_ctrl; TYPE_1__* fbdev; struct plane_info* plane; } ;
struct TYPE_11__ {int (* enable_plane ) (int,int) ;int (* setup_plane ) (int,int ,unsigned long,int,int,int,int,int,int ) ;} ;
struct TYPE_8__ {int (* transfer_area ) (int,int,int ,struct blizzard_request*) ;int (* set_bits_per_cycle ) (int) ;} ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,char*,int,unsigned long,int,int,int,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int,int,int,int) ;
 int VAR_9 ;
 int FUNC_6 (int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ,unsigned long,int,int,int,int,int,int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,int ,struct blizzard_request*) ;

__attribute__((used)) static int FUNC_13(struct blizzard_request *VAR_10, int VAR_11,
        int VAR_12, int VAR_13, int VAR_14, int VAR_15,
        int VAR_16, int VAR_17, int VAR_18, int VAR_19,
        int VAR_20, int VAR_21)
{
 int VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34 = 0;


 VAR_23 = VAR_12 + VAR_8.plane[VAR_11].pos_x;
 VAR_24 = VAR_13 + VAR_8.plane[VAR_11].pos_y;
 VAR_25 = VAR_23 + VAR_14;
 VAR_26 = VAR_24 + VAR_15;

 VAR_32 = VAR_10->par.update.flags;
 if (VAR_32 & VAR_3) {
  VAR_27 = VAR_23;
  VAR_28 = VAR_24;
  VAR_29 = VAR_23 + VAR_14 * 2;
  VAR_30 = VAR_24 + VAR_15 * 2;
 } else {
  VAR_27 = VAR_16 + VAR_8.plane[VAR_11].pos_x;
  VAR_28 = VAR_17 + VAR_8.plane[VAR_11].pos_y;
  VAR_29 = VAR_27 + VAR_18;
  VAR_30 = VAR_28 + VAR_19;
 }

 for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
  struct plane_info *VAR_35 = &VAR_8.plane[VAR_22];
  int VAR_36, VAR_37;
  int VAR_38, VAR_39;
  int VAR_40, VAR_41;
  int VAR_42, VAR_43;
  unsigned long VAR_44;

  if (!(VAR_8.enabled_planes & (1 << VAR_22)) ||
      (VAR_20 && VAR_22 != VAR_11)) {
   VAR_8.int_ctrl->enable_plane(VAR_22, 0);
   continue;
  }

  if (VAR_22 == VAR_11) {




   VAR_36 = VAR_12;
   VAR_37 = VAR_13;
   VAR_38 = VAR_12 + VAR_14;
   VAR_39 = VAR_13 + VAR_15;
   VAR_42 = 0;
   VAR_43 = 0;
  } else {

   VAR_36 = VAR_23 - VAR_35->pos_x;
   VAR_37 = VAR_24 - VAR_35->pos_y;
   VAR_38 = VAR_25 - VAR_35->pos_x;
   VAR_39 = VAR_26 - VAR_35->pos_y;
   if (VAR_36 >= VAR_35->width || VAR_37 >= VAR_35->height ||
       VAR_38 <= 0 || VAR_39 <= 0) {
    VAR_8.int_ctrl->enable_plane(VAR_22, 0);
    continue;
   }



   VAR_42 = -VAR_36;
   VAR_43 = -VAR_37;
   if (VAR_36 < 0)
    VAR_36 = 0;
   if (VAR_37 < 0)
    VAR_37 = 0;
   if (VAR_38 > VAR_35->width)
    VAR_38 = VAR_35->width;
   if (VAR_39 > VAR_35->height)
    VAR_39 = VAR_35->height;
   if (VAR_42 < 0)
    VAR_42 = 0;
   if (VAR_43 < 0)
    VAR_43 = 0;
  }
  VAR_40 = VAR_38 - VAR_36;
  VAR_41 = VAR_39 - VAR_37;
  VAR_44 = VAR_35->offset + (VAR_35->scr_width * VAR_37 + VAR_36) * VAR_35->bpp / 8;
  if (VAR_20)




   VAR_40 = (VAR_40 + 1) * VAR_21 / VAR_35->bpp;






  VAR_8.int_ctrl->setup_plane(VAR_22,
    VAR_2, VAR_44,
    VAR_35->scr_width,
    VAR_42, VAR_43, VAR_40, VAR_41,
    VAR_35->color_mode);

  VAR_8.int_ctrl->enable_plane(VAR_22, 1);
 }

 switch (VAR_20) {
 case 128:
  VAR_31 = VAR_1;




  VAR_14 = (VAR_14 + 1) * 3 / 4;
  break;
 default:
  VAR_31 = VAR_0;
  break;
 }

 FUNC_0();
 if (VAR_8.last_color_mode == VAR_1)
  FUNC_1();
 VAR_8.last_color_mode = VAR_31;
 if (VAR_32 & VAR_5)
  FUNC_5(VAR_24, VAR_14, VAR_15,
    VAR_8.screen_height,
    VAR_19,
    VAR_32 & VAR_4);
 else
  FUNC_4();

 if ((VAR_29 - VAR_27) != (VAR_25 - VAR_23) ||
     (VAR_30 - VAR_28) != (VAR_26 - VAR_24))
  VAR_34 = 1;



 VAR_33 = VAR_8.zoom_on && !VAR_34 &&
     (VAR_27 == 0) && (VAR_29 == VAR_8.screen_width) &&
     (VAR_28 == 0) && (VAR_30 == VAR_8.screen_height) &&
     (VAR_23 == 0) && (VAR_24 == 0);

 if (VAR_8.zoom_on && !VAR_34 && !VAR_33 &&
     FUNC_2(VAR_8.zoom_area_gx1, VAR_8.zoom_area_gx2,
          VAR_27, VAR_29) &&
     FUNC_2(VAR_8.zoom_area_gy1, VAR_8.zoom_area_gy2,
          VAR_28, VAR_30)) {






  FUNC_6(0, 0, VAR_8.screen_width,
    VAR_8.screen_height,
    0, 0, VAR_8.screen_width,
    VAR_8.screen_height,
    VAR_0, 1, VAR_32);
  VAR_8.zoom_on = 0;
 }


 if (VAR_34) {
  VAR_8.zoom_on = 1;
  VAR_8.zoom_area_gx1 = VAR_27;
  VAR_8.zoom_area_gx2 = VAR_29;
  VAR_8.zoom_area_gy1 = VAR_28;
  VAR_8.zoom_area_gy2 = VAR_30;
 }

 FUNC_6(VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30,
   VAR_31, VAR_33, VAR_32);
 if (VAR_33)
  VAR_8.zoom_on = 0;

 VAR_8.extif->set_bits_per_cycle(16);



 VAR_8.extif->transfer_area(VAR_14, VAR_15, VAR_9, VAR_10);

 return VAR_7;
}
