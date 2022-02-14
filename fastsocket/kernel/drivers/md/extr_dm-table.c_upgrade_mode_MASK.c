
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct TYPE_3__ {int mode; TYPE_2__* bdev; } ;
struct dm_dev_internal {TYPE_1__ dm_dev; } ;
typedef int fmode_t ;
struct TYPE_4__ {int bd_dev; } ;


 int FUNC_0 (struct dm_dev_internal*,struct mapped_device*) ;
 int FUNC_1 (struct dm_dev_internal*,int ,struct mapped_device*) ;

__attribute__((used)) static int FUNC_2(struct dm_dev_internal *VAR_0, fmode_t VAR_1,
   struct mapped_device *VAR_2)
{
 int VAR_3;
 struct dm_dev_internal VAR_4, VAR_5;

 VAR_4 = VAR_5 = *VAR_0;

 VAR_4.dm_dev.mode |= VAR_1;
 VAR_4.dm_dev.bdev = ((void*)0);

 VAR_3 = FUNC_1(&VAR_4, VAR_0->dm_dev.bdev->bd_dev, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->dm_dev.mode |= VAR_1;
 FUNC_0(&VAR_5, VAR_2);

 return 0;
}
