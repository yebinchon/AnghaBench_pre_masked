
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int norm; int hue; int contrast; int bright; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_7, u32 VAR_8)
{
 struct tvp5150 *VAR_9 = FUNC_0(VAR_7);


 FUNC_5(VAR_7, VAR_4);


 FUNC_3(VAR_7, VAR_6);


 FUNC_1(VAR_7);


 FUNC_5(VAR_7, VAR_5);


 FUNC_4(VAR_7, VAR_0, VAR_9->bright);
 FUNC_4(VAR_7, VAR_1, VAR_9->contrast);
 FUNC_4(VAR_7, VAR_3, VAR_9->contrast);
 FUNC_4(VAR_7, VAR_2, VAR_9->hue);

 FUNC_2(VAR_7, VAR_9->norm);
 return 0;
}
