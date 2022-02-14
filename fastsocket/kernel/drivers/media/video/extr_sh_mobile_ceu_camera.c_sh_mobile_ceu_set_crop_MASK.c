
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_pix_format {unsigned int width; unsigned int height; int colorspace; int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct v4l2_crop {struct v4l2_rect c; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_4__ {struct device* parent; } ;
struct soc_camera_device {unsigned int user_width; unsigned int user_height; TYPE_1__ dev; struct sh_mobile_ceu_cam* host_priv; } ;
struct sh_mobile_ceu_dev {int cflcr; scalar_t__ active; int is_interlaced; scalar_t__ image_mode; } ;
struct sh_mobile_ceu_cam {TYPE_3__* camera_fmt; struct v4l2_rect ceu_rect; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int colorspace; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (struct sh_mobile_ceu_dev*,int) ;
 int FUNC_2 (struct sh_mobile_ceu_dev*) ;
 int FUNC_3 (struct sh_mobile_ceu_dev*,int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_crop*,struct v4l2_crop*) ;
 int FUNC_5 (struct soc_camera_device*,struct v4l2_rect*,struct v4l2_rect*,struct v4l2_rect*,struct v4l2_format*,int) ;
 int FUNC_6 (struct device*,char*,int,int) ;
 int FUNC_7 (struct device*,char*,unsigned int,...) ;
 int FUNC_8 (struct soc_camera_device*,unsigned int*,unsigned int*) ;
 void* FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (struct soc_camera_device*,unsigned int,unsigned int) ;
 struct v4l2_subdev* FUNC_11 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct soc_camera_device *VAR_2,
      struct v4l2_crop *VAR_3)
{
 struct v4l2_rect *VAR_4 = &VAR_3->c;
 struct soc_camera_host *VAR_5 = FUNC_12(VAR_2->dev.parent);
 struct sh_mobile_ceu_dev *VAR_6 = VAR_5->priv;
 struct v4l2_crop VAR_7;
 struct sh_mobile_ceu_cam *VAR_8 = VAR_2->host_priv;
 struct v4l2_rect *VAR_9 = &VAR_7.c, *VAR_10 = &VAR_8->ceu_rect;
 struct v4l2_subdev *VAR_11 = FUNC_11(VAR_2);
 struct device *VAR_12 = VAR_2->dev.parent;
 struct v4l2_format VAR_13;
 struct v4l2_pix_format *VAR_14 = &VAR_13.fmt.pix;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18,
  VAR_19, VAR_20;
 u32 VAR_21, VAR_22;
 int VAR_23;


 VAR_23 = FUNC_8(VAR_2, &VAR_15, &VAR_16);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_7(VAR_12, "1: combined scales %u:%u\n", VAR_15, VAR_16);


 VAR_23 = FUNC_4(VAR_11, VAR_3, &VAR_7);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_7(VAR_12, "2: camera cropped to %ux%u@%u:%u\n",
  VAR_9->width, VAR_9->height,
  VAR_9->left, VAR_9->top);







 VAR_19 = FUNC_9(VAR_4->width, VAR_15);
 VAR_20 = FUNC_9(VAR_4->height, VAR_16);

 if (VAR_19 > 2560)
  VAR_19 = 2560;
 else if (VAR_19 < 2)
  VAR_19 = 2;

 if (VAR_20 > 1920)
  VAR_20 = 1920;
 else if (VAR_20 < 4)
  VAR_20 = 4;

 FUNC_7(VAR_12, "3: Adjusted output %ux%u\n", VAR_19, VAR_20);







 VAR_14->width = FUNC_9(VAR_9->width, VAR_15);
 VAR_14->height = FUNC_9(VAR_9->height, VAR_16);

 FUNC_7(VAR_12, "5: camera target %ux%u\n", VAR_14->width, VAR_14->height);


 VAR_14->pixelformat = VAR_8->camera_fmt->fourcc;
 VAR_14->colorspace = VAR_8->camera_fmt->colorspace;

 VAR_21 = FUNC_2(VAR_6);
 FUNC_6(VAR_12, "CAPSR 0x%x, CFLCR 0x%x\n", VAR_21, VAR_6->cflcr);


 VAR_4->left -= VAR_9->left;
 VAR_4->top -= VAR_9->top;

 VAR_13.type = VAR_1;

 VAR_23 = FUNC_5(VAR_2, VAR_9, VAR_4, VAR_10, &VAR_13,
      VAR_6->image_mode && !VAR_6->is_interlaced);

 FUNC_7(VAR_12, "6-9: %d\n", VAR_23);


 FUNC_10(VAR_2, VAR_19, VAR_20);

 FUNC_7(VAR_12, "10: CEU cropped to %ux%u@%u:%u\n",
  VAR_10->width, VAR_10->height,
  VAR_10->left, VAR_10->top);





 VAR_17 = FUNC_0(VAR_10->width, &VAR_19);
 VAR_18 = FUNC_0(VAR_10->height, &VAR_20);

 FUNC_7(VAR_12, "11: CEU scales %u:%u\n", VAR_17, VAR_18);


 VAR_22 = VAR_17 | (VAR_18 << 16);
 if (VAR_22 != VAR_6->cflcr) {
  VAR_6->cflcr = VAR_22;
  FUNC_3(VAR_6, VAR_0, VAR_22);
 }


 if (VAR_6->active)
  VAR_21 |= 1;
 FUNC_1(VAR_6, VAR_21);

 VAR_2->user_width = VAR_19;
 VAR_2->user_height = VAR_20;


 return VAR_23;
}
