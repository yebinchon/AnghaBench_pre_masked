
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_2__* current_fmt; TYPE_1__ dev; } ;
struct sh_mobile_ceu_dev {int dummy; } ;
struct TYPE_4__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct sh_mobile_ceu_dev*,int ,int) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_3,
      struct v4l2_control *VAR_4)
{
 struct soc_camera_host *VAR_5 = FUNC_1(VAR_3->dev.parent);
 struct sh_mobile_ceu_dev *VAR_6 = VAR_5->priv;

 switch (VAR_4->id) {
 case 132:
  switch (VAR_3->current_fmt->fourcc) {
  case 131:
  case 129:
  case 130:
  case 128:
   FUNC_0(VAR_6, VAR_0, !VAR_4->value);
   return 0;
  }
  return -VAR_1;
 }
 return -VAR_2;
}
