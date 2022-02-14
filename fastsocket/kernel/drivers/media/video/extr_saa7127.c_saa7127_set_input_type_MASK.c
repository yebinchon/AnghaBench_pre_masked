
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7127_state {int reg_3a_cb; int reg_3a; int input_type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct saa7127_state *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 129:
  FUNC_2(1, VAR_1, VAR_2, "Selecting Normal Encoder Input\n");
  VAR_4->reg_3a_cb = 0;
  break;

 case 128:
  FUNC_2(1, VAR_1, VAR_2, "Selecting Color Bar generator\n");
  VAR_4->reg_3a_cb = 0x80;
  break;

 default:
  return -VAR_0;
 }
 FUNC_0(VAR_2, 0x3a, VAR_4->reg_3a | VAR_4->reg_3a_cb);
 VAR_4->input_type = VAR_3;
 return 0;
}
