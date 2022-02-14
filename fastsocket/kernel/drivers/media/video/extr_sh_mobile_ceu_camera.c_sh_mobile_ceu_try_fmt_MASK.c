
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format {int pixelformat; int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_format_xlate {TYPE_3__* cam_fmt; TYPE_2__* host_fmt; } ;
struct TYPE_8__ {int parent; } ;
struct soc_camera_device {TYPE_4__ dev; } ;
typedef int __u32 ;
struct TYPE_7__ {int fourcc; } ;
struct TYPE_6__ {int depth; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;




 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct v4l2_subdev* FUNC_3 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_4 (struct soc_camera_device*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int FUNC_6 (int*,int,int,int,int*,int,int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct soc_camera_device *VAR_3,
     struct v4l2_format *VAR_4)
{
 const struct soc_camera_format_xlate *VAR_5;
 struct v4l2_pix_format *VAR_6 = &VAR_4->fmt.pix;
 struct v4l2_subdev *VAR_7 = FUNC_3(VAR_3);
 __u32 VAR_8 = VAR_6->pixelformat;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_5 = FUNC_4(VAR_3, VAR_8);
 if (!VAR_5) {
  FUNC_2(VAR_3->dev.parent, "Format %x not found\n", VAR_8);
  return -VAR_0;
 }



 FUNC_6(&VAR_6->width, 2, 2560, 1,
         &VAR_6->height, 4, 1920, 2, 0);

 VAR_9 = VAR_6->width;
 VAR_10 = VAR_6->height;

 VAR_6->bytesperline = VAR_6->width *
  FUNC_0(VAR_5->host_fmt->depth, 8);
 VAR_6->sizeimage = VAR_6->height * VAR_6->bytesperline;

 VAR_6->pixelformat = VAR_5->cam_fmt->fourcc;


 VAR_11 = FUNC_5(VAR_7, VAR_2, VAR_1, VAR_4);
 VAR_6->pixelformat = VAR_8;
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_8) {
 case 131:
 case 129:
 case 130:
 case 128:


  if (VAR_6->width < VAR_9 || VAR_6->height < VAR_10) {
   int VAR_12 = VAR_6->width, VAR_13 = VAR_6->height;
   VAR_6->width = 2560;
   VAR_6->height = 1920;
   VAR_11 = FUNC_5(VAR_7, VAR_2, VAR_1, VAR_4);
   if (VAR_11 < 0) {

    FUNC_1(VAR_3->dev.parent,
     "FIXME: try_fmt() returned %d\n", VAR_11);
    VAR_6->width = VAR_12;
    VAR_6->height = VAR_13;
   }
  }
  if (VAR_6->width > VAR_9)
   VAR_6->width = VAR_9;
  if (VAR_6->height > VAR_10)
   VAR_6->height = VAR_10;
 }

 return VAR_11;
}
