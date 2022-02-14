
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct v4l2_querymenu {size_t index; int name; void* id; } ;
struct uvc_video_chain {int ctrl_mutex; } ;
struct uvc_menu_info {int name; } ;
struct uvc_control_mapping {scalar_t__ v4l2_type; size_t menu_count; struct uvc_menu_info* menu_info; } ;
struct uvc_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_querymenu*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 struct uvc_control* FUNC_4 (struct uvc_video_chain*,void*,struct uvc_control_mapping**) ;

int FUNC_5(struct uvc_video_chain *VAR_3,
 struct v4l2_querymenu *VAR_4)
{
 struct uvc_menu_info *VAR_5;
 struct uvc_control_mapping *VAR_6;
 struct uvc_control *VAR_7;
 u32 VAR_8 = VAR_4->index;
 u32 VAR_9 = VAR_4->id;
 int VAR_10;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->id = VAR_9;
 VAR_4->index = VAR_8;

 VAR_10 = FUNC_1(&VAR_3->ctrl_mutex);
 if (VAR_10 < 0)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_3, VAR_4->id, &VAR_6);
 if (VAR_7 == ((void*)0) || VAR_6->v4l2_type != VAR_2) {
  VAR_10 = -VAR_0;
  goto done;
 }

 if (VAR_4->index >= VAR_6->menu_count) {
  VAR_10 = -VAR_0;
  goto done;
 }

 VAR_5 = &VAR_6->menu_info[VAR_4->index];
 FUNC_3(VAR_4->name, VAR_5->name, sizeof VAR_4->name);

done:
 FUNC_2(&VAR_3->ctrl_mutex);
 return VAR_10;
}
