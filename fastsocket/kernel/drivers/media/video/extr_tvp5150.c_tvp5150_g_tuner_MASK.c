
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int signal; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, struct v4l2_tuner *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, 0x88);

 VAR_1->signal = ((VAR_2 & 0x04) && (VAR_2 & 0x02)) ? 0xffff : 0x0;
 return 0;
}
