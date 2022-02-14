
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {void* height; int top; void* width; int left; } ;
struct v4l2_crop {struct v4l2_rect c; } ;
struct mt9t031 {int yskip; int xskip; } ;
struct i2c_client {int dummy; } ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*,struct v4l2_rect*,int ,int ) ;
 int FUNC_2 (int *,void**,int ,int ,int ) ;
 struct mt9t031* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6, struct v4l2_crop *VAR_7)
{
 struct v4l2_rect VAR_8 = VAR_7->c;
 struct i2c_client *VAR_9 = FUNC_4(VAR_6);
 struct mt9t031 *VAR_10 = FUNC_3(VAR_9);

 VAR_8.width = FUNC_0(VAR_8.width, 2);
 VAR_8.height = FUNC_0(VAR_8.height, 2);

 FUNC_2(&VAR_8.left, &VAR_8.width,
       VAR_0, VAR_4, VAR_2);

 FUNC_2(&VAR_8.top, &VAR_8.height,
       VAR_5, VAR_3, VAR_1);

 return FUNC_1(VAR_9, &VAR_8, VAR_10->xskip, VAR_10->yskip);
}
