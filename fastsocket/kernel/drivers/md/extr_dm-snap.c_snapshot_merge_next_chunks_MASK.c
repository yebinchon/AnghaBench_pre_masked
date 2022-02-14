
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct dm_snapshot {int merge_failed; int num_merging_chunks; int kcopyd_client; int lock; scalar_t__ first_merging_chunk; TYPE_4__* store; TYPE_3__* cow; TYPE_2__* origin; int valid; int state_bits; } ;
struct dm_io_region {void* sector; int count; int bdev; } ;
typedef int sector_t ;
typedef scalar_t__ chunk_t ;
struct TYPE_9__ {int chunk_size; TYPE_1__* type; } ;
struct TYPE_8__ {int bdev; } ;
struct TYPE_7__ {int bdev; } ;
struct TYPE_6__ {int (* prepare_merge ) (TYPE_4__*,scalar_t__*,scalar_t__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dm_snapshot*,scalar_t__) ;
 int VAR_2 ;
 void* FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int ,struct dm_io_region*,int,struct dm_io_region*,int ,int ,struct dm_snapshot*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (struct dm_snapshot*) ;
 int FUNC_8 (int,void*) ;
 scalar_t__ FUNC_9 (struct dm_snapshot*,void*,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_4__*,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(struct dm_snapshot *VAR_4)
{
 int VAR_5, VAR_6;
 chunk_t VAR_7, VAR_8;
 struct dm_io_region VAR_9, VAR_10;
 sector_t VAR_11;
 uint64_t VAR_12;

 FUNC_0(!FUNC_12(VAR_0, &VAR_4->state_bits));
 if (FUNC_13(FUNC_12(VAR_1, &VAR_4->state_bits)))
  goto shut;




 if (!VAR_4->valid) {
  FUNC_1("Snapshot is invalid: can't merge");
  goto shut;
 }

 VAR_6 = VAR_4->store->type->prepare_merge(VAR_4->store, &VAR_7,
            &VAR_8);
 if (VAR_6 <= 0) {
  if (VAR_6 < 0) {
   FUNC_1("Read error in exception store: "
         "shutting down merge");
   FUNC_5(&VAR_4->lock);
   VAR_4->merge_failed = 1;
   FUNC_14(&VAR_4->lock);
  }
  goto shut;
 }


 VAR_7 = VAR_7 + 1 - VAR_6;
 VAR_8 = VAR_8 + 1 - VAR_6;





 VAR_11 = VAR_6 * VAR_4->store->chunk_size;

 VAR_10.bdev = VAR_4->origin->bdev;
 VAR_10.sector = FUNC_3(VAR_4->store, VAR_7);
 VAR_10.count = FUNC_8(VAR_11, FUNC_6(VAR_10.bdev) - VAR_10.sector);

 VAR_9.bdev = VAR_4->cow->bdev;
 VAR_9.sector = FUNC_3(VAR_4->store, VAR_8);
 VAR_9.count = VAR_10.count;
 VAR_12 = FUNC_10();
 while (FUNC_9(VAR_4, VAR_10.sector, VAR_11)) {
  FUNC_15(VAR_2,
      (FUNC_10() !=
       VAR_12));

  VAR_12 = FUNC_10();
 }

 FUNC_5(&VAR_4->lock);
 VAR_4->first_merging_chunk = VAR_7;
 VAR_4->num_merging_chunks = VAR_6;
 FUNC_14(&VAR_4->lock);


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_2(VAR_4, VAR_7 + VAR_5);

 FUNC_4(VAR_4->kcopyd_client, &VAR_9, 1, &VAR_10, 0, VAR_3, VAR_4);
 return;

shut:
 FUNC_7(VAR_4);
}
