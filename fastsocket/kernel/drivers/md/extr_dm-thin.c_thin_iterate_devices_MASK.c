
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {int pool_dev; struct pool* pool; } ;
struct pool {int sectors_per_block; TYPE_1__* ti; } ;
struct dm_target {struct thin_c* private; } ;
typedef int sector_t ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int,void*) ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0,
    iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 sector_t VAR_3;
 struct thin_c *VAR_4 = VAR_0->private;
 struct pool *VAR_5 = VAR_4->pool;





 if (!VAR_5->ti)
  return 0;

 VAR_3 = VAR_5->ti->len;
 (void) FUNC_0(VAR_3, VAR_5->sectors_per_block);
 if (VAR_3)
  return VAR_1(VAR_0, VAR_4->pool_dev, 0, VAR_5->sectors_per_block * VAR_3, VAR_2);

 return 0;
}
