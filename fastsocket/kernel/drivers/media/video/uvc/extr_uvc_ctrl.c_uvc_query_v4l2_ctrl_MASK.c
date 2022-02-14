
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int type; unsigned int default_value; unsigned int minimum; int maximum; int step; int flags; int name; int id; } ;
struct uvc_video_chain {int ctrl_mutex; } ;
struct uvc_menu_info {unsigned int value; } ;
struct uvc_control_mapping {int v4l2_type; unsigned int (* get ) (struct uvc_control_mapping*,int ,int ) ;unsigned int menu_count; struct uvc_menu_info* menu_info; int name; int id; } ;
struct TYPE_2__ {int flags; } ;
struct uvc_control {TYPE_1__ info; int cached; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int FUNC_0 (struct v4l2_queryctrl*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 unsigned int FUNC_4 (struct uvc_control_mapping*,int ,int ) ;
 unsigned int FUNC_5 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_6 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_7 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_8 (struct uvc_control*,int ) ;
 int FUNC_9 (struct uvc_video_chain*,struct uvc_control*) ;
 struct uvc_control* FUNC_10 (struct uvc_video_chain*,int ,struct uvc_control_mapping**) ;

int FUNC_11(struct uvc_video_chain *VAR_18,
 struct v4l2_queryctrl *VAR_19)
{
 struct uvc_control *VAR_20;
 struct uvc_control_mapping *VAR_21;
 struct uvc_menu_info *VAR_22;
 unsigned int VAR_23;
 int VAR_24;

 VAR_24 = FUNC_1(&VAR_18->ctrl_mutex);
 if (VAR_24 < 0)
  return -VAR_1;

 VAR_20 = FUNC_10(VAR_18, VAR_19->id, &VAR_21);
 if (VAR_20 == ((void*)0)) {
  VAR_24 = -VAR_0;
  goto done;
 }

 FUNC_0(VAR_19, 0, sizeof *VAR_19);
 VAR_19->id = VAR_21->id;
 VAR_19->type = VAR_21->v4l2_type;
 FUNC_3(VAR_19->name, VAR_21->name, sizeof VAR_19->name);
 VAR_19->flags = 0;

 if (!(VAR_20->info.flags & VAR_2))
  VAR_19->flags |= VAR_17;
 if (!(VAR_20->info.flags & VAR_7))
  VAR_19->flags |= VAR_16;

 if (!VAR_20->cached) {
  VAR_24 = FUNC_9(VAR_18, VAR_20);
  if (VAR_24 < 0)
   goto done;
 }

 if (VAR_20->info.flags & VAR_3) {
  VAR_19->default_value = VAR_21->get(VAR_21, VAR_12,
    FUNC_8(VAR_20, VAR_8));
 }

 switch (VAR_21->v4l2_type) {
 case 128:
  VAR_19->minimum = 0;
  VAR_19->maximum = VAR_21->menu_count - 1;
  VAR_19->step = 1;

  VAR_22 = VAR_21->menu_info;
  for (VAR_23 = 0; VAR_23 < VAR_21->menu_count; ++VAR_23, ++VAR_22) {
   if (VAR_22->value == VAR_19->default_value) {
    VAR_19->default_value = VAR_23;
    break;
   }
  }

  goto done;

 case 130:
  VAR_19->minimum = 0;
  VAR_19->maximum = 1;
  VAR_19->step = 1;
  goto done;

 case 129:
  VAR_19->minimum = 0;
  VAR_19->maximum = 0;
  VAR_19->step = 0;
  goto done;

 default:
  break;
 }

 if (VAR_20->info.flags & VAR_5)
  VAR_19->minimum = VAR_21->get(VAR_21, VAR_14,
         FUNC_8(VAR_20, VAR_10));

 if (VAR_20->info.flags & VAR_4)
  VAR_19->maximum = VAR_21->get(VAR_21, VAR_13,
         FUNC_8(VAR_20, VAR_9));

 if (VAR_20->info.flags & VAR_6)
  VAR_19->step = VAR_21->get(VAR_21, VAR_15,
      FUNC_8(VAR_20, VAR_11));

done:
 FUNC_2(&VAR_18->ctrl_mutex);
 return VAR_24;
}
