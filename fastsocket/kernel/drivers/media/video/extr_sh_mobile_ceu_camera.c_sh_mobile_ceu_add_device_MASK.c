
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct soc_camera_host {TYPE_2__ v4l2_dev; struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {int devnum; TYPE_1__ dev; } ;
struct sh_mobile_ceu_dev {struct soc_camera_device* icd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mobile_ceu_dev*,int ) ;
 int FUNC_1 (struct sh_mobile_ceu_dev*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct soc_camera_host* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_5(VAR_3->dev.parent);
 struct sh_mobile_ceu_dev *VAR_5 = VAR_4->priv;

 if (VAR_5->icd)
  return -VAR_2;

 FUNC_2(VAR_3->dev.parent,
   "SuperH Mobile CEU driver attached to camera %d\n",
   VAR_3->devnum);

 FUNC_4(VAR_4->v4l2_dev.dev);

 FUNC_1(VAR_5, VAR_0, 1 << 16);
 while (FUNC_0(VAR_5, VAR_1) & 1)
  FUNC_3(1);

 VAR_5->icd = VAR_3;

 return 0;
}
