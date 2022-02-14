
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; void* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 void* FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6, struct v4l2_control *VAR_7)
{
 FUNC_1(1, VAR_5, VAR_6, "g_ctrl called\n");

 switch (VAR_7->id) {
 case 131:
  VAR_7->value = FUNC_0(VAR_6, VAR_1);
  return 0;
 case 130:
  VAR_7->value = FUNC_0(VAR_6, VAR_2);
  return 0;
 case 128:
  VAR_7->value = FUNC_0(VAR_6, VAR_4);
  return 0;
 case 129:
  VAR_7->value = FUNC_0(VAR_6, VAR_3);
  return 0;
 }
 return -VAR_0;
}
