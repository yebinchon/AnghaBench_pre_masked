
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,char*) ;
 int FUNC_1 (struct cx18*,int,int) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct cx18 *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_0, "%s output\n", VAR_1 ? "enable" : "disable");
 if (VAR_1) {
  FUNC_1(VAR_2, 0x115, 0x8c);
  FUNC_1(VAR_2, 0x116, 0x07);
 } else {
  FUNC_1(VAR_2, 0x115, 0x00);
  FUNC_1(VAR_2, 0x116, 0x00);
 }
 return 0;
}
