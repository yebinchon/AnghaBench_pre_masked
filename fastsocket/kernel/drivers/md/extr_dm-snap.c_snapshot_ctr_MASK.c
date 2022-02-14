
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dm_target {char* error; unsigned int num_flush_requests; struct dm_snapshot* private; int table; } ;
struct dm_snapshot {int valid; int origin; int cow; TYPE_2__* store; int complete; int pending; int kcopyd_client; void* pending_pool; void* tracked_chunk_pool; int tracked_chunk_lock; int * tracked_chunk_hash; int bios_queued_during_merge; scalar_t__ num_merging_chunks; scalar_t__ first_merging_chunk; scalar_t__ merge_failed; scalar_t__ state_bits; int pe_lock; int list; int lock; int pending_exceptions_count; scalar_t__ active; struct dm_target* ti; } ;
typedef int fmode_t ;
struct TYPE_6__ {scalar_t__ chunk_size; TYPE_1__* type; } ;
struct TYPE_5__ {int (* read_metadata ) (TYPE_2__*,int ,void*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (struct dm_target*,unsigned int,char**,struct dm_snapshot*,unsigned int*,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct dm_target*,char*,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int FUNC_13 (struct dm_target*,int ) ;
 int FUNC_14 (struct dm_target*,scalar_t__) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct dm_target*) ;
 int VAR_9 ;
 scalar_t__ FUNC_17 (struct dm_snapshot*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct dm_snapshot*) ;
 struct dm_snapshot* FUNC_20 (int,int ) ;
 void* FUNC_21 (int ,int ) ;
 int FUNC_22 (void*) ;
 int VAR_10 ;
 int FUNC_23 (struct dm_snapshot*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_2__*,int ,void*) ;
 int VAR_11 ;
 int FUNC_26 (struct dm_snapshot*) ;

__attribute__((used)) static int FUNC_27(struct dm_target *VAR_12, unsigned int VAR_13, char **VAR_14)
{
 struct dm_snapshot *VAR_15;
 int VAR_16;
 int VAR_17 = -VAR_1;
 char *VAR_18, *VAR_19;
 unsigned VAR_20, VAR_21 = 1;
 fmode_t VAR_22 = VAR_3;

 if (VAR_13 != 4) {
  VAR_12->error = "requires exactly 4 arguments";
  VAR_17 = -VAR_1;
  goto bad;
 }

 if (FUNC_16(VAR_12)) {
  VAR_21 = 2;
  VAR_22 = VAR_4;
 }

 VAR_15 = FUNC_20(sizeof(*VAR_15), VAR_5);
 if (!VAR_15) {
  VAR_12->error = "Cannot allocate private snapshot structure";
  VAR_17 = -VAR_2;
  goto bad;
 }

 VAR_18 = VAR_14[0];
 VAR_14++;
 VAR_13--;

 VAR_17 = FUNC_10(VAR_12, VAR_18, VAR_22, &VAR_15->origin);
 if (VAR_17) {
  VAR_12->error = "Cannot get origin device";
  goto bad_origin;
 }

 VAR_19 = VAR_14[0];
 VAR_14++;
 VAR_13--;

 VAR_17 = FUNC_10(VAR_12, VAR_19, FUNC_15(VAR_12->table), &VAR_15->cow);
 if (VAR_17) {
  VAR_12->error = "Cannot get COW device";
  goto bad_cow;
 }

 VAR_17 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15, &VAR_20, &VAR_15->store);
 if (VAR_17) {
  VAR_12->error = "Couldn't create exception store";
  VAR_17 = -VAR_1;
  goto bad_store;
 }

 VAR_14 += VAR_20;
 VAR_13 -= VAR_20;

 VAR_15->ti = VAR_12;
 VAR_15->valid = 1;
 VAR_15->active = 0;
 FUNC_5(&VAR_15->pending_exceptions_count, 0);
 FUNC_18(&VAR_15->lock);
 FUNC_2(&VAR_15->list);
 FUNC_24(&VAR_15->pe_lock);
 VAR_15->state_bits = 0;
 VAR_15->merge_failed = 0;
 VAR_15->first_merging_chunk = 0;
 VAR_15->num_merging_chunks = 0;
 FUNC_6(&VAR_15->bios_queued_during_merge);


 if (FUNC_17(VAR_15)) {
  VAR_12->error = "Unable to allocate hash table space";
  VAR_17 = -VAR_2;
  goto bad_hash_tables;
 }

 VAR_15->kcopyd_client = FUNC_11(&VAR_8);
 if (FUNC_3(VAR_15->kcopyd_client)) {
  VAR_17 = FUNC_4(VAR_15->kcopyd_client);
  VAR_12->error = "Could not create kcopyd client";
  goto bad_kcopyd;
 }

 VAR_15->pending_pool = FUNC_21(VAR_6, VAR_10);
 if (!VAR_15->pending_pool) {
  VAR_12->error = "Could not allocate mempool for pending exceptions";
  VAR_17 = -VAR_2;
  goto bad_pending_pool;
 }

 VAR_15->tracked_chunk_pool = FUNC_21(VAR_6,
        VAR_11);
 if (!VAR_15->tracked_chunk_pool) {
  VAR_12->error = "Could not allocate tracked_chunk mempool for "
       "tracking reads";
  goto bad_tracked_chunk_pool;
 }

 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
  FUNC_1(&VAR_15->tracked_chunk_hash[VAR_16]);

 FUNC_24(&VAR_15->tracked_chunk_lock);

 VAR_12->private = VAR_15;
 VAR_12->num_flush_requests = VAR_21;



 VAR_17 = FUNC_23(VAR_15);
 if (VAR_17 == -VAR_2) {
  VAR_12->error = "Snapshot origin struct allocation failed";
  goto bad_load_and_register;
 } else if (VAR_17 < 0) {

  goto bad_load_and_register;
 }







 if (VAR_17 > 0) {
  VAR_15->store->chunk_size = 0;
  return 0;
 }

 VAR_17 = VAR_15->store->type->read_metadata(VAR_15->store, VAR_7,
       (void *)VAR_15);
 if (VAR_17 < 0) {
  VAR_12->error = "Failed to read snapshot metadata";
  goto bad_read_metadata;
 } else if (VAR_17 > 0) {
  VAR_15->valid = 0;
  FUNC_0("Snapshot is marked invalid.");
 }

 if (!VAR_15->store->chunk_size) {
  VAR_12->error = "Chunk size not set";
  goto bad_read_metadata;
 }

 VAR_17 = FUNC_14(VAR_12, VAR_15->store->chunk_size);
 if (VAR_17)
  goto bad_read_metadata;

 return 0;

bad_read_metadata:
 FUNC_26(VAR_15);

bad_load_and_register:
 FUNC_22(VAR_15->tracked_chunk_pool);

bad_tracked_chunk_pool:
 FUNC_22(VAR_15->pending_pool);

bad_pending_pool:
 FUNC_12(VAR_15->kcopyd_client);

bad_kcopyd:
 FUNC_9(&VAR_15->pending, VAR_10);
 FUNC_9(&VAR_15->complete, VAR_9);

bad_hash_tables:
 FUNC_8(VAR_15->store);

bad_store:
 FUNC_13(VAR_12, VAR_15->cow);

bad_cow:
 FUNC_13(VAR_12, VAR_15->origin);

bad_origin:
 FUNC_19(VAR_15);

bad:
 return VAR_17;
}
