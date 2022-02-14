
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_2__* ops; TYPE_1__ dev; } ;
struct sh_mobile_ceu_dev {int dummy; } ;
struct TYPE_4__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sh_mobile_ceu_dev*) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_1)
{
 struct soc_camera_host *VAR_2 = FUNC_3(VAR_1->dev.parent);
 struct sh_mobile_ceu_dev *VAR_3 = VAR_2->priv;
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_1->ops->query_bus_param(VAR_1);
 VAR_5 = FUNC_1(VAR_4,
             FUNC_0(VAR_3));
 if (!VAR_5)
  return -VAR_0;

 return 0;
}
