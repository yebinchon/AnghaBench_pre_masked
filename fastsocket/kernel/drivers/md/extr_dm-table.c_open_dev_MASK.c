
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct TYPE_2__ {struct block_device* bdev; int mode; } ;
struct dm_dev_internal {TYPE_1__ dm_dev; } ;
struct block_device {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*,char*,int ) ;
 int FUNC_4 (struct block_device*,int ) ;
 int FUNC_5 (struct mapped_device*) ;
 struct block_device* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct dm_dev_internal *VAR_0, dev_t VAR_1,
      struct mapped_device *VAR_2)
{
 static char *VAR_3 = "I belong to device-mapper";
 struct block_device *VAR_4;

 int VAR_5;

 FUNC_0(VAR_0->dm_dev.bdev);

 VAR_4 = FUNC_6(VAR_1, VAR_0->dm_dev.mode);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_3, FUNC_5(VAR_2));
 if (VAR_5)
  FUNC_4(VAR_4, VAR_0->dm_dev.mode);
 else
  VAR_0->dm_dev.bdev = VAR_4;
 return VAR_5;
}
