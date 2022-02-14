
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {TYPE_2__* ops; TYPE_1__ dev; } ;
struct pxa_camera_dev {int dummy; } ;
struct TYPE_4__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct soc_camera_device*) ;
 int FUNC_2 (struct pxa_camera_dev*,unsigned char,unsigned long*) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_1,
        unsigned char VAR_2)
{
 struct soc_camera_host *VAR_3 = FUNC_3(VAR_1->dev.parent);
 struct pxa_camera_dev *VAR_4 = VAR_3->priv;
 unsigned long VAR_5, VAR_6;
 int VAR_7 = FUNC_2(VAR_4, VAR_2, &VAR_5);

 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_1->ops->query_bus_param(VAR_1);

 return FUNC_0(VAR_6, VAR_5) ? 0 : -VAR_0;
}
