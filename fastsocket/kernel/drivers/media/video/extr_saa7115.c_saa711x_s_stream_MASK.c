
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa711x_state {int enable; int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct saa711x_state *VAR_4 = FUNC_2(VAR_2);

 FUNC_3(1, VAR_1, VAR_2, "%s output\n",
   VAR_3 ? "enable" : "disable");

 if (VAR_4->enable == VAR_3)
  return 0;
 VAR_4->enable = VAR_3;
 if (!FUNC_0(VAR_4->ident, VAR_0))
  return 0;
 FUNC_1(VAR_2, VAR_0, VAR_4->enable);
 return 0;
}
