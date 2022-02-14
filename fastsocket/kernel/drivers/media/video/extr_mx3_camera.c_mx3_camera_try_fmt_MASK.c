
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int height; int width; int bytesperline; int sizeimage; int field; scalar_t__ pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_format_xlate {TYPE_3__* host_fmt; TYPE_2__* cam_fmt; } ;
struct TYPE_8__ {int parent; } ;
struct soc_camera_device {TYPE_4__ dev; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {scalar_t__ fourcc; int depth; } ;
struct TYPE_6__ {scalar_t__ fourcc; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 struct v4l2_subdev* FUNC_3 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_4 (struct soc_camera_device*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_5,
         struct v4l2_format *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_3(VAR_5);
 const struct soc_camera_format_xlate *VAR_8;
 struct v4l2_pix_format *VAR_9 = &VAR_6->fmt.pix;
 __u32 VAR_10 = VAR_9->pixelformat;
 enum v4l2_field VAR_11;
 int VAR_12;

 VAR_8 = FUNC_4(VAR_5, VAR_10);
 if (VAR_10 && !VAR_8) {
  FUNC_2(VAR_5->dev.parent, "Format %x not found\n", VAR_10);
  return -VAR_0;
 }


 if (VAR_9->height > 4096)
  VAR_9->height = 4096;
 if (VAR_9->width > 4096)
  VAR_9->width = 4096;

 VAR_9->bytesperline = VAR_9->width *
  FUNC_0(VAR_8->host_fmt->depth, 8);
 VAR_9->sizeimage = VAR_9->height * VAR_9->bytesperline;


 VAR_9->pixelformat = VAR_8->cam_fmt->fourcc;

 VAR_12 = FUNC_5(VAR_7, VAR_4, VAR_3, VAR_6);
 VAR_9->pixelformat = VAR_8->host_fmt->fourcc;

 VAR_11 = VAR_9->field;

 if (VAR_11 == VAR_1) {
  VAR_9->field = VAR_2;
 } else if (VAR_11 != VAR_2) {
  FUNC_1(VAR_5->dev.parent, "Field type %d unsupported.\n", VAR_11);
  return -VAR_0;
 }

 return VAR_12;
}
