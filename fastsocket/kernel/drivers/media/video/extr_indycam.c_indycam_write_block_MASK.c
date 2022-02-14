
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, u8 VAR_1,
          u8 VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_3[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
