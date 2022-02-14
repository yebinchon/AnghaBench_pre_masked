
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_xu_control_mapping {int v4l2_type; int menu_count; int menu_info; int data_type; int offset; int size; int selector; int entity; int name; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_control_mapping {int v4l2_type; int menu_count; struct uvc_control_mapping* menu_info; int data_type; int offset; int size; int selector; int entity; int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct uvc_control_mapping*,int ,unsigned int) ;
 int FUNC_1 (struct uvc_control_mapping*) ;
 struct uvc_control_mapping* FUNC_2 (unsigned int,int ) ;
 struct uvc_control_mapping* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct uvc_video_chain*,struct uvc_control_mapping*) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct uvc_video_chain *VAR_5,
 struct uvc_xu_control_mapping *VAR_6, int VAR_7)
{
 struct uvc_control_mapping *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(sizeof *VAR_8, VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_8->id = VAR_6->id;
 FUNC_4(VAR_8->name, VAR_6->name, sizeof VAR_8->name);
 FUNC_4(VAR_8->entity, VAR_6->entity, sizeof VAR_8->entity);
 VAR_8->selector = VAR_6->selector;
 VAR_8->size = VAR_6->size;
 VAR_8->offset = VAR_6->offset;
 VAR_8->v4l2_type = VAR_6->v4l2_type;
 VAR_8->data_type = VAR_6->data_type;

 switch (VAR_6->v4l2_type) {
 case 129:
 case 131:
 case 130:
  break;

 case 128:
  if (VAR_7) {
   FUNC_6(VAR_4, "V4L2_CTRL_TYPE_MENU not "
      "supported for UVCIOC_CTRL_MAP_OLD.\n");
   VAR_10 = -VAR_1;
   goto done;
  }

  VAR_9 = VAR_6->menu_count * sizeof(*VAR_8->menu_info);
  VAR_8->menu_info = FUNC_2(VAR_9, VAR_3);
  if (VAR_8->menu_info == ((void*)0)) {
   VAR_10 = -VAR_2;
   goto done;
  }

  if (FUNC_0(VAR_8->menu_info, VAR_6->menu_info, VAR_9)) {
   VAR_10 = -VAR_0;
   goto done;
  }

  VAR_8->menu_count = VAR_6->menu_count;
  break;

 default:
  FUNC_6(VAR_4, "Unsupported V4L2 control type "
     "%u.\n", VAR_6->v4l2_type);
  VAR_10 = -VAR_1;
  goto done;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_8);

done:
 FUNC_1(VAR_8->menu_info);
 FUNC_1(VAR_8);

 return VAR_10;
}
