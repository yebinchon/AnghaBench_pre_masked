
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct soc_camera_device* priv_data; } ;
struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {unsigned int user_width; unsigned int user_height; TYPE_2__* current_fmt; TYPE_1__ dev; } ;
struct mx3_camera_dev {int * idmac_channel; } ;
struct TYPE_4__ {int depth; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_2, unsigned int *VAR_3,
         unsigned int *VAR_4)
{
 struct soc_camera_device *VAR_5 = VAR_2->priv_data;
 struct soc_camera_host *VAR_6 = FUNC_1(VAR_5->dev.parent);
 struct mx3_camera_dev *VAR_7 = VAR_6->priv;





 unsigned int VAR_8 = FUNC_0(VAR_5->current_fmt->depth, 8);

 if (!VAR_7->idmac_channel[0])
  return -VAR_0;

 *VAR_4 = VAR_5->user_width * VAR_5->user_height * VAR_8;

 if (!*VAR_3)
  *VAR_3 = 32;

 if (*VAR_4 * *VAR_3 > VAR_1 * 1024 * 1024)
  *VAR_3 = VAR_1 * 1024 * 1024 / *VAR_4;

 return 0;
}
