
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int height; int width; int bytesperline; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct tvp514x_decoder {TYPE_2__ pix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_format *VAR_4)
{
 struct tvp514x_decoder *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (VAR_4->type != VAR_1)

  return -VAR_0;

 VAR_4->fmt.pix = VAR_5->pix;

 FUNC_1(1, VAR_2, VAR_3, "Current FMT: bytesperline - %d"
   "Width - %d, Height - %d",
   VAR_5->pix.bytesperline,
   VAR_5->pix.width, VAR_5->pix.height);
 return 0;
}
