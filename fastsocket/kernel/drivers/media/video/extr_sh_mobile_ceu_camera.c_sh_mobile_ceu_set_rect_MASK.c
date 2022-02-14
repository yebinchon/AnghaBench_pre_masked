
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_rect {unsigned int width; unsigned int height; unsigned int left; unsigned int top; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_2__ dev; TYPE_1__* current_fmt; struct sh_mobile_ceu_cam* host_priv; } ;
struct sh_mobile_ceu_dev {scalar_t__ is_interlaced; int is_16bit; scalar_t__ image_mode; } ;
struct sh_mobile_ceu_cam {struct v4l2_rect ceu_rect; } ;
struct TYPE_3__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_mobile_ceu_dev*,int ,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct soc_camera_device *VAR_4,
       unsigned int VAR_5,
       unsigned int VAR_6)
{
 struct soc_camera_host *VAR_7 = FUNC_3(VAR_4->dev.parent);
 struct sh_mobile_ceu_cam *VAR_8 = VAR_4->host_priv;
 struct v4l2_rect *VAR_9 = &VAR_8->ceu_rect;
 struct sh_mobile_ceu_dev *VAR_10 = VAR_7->priv;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 u32 VAR_18;

 FUNC_1(VAR_4->dev.parent, "Crop %ux%u@%u:%u\n",
  VAR_9->width, VAR_9->height, VAR_9->left, VAR_9->top);

 VAR_16 = VAR_9->left;
 VAR_17 = VAR_9->top;

 if (VAR_10->image_mode) {
  VAR_14 = VAR_9->width;
  if (!VAR_10->is_16bit) {
   VAR_14 *= 2;
   VAR_16 *= 2;
  }
  VAR_12 = VAR_13 = VAR_5;
 } else {
  unsigned int VAR_19 = (VAR_4->current_fmt->depth + 7) >> 3;

  VAR_12 = VAR_5 * VAR_19 / 2;

  if (!VAR_10->is_16bit)
   VAR_19 *= 2;

  VAR_14 = VAR_9->width * VAR_19 / 2;
  VAR_16 = VAR_16 * VAR_19 / 2;

  VAR_13 = VAR_12 * 2;
 }

 VAR_11 = VAR_6;
 VAR_15 = VAR_9->height;
 if (VAR_10->is_interlaced) {
  VAR_11 /= 2;
  VAR_15 /= 2;
  VAR_17 /= 2;
  VAR_13 *= 2;
 }


 VAR_18 = VAR_16 | (VAR_17 << 16);

 FUNC_2(VAR_4->dev.parent,
  "CAMOR 0x%x, CAPWR 0x%x, CFSZR 0x%x, CDWDR 0x%x\n", VAR_18,
  (VAR_15 << 16) | VAR_14, (VAR_11 << 16) | VAR_12,
  VAR_13);

 FUNC_0(VAR_10, VAR_0, VAR_18);
 FUNC_0(VAR_10, VAR_1, (VAR_15 << 16) | VAR_14);
 FUNC_0(VAR_10, VAR_3, (VAR_11 << 16) | VAR_12);
 FUNC_0(VAR_10, VAR_2, VAR_13);
}
