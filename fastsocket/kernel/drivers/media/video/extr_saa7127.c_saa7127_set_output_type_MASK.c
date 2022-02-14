
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7127_state {int reg_2d; int reg_3a; int reg_3a_cb; int output_type; int ident; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct saa7127_state *VAR_6 = FUNC_1(VAR_4);

 switch (VAR_5) {
 case 131:
  VAR_6->reg_2d = 0x0f;
  VAR_6->reg_3a = 0x13;
  break;

 case 132:
  if (VAR_6->ident == VAR_1)
   VAR_6->reg_2d = 0x20;
  else
   VAR_6->reg_2d = 0x08;
  VAR_6->reg_3a = 0x13;
  break;

 case 130:
  if (VAR_6->ident == VAR_1)
   VAR_6->reg_2d = 0x18;
  else
   VAR_6->reg_2d = 0xff;
  VAR_6->reg_3a = 0x13;
  break;

 case 128:
  VAR_6->reg_2d = 0x4f;
  VAR_6->reg_3a = 0x0b;
  break;

 case 129:
  VAR_6->reg_2d = 0x0f;
  VAR_6->reg_3a = 0x0b;
  break;

 case 133:
  if (VAR_6->ident == VAR_1)
   VAR_6->reg_2d = 0x38;
  else
   VAR_6->reg_2d = 0xbf;
  VAR_6->reg_3a = 0x13;
  break;

 default:
  return -VAR_0;
 }
 FUNC_2(1, VAR_2, VAR_4,
  "Selecting %s output type\n", VAR_3[VAR_5]);


 FUNC_0(VAR_4, 0x2d, VAR_6->reg_2d);
 FUNC_0(VAR_4, 0x3a, VAR_6->reg_3a | VAR_6->reg_3a_cb);
 VAR_6->output_type = VAR_5;
 return 0;
}
