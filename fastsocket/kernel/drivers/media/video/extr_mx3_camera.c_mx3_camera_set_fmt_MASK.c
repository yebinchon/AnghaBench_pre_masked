
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int height; int width; int pixelformat; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct soc_camera_format_xlate {int host_fmt; int buswidth; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_2__ dev; int current_fmt; int buswidth; } ;
struct mx3_camera_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mx3_camera_dev*) ;
 int FUNC_1 (struct mx3_camera_dev*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_4 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_5 (struct soc_camera_device*,int ) ;
 int FUNC_6 (int *) ;
 struct soc_camera_host* FUNC_7 (int ) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct soc_camera_device *VAR_3,
         struct v4l2_format *VAR_4)
{
 struct soc_camera_host *VAR_5 = FUNC_7(VAR_3->dev.parent);
 struct mx3_camera_dev *VAR_6 = VAR_5->priv;
 struct v4l2_subdev *VAR_7 = FUNC_4(VAR_3);
 const struct soc_camera_format_xlate *VAR_8;
 struct v4l2_pix_format *VAR_9 = &VAR_4->fmt.pix;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_3, VAR_9->pixelformat);
 if (!VAR_8) {
  FUNC_3(VAR_3->dev.parent, "Format %x not found\n",
    VAR_9->pixelformat);
  return -VAR_0;
 }

 FUNC_6(&VAR_9->width);
 FUNC_2(VAR_3->dev.parent, "Set format %dx%d\n", VAR_9->width, VAR_9->height);

 VAR_10 = FUNC_0(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;







 FUNC_1(VAR_6, VAR_9->width, VAR_9->height);

 VAR_10 = FUNC_8(VAR_7, VAR_2, VAR_1, VAR_4);
 if (!VAR_10) {
  VAR_3->buswidth = VAR_8->buswidth;
  VAR_3->current_fmt = VAR_8->host_fmt;
 }

 FUNC_2(VAR_3->dev.parent, "Sensor set %dx%d\n", VAR_9->width, VAR_9->height);

 return VAR_10;
}
