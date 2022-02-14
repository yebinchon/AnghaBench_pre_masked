
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int device_details_root; int data_mapping_root; int held_root; } ;
struct dm_pool_metadata {int tm; int metadata_sm; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct thin_disk_superblock* FUNC_2 (struct dm_block*) ;
 int FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *,struct dm_block**) ;
 int FUNC_6 (int ,struct dm_block*) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (struct dm_pool_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_9(struct dm_pool_metadata *VAR_2)
{
 int VAR_3;
 struct thin_disk_superblock *VAR_4;
 struct dm_block *VAR_5, *VAR_6;
 dm_block_t VAR_7;

 VAR_3 = FUNC_8(VAR_2, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_2(VAR_5);
 VAR_7 = FUNC_7(VAR_4->held_root);
 VAR_4->held_root = FUNC_1(0);

 FUNC_3(VAR_5);

 if (!VAR_7) {
  FUNC_0("No pool metadata snapshot found: nothing to release.");
  return -VAR_0;
 }

 VAR_3 = FUNC_5(VAR_2->tm, VAR_7, &VAR_1, &VAR_6);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_2(VAR_6);
 FUNC_4(VAR_2->metadata_sm, FUNC_7(VAR_4->data_mapping_root));
 FUNC_4(VAR_2->metadata_sm, FUNC_7(VAR_4->device_details_root));
 FUNC_4(VAR_2->metadata_sm, VAR_7);

 return FUNC_6(VAR_2->tm, VAR_6);
}
