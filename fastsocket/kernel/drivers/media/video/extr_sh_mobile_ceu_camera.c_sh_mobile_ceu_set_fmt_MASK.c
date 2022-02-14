
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {void* height; void* width; int top; int left; } ;
struct v4l2_pix_format {int pixelformat; int field; void* height; void* width; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_crop {int type; struct v4l2_rect c; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct soc_camera_format_xlate {TYPE_3__* cam_fmt; int host_fmt; int buswidth; } ;
struct TYPE_5__ {struct device* parent; } ;
struct soc_camera_device {int current_fmt; int buswidth; TYPE_2__ dev; struct sh_mobile_ceu_cam* host_priv; } ;
struct sh_mobile_ceu_dev {int cflcr; int is_interlaced; int image_mode; } ;
struct sh_mobile_ceu_cam {struct v4l2_rect ceu_rect; TYPE_3__* camera_fmt; } ;
struct device {int dummy; } ;
typedef int __u32 ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (void*,void*) ;
 int FUNC_1 (void*,void**) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_rect*) ;
 int FUNC_3 (struct soc_camera_device*,struct v4l2_rect*,struct v4l2_rect*,struct v4l2_rect*,struct v4l2_format*,int) ;
 int FUNC_4 (struct device*,char*,int,void*,void*,void*,void*) ;
 int FUNC_5 (struct device*,char*,unsigned int,...) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct v4l2_subdev*,struct v4l2_rect*,unsigned int*,unsigned int*) ;
 int FUNC_8 (struct soc_camera_device*,struct v4l2_rect*,unsigned int,unsigned int) ;
 void* FUNC_9 (void*,int) ;
 struct v4l2_subdev* FUNC_10 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_11 (struct soc_camera_device*,int) ;
 struct soc_camera_host* FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct soc_camera_device *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_12(VAR_2->dev.parent);
 struct sh_mobile_ceu_dev *VAR_5 = VAR_4->priv;
 struct sh_mobile_ceu_cam *VAR_6 = VAR_2->host_priv;
 struct v4l2_pix_format *VAR_7 = &VAR_3->fmt.pix;
 struct v4l2_format VAR_8 = *VAR_3;
 struct v4l2_pix_format *VAR_9 = &VAR_8.fmt.pix;
 struct v4l2_subdev *VAR_10 = FUNC_10(VAR_2);
 struct device *VAR_11 = VAR_2->dev.parent;
 __u32 VAR_12 = VAR_7->pixelformat;
 const struct soc_camera_format_xlate *VAR_13;
 struct v4l2_crop VAR_14;
 struct v4l2_rect *VAR_15 = &VAR_14.c, VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 u16 VAR_20, VAR_21;
 int VAR_22;
 bool VAR_23, VAR_24;

 switch (VAR_7->field) {
 case 133:
  VAR_23 = 1;
  break;
 case 134:
 default:
  VAR_7->field = 132;

 case 132:
  VAR_23 = 0;
  break;
 }

 VAR_13 = FUNC_11(VAR_2, VAR_12);
 if (!VAR_13) {
  FUNC_6(VAR_11, "Format %x not found\n", VAR_12);
  return -VAR_0;
 }


 VAR_14.type = VAR_1;

 VAR_22 = FUNC_2(VAR_10, VAR_15);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_7(VAR_10, VAR_15, &VAR_18, &VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_5(VAR_11, "1: camera scales %u:%u\n", VAR_18, VAR_19);





 VAR_22 = FUNC_8(VAR_2, &VAR_16, VAR_18, VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_5(VAR_11, "2: subwin %ux%u@%u:%u\n",
  VAR_16.width, VAR_16.height,
  VAR_16.left, VAR_16.top);





 VAR_21 = FUNC_0(VAR_16.width, VAR_7->width);
 VAR_20 = FUNC_0(VAR_16.height, VAR_7->height);

 FUNC_5(VAR_11, "3: scales %u:%u\n", VAR_21, VAR_20);





 VAR_9->width = FUNC_9(VAR_15->width, VAR_21);
 VAR_9->height = FUNC_9(VAR_15->height, VAR_20);
 VAR_9->pixelformat = VAR_13->cam_fmt->fourcc;

 switch (VAR_12) {
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_24 = 1;
  break;
 default:
  VAR_24 = 0;
 }

 FUNC_5(VAR_11, "4: camera output %ux%u\n",
  VAR_9->width, VAR_9->height);


 VAR_22 = FUNC_3(VAR_2, VAR_15, &VAR_16, &VAR_17, &VAR_8,
      VAR_24 && !VAR_23);

 FUNC_5(VAR_11, "5-9: client scale %d\n", VAR_22);



 FUNC_4(VAR_11, "Camera %d fmt %ux%u, requested %ux%u\n",
  VAR_22, VAR_9->width, VAR_9->height, VAR_7->width, VAR_7->height);
 if (VAR_22 < 0)
  return VAR_22;




 if (VAR_7->width > VAR_9->width)
  VAR_7->width = VAR_9->width;
 if (VAR_7->width > VAR_17.width)
  VAR_7->width = VAR_17.width;

 if (VAR_7->height > VAR_9->height)
  VAR_7->height = VAR_9->height;
 if (VAR_7->height > VAR_17.height)
  VAR_7->height = VAR_17.height;


 VAR_21 = FUNC_1(VAR_17.width, &VAR_7->width);
 VAR_20 = FUNC_1(VAR_17.height, &VAR_7->height);

 FUNC_5(VAR_11, "10: W: %u : 0x%x = %u, H: %u : 0x%x = %u\n",
  VAR_17.width, VAR_21, VAR_7->width,
  VAR_17.height, VAR_20, VAR_7->height);

 VAR_5->cflcr = VAR_21 | (VAR_20 << 16);

 VAR_2->buswidth = VAR_13->buswidth;
 VAR_2->current_fmt = VAR_13->host_fmt;
 VAR_6->camera_fmt = VAR_13->cam_fmt;
 VAR_6->ceu_rect = VAR_17;

 VAR_5->is_interlaced = VAR_23;
 VAR_5->image_mode = VAR_24;

 return 0;
}
