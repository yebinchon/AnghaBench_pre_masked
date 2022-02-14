
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ll_disk {int (* load_ie ) (struct ll_disk*,int ,struct disk_index_entry*) ;int (* save_ie ) (struct ll_disk*,int ,struct disk_index_entry*) ;int nr_allocated; int ref_count_root; int ref_count_info; int tm; int entries_per_block; } ;
struct dm_block {int dummy; } ;
struct disk_index_entry {void* none_free_before; int nr_free; int blocknr; } ;
typedef enum allocation_event { ____Placeholder_allocation_event } allocation_event ;
typedef int dm_block_t ;
typedef void* __le32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct dm_block*) ;
 int FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int *,int ,int *,void**,int *) ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_9 (int ,struct dm_block*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct ll_disk*,int ,int*) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (void*,int,int) ;
 int FUNC_18 (struct ll_disk*,int ,struct disk_index_entry*) ;
 int FUNC_19 (struct ll_disk*,int ,struct disk_index_entry*) ;

__attribute__((used)) static int FUNC_20(struct ll_disk *VAR_3, dm_block_t VAR_4,
   int (*VAR_5)(void *VAR_6, uint32_t VAR_7, uint32_t *VAR_8),
   void *VAR_9, enum allocation_event *VAR_10)
{
 int VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 struct dm_block *VAR_15;
 dm_block_t VAR_16 = VAR_4;
 struct disk_index_entry VAR_17;
 void *VAR_18;
 int VAR_19;

 VAR_12 = FUNC_10(VAR_16, VAR_3->entries_per_block);
 VAR_11 = VAR_3->load_ie(VAR_3, VAR_16, &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_3->tm, FUNC_13(VAR_17.blocknr),
          &VAR_2, &VAR_15, &VAR_19);
 if (VAR_11 < 0) {
  FUNC_0("dm_tm_shadow_block() failed");
  return VAR_11;
 }
 VAR_17.blocknr = FUNC_3(FUNC_5(VAR_15));

 VAR_18 = FUNC_4(VAR_15);
 VAR_13 = FUNC_16(VAR_18, VAR_12);

 if (VAR_13 > 2) {
  VAR_11 = FUNC_15(VAR_3, VAR_4, &VAR_13);
  if (VAR_11 < 0) {
   FUNC_9(VAR_3->tm, VAR_15);
   return VAR_11;
  }
 }

 VAR_11 = VAR_5(VAR_9, VAR_13, &VAR_14);
 if (VAR_11) {
  FUNC_9(VAR_3->tm, VAR_15);
  return VAR_11;
 }

 if (VAR_14 <= 2) {
  FUNC_17(VAR_18, VAR_12, VAR_14);

  VAR_11 = FUNC_9(VAR_3->tm, VAR_15);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_13 > 2) {
   VAR_11 = FUNC_7(&VAR_3->ref_count_info,
         VAR_3->ref_count_root,
         &VAR_4, &VAR_3->ref_count_root);
   if (VAR_11)
    return VAR_11;
  }

 } else {
  __le32 VAR_20 = FUNC_2(VAR_14);

  FUNC_17(VAR_18, VAR_12, 3);
  VAR_11 = FUNC_9(VAR_3->tm, VAR_15);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_1(&VAR_20);
  VAR_11 = FUNC_6(&VAR_3->ref_count_info, VAR_3->ref_count_root,
        &VAR_4, &VAR_20, &VAR_3->ref_count_root);
  if (VAR_11 < 0) {
   FUNC_0("ref count insert failed");
   return VAR_11;
  }
 }

 if (VAR_14 && !VAR_13) {
  *VAR_10 = VAR_0;
  VAR_3->nr_allocated++;
  FUNC_11(&VAR_17.nr_free, -1);
  if (FUNC_12(VAR_17.none_free_before) == VAR_12)
   VAR_17.none_free_before = FUNC_2(VAR_12 + 1);

 } else if (VAR_13 && !VAR_14) {
  *VAR_10 = VAR_1;
  VAR_3->nr_allocated--;
  FUNC_11(&VAR_17.nr_free, 1);
  VAR_17.none_free_before = FUNC_2(FUNC_14(FUNC_12(VAR_17.none_free_before), VAR_12));
 }

 return VAR_3->save_ie(VAR_3, VAR_16, &VAR_17);
}
