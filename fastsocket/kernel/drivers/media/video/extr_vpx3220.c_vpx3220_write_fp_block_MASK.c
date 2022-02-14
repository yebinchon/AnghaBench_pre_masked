
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
  const u16 *VAR_1, unsigned int VAR_2)
{
 u8 VAR_3;
 int VAR_4 = 0;

 while (VAR_2 > 1) {
  VAR_3 = *VAR_1++;
  VAR_4 |= FUNC_0(VAR_0, VAR_3, *VAR_1++);
  VAR_2 -= 2;
 }

 return VAR_4;
}
