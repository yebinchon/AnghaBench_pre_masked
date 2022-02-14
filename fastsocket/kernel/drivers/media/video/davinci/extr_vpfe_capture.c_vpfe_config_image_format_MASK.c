
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpfe_subdev_info {int grp_id; } ;
struct TYPE_13__ {int height; int bytesperline; int sizeimage; int pixelformat; int field; int width; } ;
struct TYPE_14__ {TYPE_4__ pix; } ;
struct TYPE_16__ {TYPE_5__ fmt; } ;
struct TYPE_11__ {int active_lines; int frame_format; int active_pixels; } ;
struct TYPE_10__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct vpfe_device {int std_index; TYPE_7__ fmt; int v4l2_dev; TYPE_2__ std_info; TYPE_1__ crop; struct vpfe_subdev_info* current_subdev; } ;
struct TYPE_12__ {int (* get_line_length ) () ;} ;
struct TYPE_17__ {TYPE_3__ hw_ops; } ;
struct TYPE_15__ {int const std_id; int height; int frame_format; int width; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ,TYPE_7__*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_8 ;
 int FUNC_4 (struct vpfe_device*) ;
 TYPE_6__* VAR_9 ;

__attribute__((used)) static int FUNC_5(struct vpfe_device *VAR_10,
        const v4l2_std_id *VAR_11)
{
 struct vpfe_subdev_info *VAR_12 = VAR_10->current_subdev;
 int VAR_13, VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); VAR_13++) {
  if (VAR_9[VAR_13].std_id & *VAR_11) {
   VAR_10->std_info.active_pixels =
     VAR_9[VAR_13].width;
   VAR_10->std_info.active_lines =
     VAR_9[VAR_13].height;
   VAR_10->std_info.frame_format =
     VAR_9[VAR_13].frame_format;
   VAR_10->std_index = VAR_13;
   break;
  }
 }

 if (VAR_13 == FUNC_0(VAR_9)) {
  FUNC_3(&VAR_10->v4l2_dev, "standard not supported\n");
  return -VAR_0;
 }

 VAR_10->crop.top = 0;
 VAR_10->crop.left = 0;
 VAR_10->crop.width = VAR_10->std_info.active_pixels;
 VAR_10->crop.height = VAR_10->std_info.active_lines;
 VAR_10->fmt.fmt.pix.width = VAR_10->crop.width;
 VAR_10->fmt.fmt.pix.height = VAR_10->crop.height;


 if (VAR_10->std_info.frame_format) {
  VAR_10->fmt.fmt.pix.field = VAR_2;

  VAR_10->fmt.fmt.pix.pixelformat = VAR_5;
 } else {
  VAR_10->fmt.fmt.pix.field = VAR_3;

  VAR_10->fmt.fmt.pix.pixelformat = VAR_4;
 }


 VAR_14 = FUNC_2(&VAR_10->v4l2_dev,
   VAR_12->grp_id, VAR_8, VAR_7, &VAR_10->fmt);

 if (VAR_14 && VAR_14 != -VAR_1) {
  FUNC_3(&VAR_10->v4l2_dev,
   "error in getting g_fmt from sub device\n");
  return VAR_14;
 }


 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14)
  return VAR_14;


 if (!VAR_14) {
  VAR_10->fmt.fmt.pix.bytesperline =
   VAR_6->hw_ops.get_line_length();
  VAR_10->fmt.fmt.pix.sizeimage =
   VAR_10->fmt.fmt.pix.bytesperline *
   VAR_10->fmt.fmt.pix.height;
 }
 return VAR_14;
}
