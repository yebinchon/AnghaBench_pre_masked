
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct queue_limits {int io_opt; scalar_t__ discard_granularity; } ;
struct TYPE_2__ {int discard_enabled; } ;
struct pool_c {TYPE_1__ adjusted_pf; struct pool* pool; } ;
struct pool {int sectors_per_block; } ;
struct dm_target {struct pool_c* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct queue_limits*,int ) ;
 int FUNC_1 (struct queue_limits*,int) ;
 int FUNC_2 (struct pool_c*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct pool_c*,struct queue_limits*) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct pool_c *VAR_3 = VAR_1->private;
 struct pool *VAR_4 = VAR_3->pool;
 uint64_t VAR_5 = VAR_2->io_opt >> VAR_0;





 if (VAR_5 < VAR_4->sectors_per_block ||
     FUNC_3(VAR_5, VAR_4->sectors_per_block)) {
  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2, VAR_4->sectors_per_block << VAR_0);
 }






 if (!VAR_3->adjusted_pf.discard_enabled) {






  VAR_2->discard_granularity = 0;
  return;
 }

 FUNC_2(VAR_3);

 FUNC_4(VAR_3, VAR_2);
}
