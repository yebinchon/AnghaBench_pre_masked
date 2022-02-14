
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct v4l2_subdev*,char*,char*) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, int VAR_2)
{
 FUNC_0(1, VAR_0, VAR_1, "s_stream %s\n", VAR_2 ? "on" : "off");

 FUNC_1(VAR_1, 0xf2, (VAR_2 ? 0x1b : 0x00));
 return 0;
}
