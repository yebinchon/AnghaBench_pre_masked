
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_devmap {int features; TYPE_1__* device; } ;
struct ccw_device {int dev; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int FUNC_1 (struct dasd_devmap*) ;
 int VAR_0 ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct ccw_device *VAR_1, int VAR_2, int VAR_3)
{
 struct dasd_devmap *VAR_4;

 VAR_4 = FUNC_2(FUNC_3(&VAR_1->dev));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(&VAR_0);
 if (VAR_3)
  VAR_4->features |= VAR_2;
 else
  VAR_4->features &= ~VAR_2;
 if (VAR_4->device)
  VAR_4->device->features = VAR_4->features;
 FUNC_5(&VAR_0);
 return 0;
}
