
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int devnum; TYPE_1__ dev; } ;
struct mx3_camera_dev {struct soc_camera_device* icd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mx3_camera_dev*,struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_1)
{
 struct soc_camera_host *VAR_2 = FUNC_2(VAR_1->dev.parent);
 struct mx3_camera_dev *VAR_3 = VAR_2->priv;

 if (VAR_3->icd)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_1);

 VAR_3->icd = VAR_1;

 FUNC_0(VAR_1->dev.parent, "MX3 Camera driver attached to camera %d\n",
   VAR_1->devnum);

 return 0;
}
