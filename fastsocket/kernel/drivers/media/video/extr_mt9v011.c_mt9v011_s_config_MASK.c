
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v011 {unsigned int xtal; } ;


 int VAR_0 ;
 struct mt9v011* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, int VAR_2, void *VAR_3)
{
 struct mt9v011 *VAR_4 = FUNC_0(VAR_1);
 unsigned *VAR_5 = VAR_3;

 FUNC_1(1, VAR_0, VAR_1, "s_config called\n");

 if (VAR_5) {
  VAR_4->xtal = *VAR_5;
  FUNC_1(1, VAR_0, VAR_1, "xtal set to %d.%03d MHz\n",
    *VAR_5 / 1000000, (*VAR_5 / 1000) % 1000);
 }

 return 0;
}
