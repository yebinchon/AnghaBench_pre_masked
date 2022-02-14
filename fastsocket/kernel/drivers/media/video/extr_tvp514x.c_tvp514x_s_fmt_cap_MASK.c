
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct tvp514x_decoder {struct v4l2_pix_format pix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_format*) ;

__attribute__((used)) static int
FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_format *VAR_3)
{
 struct tvp514x_decoder *VAR_4 = FUNC_0(VAR_2);
 struct v4l2_pix_format *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 if (VAR_3->type != VAR_1)

  return -VAR_0;

 VAR_5 = &VAR_3->fmt.pix;
 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

  VAR_4->pix = *VAR_5;

 return VAR_6;
}
