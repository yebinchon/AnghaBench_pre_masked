
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
       u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 if ((VAR_2 & 0xf) > 6) {
  FUNC_1(VAR_1, "Invalid input %d.\n", VAR_2);
  return -VAR_0;
 }
 FUNC_0(VAR_1, 0x09, VAR_2 & 0xf);
 FUNC_0(VAR_1, 0x05, VAR_2 & 0xf0);
 return 0;
}
