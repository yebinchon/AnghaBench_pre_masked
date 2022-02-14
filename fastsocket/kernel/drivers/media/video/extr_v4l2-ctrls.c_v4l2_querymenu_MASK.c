
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_querymenu {int index; int name; scalar_t__ reserved; int id; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {char** qmenu; int minimum; int maximum; int menu_skip_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,int ) ;

int FUNC_2(struct v4l2_ctrl_handler *VAR_1, struct v4l2_querymenu *VAR_2)
{
 struct v4l2_ctrl *VAR_3;
 u32 VAR_4 = VAR_2->index;

 VAR_3 = FUNC_1(VAR_1, VAR_2->id);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->reserved = 0;

 if (VAR_3->qmenu == ((void*)0) ||
     VAR_4 < VAR_3->minimum || VAR_4 > VAR_3->maximum)
  return -VAR_0;

 if (VAR_3->menu_skip_mask & (1 << VAR_4))
  return -VAR_0;

 if (VAR_3->qmenu[VAR_4] == ((void*)0) || VAR_3->qmenu[VAR_4][0] == '\0')
  return -VAR_0;
 FUNC_0(VAR_2->name, VAR_3->qmenu[VAR_4], sizeof(VAR_2->name));
 return 0;
}
