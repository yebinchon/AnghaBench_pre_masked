
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int * name; int flags; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int params; int sd_av; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct v4l2_queryctrl*) ;
 int VAR_4 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct v4l2_queryctrl*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,struct v4l2_queryctrl*) ;

int FUNC_5(struct file *VAR_5, void *VAR_6, struct v4l2_queryctrl *VAR_7)
{
 struct cx18 *VAR_8 = ((struct cx18_open_id *)VAR_6)->cx;
 const char *VAR_9;

 VAR_7->id = FUNC_2(VAR_3, VAR_7->id);
 if (VAR_7->id == 0)
  return -VAR_0;

 switch (VAR_7->id) {

 case 128:
  return FUNC_3(VAR_7, 0, 0, 0, 0);
 case 132:
 case 130:
 case 129:
 case 131:
  if (FUNC_4(VAR_8->sd_av, VAR_2, VAR_4, VAR_7))
   VAR_7->flags |= VAR_1;
  return 0;

 case 133:
 case 135:
 case 138:
 case 137:
 case 134:
 case 136:
  if (FUNC_4(VAR_8->sd_av, VAR_2, VAR_4, VAR_7))
   VAR_7->flags |= VAR_1;
  return 0;

 default:
  if (FUNC_0(&VAR_8->params, VAR_7))
   VAR_7->flags |= VAR_1;
  return 0;
 }
 FUNC_1(VAR_7->name, VAR_9, sizeof(VAR_7->name) - 1);
 VAR_7->name[sizeof(VAR_7->name) - 1] = 0;
 return 0;
}
