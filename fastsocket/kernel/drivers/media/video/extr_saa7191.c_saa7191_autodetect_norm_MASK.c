
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,int*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6)
{
 u8 VAR_7;

 FUNC_0("SAA7191 signal auto-detection...\n");

 FUNC_0("Reading status...\n");

 if (FUNC_1(VAR_6, &VAR_7))
  return -VAR_1;

 FUNC_0("Checking for signal...\n");


 if (VAR_7 & VAR_3) {
  FUNC_0("No signal\n");
  return -VAR_0;
 }

 FUNC_0("Signal found\n");

 if (VAR_7 & VAR_2) {

  FUNC_0("NTSC\n");
  return FUNC_2(VAR_6, VAR_4);
 } else {

  FUNC_0("PAL\n");
  return FUNC_2(VAR_6, VAR_5);
 }
}
