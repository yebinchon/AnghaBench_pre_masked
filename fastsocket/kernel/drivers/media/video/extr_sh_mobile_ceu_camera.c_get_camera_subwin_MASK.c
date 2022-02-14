
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int left; int height; int top; } ;
struct v4l2_pix_format {int width; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct TYPE_3__ {struct device* parent; } ;
struct soc_camera_device {TYPE_1__ dev; struct sh_mobile_ceu_cam* host_priv; } ;
struct sh_mobile_ceu_cam {struct v4l2_rect ceu_rect; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int,...) ;
 int VAR_1 ;
 void* FUNC_1 (int,unsigned int) ;
 struct v4l2_subdev* FUNC_2 (struct soc_camera_device*) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_3,
        struct v4l2_rect *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 struct sh_mobile_ceu_cam *VAR_7 = VAR_3->host_priv;
 struct v4l2_rect *VAR_8 = &VAR_7->ceu_rect;

 if (!VAR_8->width) {
  struct v4l2_subdev *VAR_9 = FUNC_2(VAR_3);
  struct device *VAR_10 = VAR_3->dev.parent;
  struct v4l2_format VAR_11;
  struct v4l2_pix_format *VAR_12 = &VAR_11.fmt.pix;
  int VAR_13;


  VAR_11.type = VAR_0;

  VAR_13 = FUNC_3(VAR_9, VAR_2, VAR_1, &VAR_11);
  if (VAR_13 < 0)
   return VAR_13;

  FUNC_0(VAR_10, "camera fmt %ux%u\n", VAR_12->width, VAR_12->height);

  if (VAR_12->width > 2560) {
   VAR_8->width = 2560;
   VAR_8->left = (VAR_12->width - 2560) / 2;
  } else {
   VAR_8->width = VAR_12->width;
   VAR_8->left = 0;
  }

  if (VAR_12->height > 1920) {
   VAR_8->height = 1920;
   VAR_8->top = (VAR_12->height - 1920) / 2;
  } else {
   VAR_8->height = VAR_12->height;
   VAR_8->top = 0;
  }

  FUNC_0(VAR_10, "initialised CEU rect %ux%u@%u:%u\n",
   VAR_8->width, VAR_8->height,
   VAR_8->left, VAR_8->top);
 }

 VAR_4->width = FUNC_1(VAR_8->width, VAR_5);
 VAR_4->left = FUNC_1(VAR_8->left, VAR_5);
 VAR_4->height = FUNC_1(VAR_8->height, VAR_6);
 VAR_4->top = FUNC_1(VAR_8->top, VAR_6);

 return 0;
}
