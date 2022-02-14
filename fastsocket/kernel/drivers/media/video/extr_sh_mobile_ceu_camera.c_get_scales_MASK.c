
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_crop {int c; int type; } ;
struct soc_camera_device {int user_height; int user_width; struct sh_mobile_ceu_cam* host_priv; } ;
struct TYPE_2__ {int height; int width; } ;
struct sh_mobile_ceu_cam {TYPE_1__ ceu_rect; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int FUNC_2 (struct v4l2_subdev*,int *,unsigned int*,unsigned int*) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 struct v4l2_subdev* FUNC_4 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_5(struct soc_camera_device *VAR_1,
        unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct sh_mobile_ceu_cam *VAR_4 = VAR_1->host_priv;
 struct v4l2_subdev *VAR_5 = FUNC_4(VAR_1);
 struct v4l2_crop VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_6.type = VAR_0;

 VAR_9 = FUNC_1(VAR_5, &VAR_6.c);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_5, &VAR_6.c, VAR_2, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_3(VAR_4->ceu_rect.width, *VAR_2);
 VAR_8 = FUNC_3(VAR_4->ceu_rect.height, *VAR_3);

 *VAR_2 = FUNC_0(VAR_7, VAR_1->user_width);
 *VAR_3 = FUNC_0(VAR_8, VAR_1->user_height);

 return 0;
}
