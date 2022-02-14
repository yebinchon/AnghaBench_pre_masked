
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned char FUNC_3 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1)
{
 unsigned char VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_3(VAR_1, 0x29);

  if (!(VAR_2 & 4))
   return 0;

  FUNC_2(10);

  if (FUNC_1())
   FUNC_0();
 }

 return -1;
}
