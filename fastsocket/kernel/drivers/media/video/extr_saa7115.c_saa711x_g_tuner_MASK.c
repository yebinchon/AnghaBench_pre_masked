
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int signal; } ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ radio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_tuner *VAR_3)
{
 struct saa711x_state *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_4->radio)
  return 0;
 VAR_5 = FUNC_0(VAR_2, VAR_0);

 FUNC_2(1, VAR_1, VAR_2, "status: 0x%02x\n", VAR_5);
 VAR_3->signal = ((VAR_5 & (1 << 6)) == 0) ? 0xffff : 0x0;
 return 0;
}
