
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_snapshot {TYPE_2__* store; TYPE_1__* cow; } ;
struct dm_exception {scalar_t__ old_chunk; int new_chunk; } ;
struct bio {int bi_sector; int bi_bdev; } ;
typedef scalar_t__ chunk_t ;
struct TYPE_4__ {int chunk_mask; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_snapshot *VAR_0, struct dm_exception *VAR_1,
       struct bio *VAR_2, chunk_t VAR_3)
{
 VAR_2->bi_bdev = VAR_0->cow->bdev;
 VAR_2->bi_sector = FUNC_0(VAR_0->store,
      FUNC_1(VAR_1->new_chunk) +
      (VAR_3 - VAR_1->old_chunk)) +
      (VAR_2->bi_sector &
       VAR_0->store->chunk_mask);
}
