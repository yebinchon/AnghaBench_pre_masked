
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ports_device {TYPE_1__* vdev; } ;
struct TYPE_2__ {int* features; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct ports_device *VAR_1)
{




 if (!VAR_1->vdev)
  return 0;
 return VAR_1->vdev->features[0] & (1 << VAR_0);
}
