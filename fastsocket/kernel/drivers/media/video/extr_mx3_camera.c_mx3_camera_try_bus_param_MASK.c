
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_2__ dev; TYPE_1__* ops; } ;
struct mx3_camera_dev {int dummy; } ;
struct TYPE_3__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;} ;


 int FUNC_0 (int ,char*,unsigned int const,int) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct mx3_camera_dev*,unsigned int const,unsigned long*) ;
 struct soc_camera_host* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_0,
        const unsigned int VAR_1)
{
 struct soc_camera_host *VAR_2 = FUNC_5(VAR_0->dev.parent);
 struct mx3_camera_dev *VAR_3 = VAR_2->priv;
 unsigned long VAR_4, VAR_5;
 int VAR_6 = FUNC_4(VAR_3, VAR_1, &VAR_4);

 FUNC_0(VAR_0->dev.parent, "request bus width %d bit: %d\n", VAR_1, VAR_6);

 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_0->ops->query_bus_param(VAR_0);

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6 < 0)
  FUNC_1(VAR_0->dev.parent,
    "Flags incompatible: camera %lx, host %lx\n",
    VAR_5, VAR_4);

 return VAR_6;
}
