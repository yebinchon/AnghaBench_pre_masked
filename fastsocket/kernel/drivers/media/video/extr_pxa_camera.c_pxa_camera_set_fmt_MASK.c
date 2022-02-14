
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int colorspace; int field; int height; int width; int pixelformat; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int colorspace; int field; int height; int width; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct soc_camera_sense {int pixel_clock_max; int flags; scalar_t__ pixel_clock; int master_clock; } ;
struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct soc_camera_format_xlate {scalar_t__ code; } ;
struct TYPE_3__ {struct device* parent; } ;
struct soc_camera_device {struct soc_camera_format_xlate const* current_fmt; struct soc_camera_sense* sense; TYPE_1__ dev; } ;
struct pxa_camera_dev {int ciclk; int platform_flags; int mclk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pxa_camera_dev*,scalar_t__) ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_4 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_5 (struct soc_camera_device*,int ) ;
 struct soc_camera_host* FUNC_6 (struct device*) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct soc_camera_device *VAR_6,
         struct v4l2_format *VAR_7)
{
 struct soc_camera_host *VAR_8 = FUNC_6(VAR_6->dev.parent);
 struct pxa_camera_dev *VAR_9 = VAR_8->priv;
 struct device *VAR_10 = VAR_6->dev.parent;
 struct v4l2_subdev *VAR_11 = FUNC_4(VAR_6);
 const struct soc_camera_format_xlate *VAR_12 = ((void*)0);
 struct soc_camera_sense VAR_13 = {
  .master_clock = VAR_9->mclk,
  .pixel_clock_max = VAR_9->ciclk / 4,
 };
 struct v4l2_pix_format *VAR_14 = &VAR_7->fmt.pix;
 struct v4l2_mbus_framefmt VAR_15;
 int VAR_16;

 VAR_12 = FUNC_5(VAR_6, VAR_14->pixelformat);
 if (!VAR_12) {
  FUNC_1(VAR_10, "Format %x not found\n", VAR_14->pixelformat);
  return -VAR_0;
 }


 if (VAR_9->platform_flags & VAR_2)

  VAR_6->sense = &VAR_13;

 VAR_15.width = VAR_14->width;
 VAR_15.height = VAR_14->height;
 VAR_15.field = VAR_14->field;
 VAR_15.colorspace = VAR_14->colorspace;
 VAR_15.code = VAR_12->code;

 VAR_16 = FUNC_7(VAR_11, VAR_5, VAR_4, &VAR_15);

 if (VAR_15.code != VAR_12->code)
  return -VAR_0;

 VAR_6->sense = ((void*)0);

 if (VAR_16 < 0) {
  FUNC_1(VAR_10, "Failed to configure for format %x\n",
    VAR_14->pixelformat);
 } else if (FUNC_2(VAR_15.width, VAR_15.height)) {
  FUNC_1(VAR_10,
    "Camera driver produced an unsupported frame %dx%d\n",
    VAR_15.width, VAR_15.height);
  VAR_16 = -VAR_0;
 } else if (VAR_13.flags & VAR_3) {
  if (VAR_13.pixel_clock > VAR_13.pixel_clock_max) {
   FUNC_0(VAR_10,
    "pixel clock %lu set by the camera too high!",
    VAR_13.pixel_clock);
   return -VAR_1;
  }
  FUNC_3(VAR_9, VAR_13.pixel_clock);
 }

 if (VAR_16 < 0)
  return VAR_16;

 VAR_14->width = VAR_15.width;
 VAR_14->height = VAR_15.height;
 VAR_14->field = VAR_15.field;
 VAR_14->colorspace = VAR_15.colorspace;
 VAR_6->current_fmt = VAR_12;

 return VAR_16;
}
