
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
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct v4l2_subdev*,int*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, u8 *VAR_6)
{
 int VAR_7 = 0;

 FUNC_0("Checking for signal...\n");

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (FUNC_2(VAR_5, VAR_6))
   return -VAR_1;

  if (((*VAR_6) & VAR_2) == 0) {
   FUNC_0("Signal found\n");
   return 0;
  }

  FUNC_1(VAR_4);
 }

 FUNC_0("No signal\n");

 return -VAR_0;
}
