
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {int td; struct pool* pool; } ;
struct pool {int shared_read_ds; } ;
struct dm_thin_lookup_result {int block; } ;
struct dm_thin_endio_hook {int shared_read_entry; } ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {scalar_t__ bi_size; } ;
typedef int dm_block_t ;
struct TYPE_2__ {struct dm_thin_endio_hook* ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct pool*,struct dm_cell_key*,struct bio*,struct dm_bio_prison_cell**) ;
 int FUNC_2 (struct thin_c*,struct bio*,int ,struct dm_cell_key*,struct dm_thin_lookup_result*,struct dm_bio_prison_cell*) ;
 int FUNC_3 (int ,int ,struct dm_cell_key*) ;
 int FUNC_4 (struct thin_c*,struct dm_bio_prison_cell*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (struct bio*) ;
 int FUNC_7 (struct pool*,struct bio*) ;
 int FUNC_8 (struct thin_c*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_9(struct thin_c *VAR_1, struct bio *VAR_2,
          dm_block_t VAR_3,
          struct dm_thin_lookup_result *VAR_4)
{
 struct dm_bio_prison_cell *VAR_5;
 struct pool *VAR_6 = VAR_1->pool;
 struct dm_cell_key VAR_7;





 FUNC_3(VAR_1->td, VAR_4->block, &VAR_7);
 if (FUNC_1(VAR_6, &VAR_7, VAR_2, &VAR_5))
  return;

 if (FUNC_0(VAR_2) == VAR_0 && VAR_2->bi_size)
  FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_4, VAR_5);
 else {
  struct dm_thin_endio_hook *VAR_8 = FUNC_6(VAR_2)->ptr;

  VAR_8->shared_read_entry = FUNC_5(VAR_6->shared_read_ds);
  FUNC_7(VAR_6, VAR_2);
  FUNC_4(VAR_1, VAR_5);

  FUNC_8(VAR_1, VAR_2, VAR_4->block);
 }
}
