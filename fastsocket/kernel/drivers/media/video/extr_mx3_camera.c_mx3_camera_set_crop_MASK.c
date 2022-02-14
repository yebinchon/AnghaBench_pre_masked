
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int top; int width; int left; } ;
struct v4l2_pix_format {int width; scalar_t__ height; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; int type; struct v4l2_rect c; } ;
struct v4l2_crop {TYPE_1__ fmt; int type; struct v4l2_rect c; } ;
struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {int user_width; scalar_t__ user_height; TYPE_2__ dev; } ;
struct mx3_camera_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mx3_camera_dev*) ;
 scalar_t__ FUNC_1 (struct soc_camera_device*,struct v4l2_rect*) ;
 int FUNC_2 (struct mx3_camera_dev*,int,scalar_t__) ;
 int FUNC_3 (int ,char*,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int ,int,int) ;
 struct v4l2_subdev* FUNC_5 (struct soc_camera_device*) ;
 int FUNC_6 (int*) ;
 struct soc_camera_host* FUNC_7 (int ) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct soc_camera_device *VAR_5,
          struct v4l2_crop *VAR_6)
{
 struct v4l2_rect *VAR_7 = &VAR_6->c;
 struct soc_camera_host *VAR_8 = FUNC_7(VAR_5->dev.parent);
 struct mx3_camera_dev *VAR_9 = VAR_8->priv;
 struct v4l2_subdev *VAR_10 = FUNC_5(VAR_5);
 struct v4l2_format VAR_11 = {.type = VAR_0};
 struct v4l2_pix_format *VAR_12 = &VAR_11.fmt.pix;
 int VAR_13;

 FUNC_4(&VAR_7->left, &VAR_7->width, 0, 2, 4096);
 FUNC_4(&VAR_7->top, &VAR_7->height, 0, 2, 4096);

 VAR_13 = FUNC_8(VAR_10, VAR_4, VAR_2, VAR_6);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_8(VAR_10, VAR_4, VAR_1, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_12->width & 7) {

  FUNC_6(&VAR_12->width);
  VAR_13 = FUNC_8(VAR_10, VAR_4, VAR_3, &VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_12->width != VAR_5->user_width || VAR_12->height != VAR_5->user_height) {




  if (FUNC_1(VAR_5, VAR_7)) {
   int VAR_14 = FUNC_0(VAR_9);
   if (VAR_14 < 0)
    return VAR_14;
  }

  FUNC_2(VAR_9, VAR_12->width, VAR_12->height);
 }

 FUNC_3(VAR_5->dev.parent, "Sensor cropped %dx%d\n",
  VAR_12->width, VAR_12->height);

 VAR_5->user_width = VAR_12->width;
 VAR_5->user_height = VAR_12->height;

 return VAR_13;
}
