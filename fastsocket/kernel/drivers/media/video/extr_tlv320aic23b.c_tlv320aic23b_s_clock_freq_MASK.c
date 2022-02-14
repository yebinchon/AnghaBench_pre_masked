
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 switch (VAR_2) {
 case 32000:
  FUNC_0(VAR_1, 8, 0x018);
  break;
 case 44100:
  FUNC_0(VAR_1, 8, 0x022);
  break;
 case 48000:
  FUNC_0(VAR_1, 8, 0x000);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
