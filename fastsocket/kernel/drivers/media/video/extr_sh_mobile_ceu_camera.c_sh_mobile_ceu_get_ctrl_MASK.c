
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_control {int id; int value; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct sh_mobile_ceu_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct sh_mobile_ceu_dev*,int ) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_2,
      struct v4l2_control *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_1(VAR_2->dev.parent);
 struct sh_mobile_ceu_dev *VAR_5 = VAR_4->priv;
 u32 VAR_6;

 switch (VAR_3->id) {
 case 128:
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_3->value = VAR_6 ^ 1;
  return 0;
 }
 return -VAR_1;
}
