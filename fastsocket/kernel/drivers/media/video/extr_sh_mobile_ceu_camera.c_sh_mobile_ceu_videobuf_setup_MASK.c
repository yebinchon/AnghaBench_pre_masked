
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct soc_camera_device* priv_data; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {int user_width; int user_height; TYPE_2__ dev; TYPE_1__* current_fmt; } ;
struct sh_mobile_ceu_dev {int video_limit; } ;
struct TYPE_3__ {int depth; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 struct soc_camera_host* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_0,
     unsigned int *VAR_1,
     unsigned int *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_0->priv_data;
 struct soc_camera_host *VAR_4 = FUNC_2(VAR_3->dev.parent);
 struct sh_mobile_ceu_dev *VAR_5 = VAR_4->priv;
 int VAR_6 = (VAR_3->current_fmt->depth + 7) >> 3;

 *VAR_2 = FUNC_0(VAR_3->user_width * VAR_3->user_height *
      VAR_6);

 if (0 == *VAR_1)
  *VAR_1 = 2;

 if (VAR_5->video_limit) {
  while (*VAR_2 * *VAR_1 > VAR_5->video_limit)
   (*VAR_1)--;
 }

 FUNC_1(VAR_3->dev.parent, "count=%d, size=%d\n", *VAR_1, *VAR_2);

 return 0;
}
