
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct soc_camera_format_xlate {int host_fmt; int buswidth; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {int current_fmt; int buswidth; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_1 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_2 (struct soc_camera_device*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_3,
         struct v4l2_format *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_1(VAR_3);
 const struct soc_camera_format_xlate *VAR_6;
 struct v4l2_pix_format *VAR_7 = &VAR_4->fmt.pix;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3, VAR_7->pixelformat);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev.parent, "Format %x not found\n",
    VAR_7->pixelformat);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_1, VAR_4);
 if (!VAR_8) {
  VAR_3->buswidth = VAR_6->buswidth;
  VAR_3->current_fmt = VAR_6->host_fmt;
 }

 return VAR_8;
}
