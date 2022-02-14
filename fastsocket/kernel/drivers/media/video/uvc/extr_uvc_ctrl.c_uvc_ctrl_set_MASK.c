
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ext_control {int value; int id; } ;
struct uvc_video_chain {TYPE_4__* dev; } ;
struct uvc_control_mapping {int v4l2_type; int (* get ) (struct uvc_control_mapping*,int ,int ) ;int menu_count; int size; int (* set ) (struct uvc_control_mapping*,int,int ) ;TYPE_1__* menu_info; } ;
struct TYPE_7__ {int flags; int size; int selector; } ;
struct uvc_control {int loaded; int dirty; int modified; TYPE_3__ info; TYPE_2__* entity; int cached; } ;
typedef int s32 ;
struct TYPE_8__ {int intfnum; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int value; } ;


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



 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_4 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_5 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_6 (struct uvc_control_mapping*,int,int ) ;
 int FUNC_7 (struct uvc_control*,int ) ;
 int FUNC_8 (struct uvc_video_chain*,struct uvc_control*) ;
 struct uvc_control* FUNC_9 (struct uvc_video_chain*,int ,struct uvc_control_mapping**) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ,int ,int ,int) ;

int FUNC_11(struct uvc_video_chain *VAR_13,
 struct v4l2_ext_control *VAR_14)
{
 struct uvc_control *VAR_15;
 struct uvc_control_mapping *VAR_16;
 s32 VAR_17;
 u32 VAR_18;
 s32 VAR_19;
 s32 VAR_20;
 int VAR_21;

 VAR_15 = FUNC_9(VAR_13, VAR_14->id, &VAR_16);
 if (VAR_15 == ((void*)0) || (VAR_15->info.flags & VAR_3) == 0)
  return -VAR_0;


 switch (VAR_16->v4l2_type) {
 case 129:
  if (!VAR_15->cached) {
   VAR_21 = FUNC_8(VAR_13, VAR_15);
   if (VAR_21 < 0)
    return VAR_21;
  }

  VAR_19 = VAR_16->get(VAR_16, VAR_11,
       FUNC_7(VAR_15, VAR_7));
  VAR_20 = VAR_16->get(VAR_16, VAR_10,
       FUNC_7(VAR_15, VAR_6));
  VAR_18 = VAR_16->get(VAR_16, VAR_12,
        FUNC_7(VAR_15, VAR_8));
  if (VAR_18 == 0)
   VAR_18 = 1;

  VAR_14->value = VAR_19 + (VAR_14->value - VAR_19 + VAR_18/2) / VAR_18 * VAR_18;
  VAR_14->value = FUNC_0(VAR_14->value, VAR_19, VAR_20);
  VAR_17 = VAR_14->value;
  break;

 case 130:
  VAR_14->value = FUNC_0(VAR_14->value, 0, 1);
  VAR_17 = VAR_14->value;
  break;

 case 128:
  if (VAR_14->value < 0 || VAR_14->value >= VAR_16->menu_count)
   return -VAR_1;
  VAR_17 = VAR_16->menu_info[VAR_14->value].value;
  break;

 default:
  VAR_17 = VAR_14->value;
  break;
 }





 if (!VAR_15->loaded && (VAR_15->info.size * 8) != VAR_16->size) {
  if ((VAR_15->info.flags & VAR_2) == 0) {
   FUNC_2(FUNC_7(VAR_15, VAR_5),
    0, VAR_15->info.size);
  } else {
   VAR_21 = FUNC_10(VAR_13->dev, VAR_9,
    VAR_15->entity->id, VAR_13->dev->intfnum,
    VAR_15->info.selector,
    FUNC_7(VAR_15, VAR_5),
    VAR_15->info.size);
   if (VAR_21 < 0)
    return VAR_21;
  }

  VAR_15->loaded = 1;
 }


 if (!VAR_15->dirty) {
  FUNC_1(FUNC_7(VAR_15, VAR_4),
         FUNC_7(VAR_15, VAR_5),
         VAR_15->info.size);
 }

 VAR_16->set(VAR_16, VAR_17,
  FUNC_7(VAR_15, VAR_5));

 VAR_15->dirty = 1;
 VAR_15->modified = 1;
 return 0;
}
