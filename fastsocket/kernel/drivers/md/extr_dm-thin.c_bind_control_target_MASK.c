
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct pool_c {int low_water_blocks; TYPE_1__ adjusted_pf; } ;
struct pool {int low_water_blocks; TYPE_1__ pf; struct dm_target* ti; } ;
struct dm_target {struct pool_c* private; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;


 int FUNC_0 (struct pool*) ;
 int FUNC_1 (struct pool*,int) ;

__attribute__((used)) static int FUNC_2(struct pool *VAR_0, struct dm_target *VAR_1)
{
 struct pool_c *VAR_2 = VAR_1->private;




 enum pool_mode VAR_3 = FUNC_0(VAR_0);
 enum pool_mode VAR_4 = VAR_2->adjusted_pf.mode;






 VAR_2->adjusted_pf.mode = VAR_3;

 VAR_0->ti = VAR_1;
 VAR_0->pf = VAR_2->adjusted_pf;
 VAR_0->low_water_blocks = VAR_2->low_water_blocks;

 FUNC_1(VAR_0, VAR_4);

 return 0;
}
