
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_thin_new_mapping {TYPE_2__* tc; int list; int cell; int saved_bi_end_io; TYPE_1__* bio; } ;
struct TYPE_6__ {int mapping_pool; } ;
struct TYPE_5__ {TYPE_3__* pool; } ;
struct TYPE_4__ {int bi_end_io; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_thin_new_mapping*,int ) ;

__attribute__((used)) static void FUNC_3(struct dm_thin_new_mapping *VAR_0)
{
 if (VAR_0->bio)
  VAR_0->bio->bi_end_io = VAR_0->saved_bi_end_io;
 FUNC_0(VAR_0->tc->pool, VAR_0->cell);
 FUNC_1(&VAR_0->list);
 FUNC_2(VAR_0, VAR_0->tc->pool->mapping_pool);
}
