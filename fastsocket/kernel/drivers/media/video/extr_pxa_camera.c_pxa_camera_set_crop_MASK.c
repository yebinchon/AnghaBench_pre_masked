
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int top; int left; int height; int width; } ;
struct v4l2_mbus_framefmt {int height; int width; struct v4l2_rect c; } ;
struct v4l2_crop {int height; int width; struct v4l2_rect c; } ;
struct soc_camera_sense {int pixel_clock_max; int flags; scalar_t__ pixel_clock; int master_clock; } ;
struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_6__ {struct device* parent; } ;
struct soc_camera_device {int user_height; int user_width; TYPE_3__ dev; struct soc_camera_sense* sense; TYPE_2__* current_fmt; struct pxa_cam* host_priv; } ;
struct pxa_camera_dev {int ciclk; int platform_flags; int mclk; } ;
struct pxa_cam {int flags; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* host_fmt; } ;
struct TYPE_4__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct soc_camera_device*,int ,scalar_t__) ;
 int FUNC_4 (struct pxa_camera_dev*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 struct v4l2_subdev* FUNC_5 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_6 (struct device*) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int FUNC_8 (int *,int,int,int,int *,int,int,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct soc_camera_device *VAR_9,
          struct v4l2_crop *VAR_10)
{
 struct v4l2_rect *VAR_11 = &VAR_10->c;
 struct soc_camera_host *VAR_12 = FUNC_6(VAR_9->dev.parent);
 struct pxa_camera_dev *VAR_13 = VAR_12->priv;
 struct device *VAR_14 = VAR_9->dev.parent;
 struct v4l2_subdev *VAR_15 = FUNC_5(VAR_9);
 struct soc_camera_sense VAR_16 = {
  .master_clock = VAR_13->mclk,
  .pixel_clock_max = VAR_13->ciclk / 4,
 };
 struct v4l2_mbus_framefmt VAR_17;
 struct pxa_cam *VAR_18 = VAR_9->host_priv;
 u32 VAR_19 = VAR_9->current_fmt->host_fmt->fourcc;
 int VAR_20;


 if (VAR_13->platform_flags & VAR_2)
  VAR_9->sense = &VAR_16;

 VAR_20 = FUNC_7(VAR_15, VAR_8, VAR_6, VAR_10);

 VAR_9->sense = ((void*)0);

 if (VAR_20 < 0) {
  FUNC_1(VAR_14, "Failed to crop to %ux%u@%u:%u\n",
    VAR_11->width, VAR_11->height, VAR_11->left, VAR_11->top);
  return VAR_20;
 }

 VAR_20 = FUNC_7(VAR_15, VAR_8, VAR_5, &VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 if (FUNC_2(VAR_17.width, VAR_17.height)) {




  FUNC_8(&VAR_17.width, 48, 2048, 1,
   &VAR_17.height, 32, 2048, 0,
   VAR_19 == VAR_4 ? 4 : 0);
  VAR_20 = FUNC_7(VAR_15, VAR_8, VAR_7, &VAR_17);
  if (VAR_20 < 0)
   return VAR_20;

  if (FUNC_2(VAR_17.width, VAR_17.height)) {
   FUNC_1(VAR_9->dev.parent,
     "Inconsistent state. Use S_FMT to repair\n");
   return -VAR_0;
  }
 }

 if (VAR_16.flags & VAR_3) {
  if (VAR_16.pixel_clock > VAR_16.pixel_clock_max) {
   FUNC_0(VAR_14,
    "pixel clock %lu set by the camera too high!",
    VAR_16.pixel_clock);
   return -VAR_1;
  }
  FUNC_4(VAR_13, VAR_16.pixel_clock);
 }

 VAR_9->user_width = VAR_17.width;
 VAR_9->user_height = VAR_17.height;

 FUNC_3(VAR_9, VAR_18->flags, VAR_19);

 return VAR_20;
}
