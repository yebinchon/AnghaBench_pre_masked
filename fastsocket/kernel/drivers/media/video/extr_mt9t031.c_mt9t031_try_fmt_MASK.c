
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6,
      struct v4l2_mbus_framefmt *VAR_7)
{
 FUNC_0(
  &VAR_7->width, VAR_3, VAR_1, 1,
  &VAR_7->height, VAR_2, VAR_0, 1, 0);

 VAR_7->code = VAR_5;
 VAR_7->colorspace = VAR_4;

 return 0;
}
