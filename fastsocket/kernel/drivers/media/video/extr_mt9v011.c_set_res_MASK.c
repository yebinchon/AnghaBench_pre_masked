
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct mt9v011* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_6)
{
 struct mt9v011 *VAR_7 = FUNC_2(VAR_6);
 unsigned VAR_8, VAR_9;
 VAR_9 = 14 + (640 - VAR_7->width) / 2;
 FUNC_1(VAR_6, VAR_1, VAR_9);
 FUNC_1(VAR_6, VAR_3, VAR_7->width);
 FUNC_1(VAR_6, VAR_4, 771 - VAR_7->width);

 VAR_8 = 8 + (480 - VAR_7->height) / 2;
 FUNC_1(VAR_6, VAR_0, VAR_8);
 FUNC_1(VAR_6, VAR_2, VAR_7->height);
 FUNC_1(VAR_6, VAR_5, 508 - VAR_7->height);

 FUNC_0(VAR_6, ((void*)0), ((void*)0));
}
