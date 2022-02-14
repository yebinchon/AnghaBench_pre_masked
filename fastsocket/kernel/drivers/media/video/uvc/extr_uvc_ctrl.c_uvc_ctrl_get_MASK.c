
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ext_control {unsigned int value; int id; } ;
struct uvc_video_chain {TYPE_3__* dev; } ;
struct uvc_menu_info {unsigned int value; } ;
struct uvc_control_mapping {unsigned int (* get ) (struct uvc_control_mapping*,int ,int ) ;scalar_t__ v4l2_type; unsigned int menu_count; struct uvc_menu_info* menu_info; } ;
struct TYPE_5__ {int flags; int size; int selector; } ;
struct uvc_control {int loaded; TYPE_2__ info; TYPE_1__* entity; } ;
struct TYPE_6__ {int intfnum; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_1 (struct uvc_control*,int ) ;
 struct uvc_control* FUNC_2 (struct uvc_video_chain*,int ,struct uvc_control_mapping**) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int ,int ,int ) ;

int FUNC_4(struct uvc_video_chain *VAR_5,
 struct v4l2_ext_control *VAR_6)
{
 struct uvc_control *VAR_7;
 struct uvc_control_mapping *VAR_8;
 struct uvc_menu_info *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_2(VAR_5, VAR_6->id, &VAR_8);
 if (VAR_7 == ((void*)0) || (VAR_7->info.flags & VAR_1) == 0)
  return -VAR_0;

 if (!VAR_7->loaded) {
  VAR_11 = FUNC_3(VAR_5->dev, VAR_3, VAR_7->entity->id,
    VAR_5->dev->intfnum, VAR_7->info.selector,
    FUNC_1(VAR_7, VAR_2),
    VAR_7->info.size);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_7->loaded = 1;
 }

 VAR_6->value = VAR_8->get(VAR_8, VAR_3,
  FUNC_1(VAR_7, VAR_2));

 if (VAR_8->v4l2_type == VAR_4) {
  VAR_9 = VAR_8->menu_info;
  for (VAR_10 = 0; VAR_10 < VAR_8->menu_count; ++VAR_10, ++VAR_9) {
   if (VAR_9->value == VAR_6->value) {
    VAR_6->value = VAR_10;
    break;
   }
  }
 }

 return 0;
}
