
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct v4l2_cropcap {struct v4l2_rect defrect; void* type; struct v4l2_rect c; } ;
struct v4l2_crop {struct v4l2_rect defrect; void* type; struct v4l2_rect c; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,struct v4l2_cropcap*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, struct v4l2_rect *VAR_5)
{
 struct v4l2_crop VAR_6;
 struct v4l2_cropcap VAR_7;
 int VAR_8;

 VAR_6.type = VAR_0;

 VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_2, &VAR_6);
 if (!VAR_8) {
  *VAR_5 = VAR_6.c;
  return VAR_8;
 }


 VAR_7.type = VAR_0;

 VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = VAR_7.defrect;

 return VAR_8;
}
