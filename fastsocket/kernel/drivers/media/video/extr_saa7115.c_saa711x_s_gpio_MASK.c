
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct saa711x_state *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4->ident > VAR_1)
  return -VAR_0;
 FUNC_1(VAR_2, 0x11, (FUNC_0(VAR_2, 0x11) & 0x7f) |
  (VAR_3 ? 0x80 : 0));
 return 0;
}
