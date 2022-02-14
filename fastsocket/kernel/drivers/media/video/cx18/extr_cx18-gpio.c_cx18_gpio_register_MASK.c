
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_ops {int dummy; } ;
struct v4l2_subdev {int grp_id; int name; } ;
struct TYPE_2__ {char* name; } ;
struct cx18 {TYPE_1__ v4l2_dev; struct v4l2_subdev sd_resetctrl; struct v4l2_subdev sd_gpiomux; } ;




 int VAR_0 ;
 struct v4l2_subdev_ops VAR_1 ;
 struct v4l2_subdev_ops VAR_2 ;
 int FUNC_0 (int ,int,char*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,struct cx18*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;

int FUNC_4(struct cx18 *VAR_3, u32 VAR_4)
{
 struct v4l2_subdev *VAR_5;
 const struct v4l2_subdev_ops *VAR_6;
 char *VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_5 = &VAR_3->sd_gpiomux;
  VAR_6 = &VAR_1;
  VAR_7 = "gpio-mux";
  break;
 case 128:
  VAR_5 = &VAR_3->sd_resetctrl;
  VAR_6 = &VAR_2;
  VAR_7 = "gpio-reset-ctrl";
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_3);
 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "%s %s", VAR_3->v4l2_dev.name, VAR_7);
 VAR_5->grp_id = VAR_4;
 return FUNC_1(&VAR_3->v4l2_dev, VAR_5);
}
