
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int endio_hook_pool; } ;
struct dm_thin_endio_hook {struct bio* bio; int * overwrite_mapping; int * all_io_entry; int * shared_read_entry; struct thin_c* tc; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 struct dm_thin_endio_hook* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct dm_thin_endio_hook *FUNC_1(struct thin_c *VAR_1, struct bio *VAR_2)
{
 struct pool *VAR_3 = VAR_1->pool;
 struct dm_thin_endio_hook *VAR_4 = FUNC_0(VAR_3->endio_hook_pool, VAR_0);

 VAR_4->tc = VAR_1;
 VAR_4->shared_read_entry = ((void*)0);
 VAR_4->all_io_entry = ((void*)0);
 VAR_4->overwrite_mapping = ((void*)0);
 VAR_4->bio = VAR_2;

 return VAR_4;
}
