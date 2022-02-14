
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int height; int bytesperline; int sizeimage; int field; int colorspace; int width; } ;
struct v4l2_mbus_framefmt {int height; int field; int colorspace; int width; int code; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_format_xlate {int code; int host_fmt; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_2__ dev; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct v4l2_subdev* FUNC_2 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_3 (struct soc_camera_device*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int FUNC_6 (int *,int,int,int,int*,int,int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct soc_camera_device *VAR_4,
         struct v4l2_format *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_2(VAR_4);
 const struct soc_camera_format_xlate *VAR_7;
 struct v4l2_pix_format *VAR_8 = &VAR_5->fmt.pix;
 struct v4l2_mbus_framefmt VAR_9;
 __u32 VAR_10 = VAR_8->pixelformat;
 int VAR_11;

 VAR_7 = FUNC_3(VAR_4, VAR_10);
 if (!VAR_7) {
  FUNC_1(VAR_4->dev.parent, "Format %x not found\n", VAR_10);
  return -VAR_0;
 }







 FUNC_6(&VAR_8->width, 48, 2048, 1,
         &VAR_8->height, 32, 2048, 0,
         VAR_10 == VAR_1 ? 4 : 0);

 VAR_8->bytesperline = FUNC_4(VAR_8->width,
          VAR_7->host_fmt);
 if (VAR_8->bytesperline < 0)
  return VAR_8->bytesperline;
 VAR_8->sizeimage = VAR_8->height * VAR_8->bytesperline;


 VAR_9.width = VAR_8->width;
 VAR_9.height = VAR_8->height;
 VAR_9.field = VAR_8->field;
 VAR_9.colorspace = VAR_8->colorspace;
 VAR_9.code = VAR_7->code;

 VAR_11 = FUNC_5(VAR_6, VAR_3, VAR_2, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->width = VAR_9.width;
 VAR_8->height = VAR_9.height;
 VAR_8->colorspace = VAR_9.colorspace;

 switch (VAR_9.field) {
 case 129:
 case 128:
  VAR_8->field = 128;
  break;
 default:

  FUNC_0(VAR_4->dev.parent, "Field type %d unsupported.\n",
   VAR_9.field);
  return -VAR_0;
 }

 return VAR_11;
}
