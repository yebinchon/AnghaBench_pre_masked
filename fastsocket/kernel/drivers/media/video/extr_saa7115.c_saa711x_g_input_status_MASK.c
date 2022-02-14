
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, u32 *VAR_5)
{
 struct saa711x_state *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0x80;
 int VAR_8;

 *VAR_5 = VAR_3;
 if (VAR_6->ident == VAR_2)
  VAR_7 = FUNC_0(VAR_4, VAR_0);
 VAR_8 = FUNC_0(VAR_4, VAR_1);
 if ((VAR_8 & 0xc1) == 0x81 && (VAR_7 & 0xc0) == 0x80)
  *VAR_5 = 0;
 return 0;
}
