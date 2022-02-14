
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pool {int lock; } ;
struct dm_thin_new_mapping {int err; int prepared; TYPE_1__* tc; } ;
struct dm_thin_endio_hook {struct dm_thin_new_mapping* overwrite_mapping; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {struct dm_thin_endio_hook* ptr; } ;
struct TYPE_3__ {struct pool* pool; } ;


 int FUNC_0 (struct dm_thin_new_mapping*) ;
 TYPE_2__* FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct dm_thin_endio_hook *VAR_3 = FUNC_1(VAR_0)->ptr;
 struct dm_thin_new_mapping *VAR_4 = VAR_3->overwrite_mapping;
 struct pool *VAR_5 = VAR_4->tc->pool;

 VAR_4->err = VAR_1;

 FUNC_2(&VAR_5->lock, VAR_2);
 VAR_4->prepared = 1;
 FUNC_0(VAR_4);
 FUNC_3(&VAR_5->lock, VAR_2);
}
