
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viodasd_device {int * dev; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {size_t unit_address; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct viodasd_device*) ;
 struct viodasd_device* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct vio_dev *VAR_2, const struct vio_device_id *VAR_3)
{
 struct viodasd_device *VAR_4 = &VAR_1[VAR_2->unit_address];

 VAR_4->dev = &VAR_2->dev;
 if (!FUNC_0(VAR_4))
  return -VAR_0;
 return 0;
}
