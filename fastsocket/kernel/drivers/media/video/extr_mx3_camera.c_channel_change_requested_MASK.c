
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int user_width; int user_height; TYPE_1__ dev; } ;
struct mx3_camera_dev {struct idmac_channel** idmac_channel; } ;
struct idmac_channel {int dummy; } ;


 struct soc_camera_host* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct soc_camera_device *VAR_0,
         struct v4l2_rect *VAR_1)
{
 struct soc_camera_host *VAR_2 = FUNC_0(VAR_0->dev.parent);
 struct mx3_camera_dev *VAR_3 = VAR_2->priv;
 struct idmac_channel *VAR_4 = VAR_3->idmac_channel[0];


 return VAR_4 && VAR_1->width * VAR_1->height >
  VAR_0->user_width * VAR_0->user_height;
}
