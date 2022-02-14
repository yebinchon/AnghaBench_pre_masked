
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int width; int height; scalar_t__ pixelformat; int bytesperline; int sizeimage; scalar_t__ priv; int colorspace; int field; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct tvp514x_decoder {int current_std; int num_fmts; TYPE_3__* fmt_list; TYPE_2__* std_list; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;
struct TYPE_6__ {scalar_t__ pixelformat; int description; } ;
struct TYPE_5__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct v4l2_subdev *VAR_6, struct v4l2_format *VAR_7)
{
 struct tvp514x_decoder *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;
 struct v4l2_pix_format *VAR_10;
 enum tvp514x_std VAR_11;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (VAR_7->type != VAR_2)

  VAR_7->type = VAR_2;

 VAR_10 = &VAR_7->fmt.pix;


 VAR_11 = FUNC_1(VAR_6);
 if (VAR_11 == VAR_1)
  return -VAR_0;

 VAR_8->current_std = VAR_11;
 VAR_10->width = VAR_8->std_list[VAR_11].width;
 VAR_10->height = VAR_8->std_list[VAR_11].height;

 for (VAR_9 = 0; VAR_9 < VAR_8->num_fmts; VAR_9++) {
  if (VAR_10->pixelformat ==
   VAR_8->fmt_list[VAR_9].pixelformat)
   break;
 }
 if (VAR_9 == VAR_8->num_fmts)

  VAR_9 = 0;
 VAR_10->pixelformat = VAR_8->fmt_list[VAR_9].pixelformat;

 VAR_10->field = VAR_4;
 VAR_10->bytesperline = VAR_10->width * 2;
 VAR_10->sizeimage = VAR_10->bytesperline * VAR_10->height;
 VAR_10->colorspace = VAR_3;
 VAR_10->priv = 0;

 FUNC_2(1, VAR_5, VAR_6, "Try FMT: pixelformat - %s, bytesperline - %d"
   "Width - %d, Height - %d",
   VAR_8->fmt_list[VAR_9].description, VAR_10->bytesperline,
   VAR_10->width, VAR_10->height);
 return 0;
}
