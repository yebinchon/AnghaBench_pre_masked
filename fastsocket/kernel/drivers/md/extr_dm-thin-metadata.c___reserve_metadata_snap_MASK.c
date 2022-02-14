
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int held_root; int device_details_root; int data_mapping_root; int metadata_space_map_root; int data_space_map_root; } ;
struct dm_pool_metadata {int tm; int metadata_sm; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct thin_disk_superblock* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block*) ;
 int FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_10 (int ,struct dm_block*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int) ;
 int VAR_2 ;
 int FUNC_13 (struct dm_pool_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_14(struct dm_pool_metadata *VAR_3)
{
 int VAR_4, VAR_5;
 struct thin_disk_superblock *VAR_6;
 struct dm_block *VAR_7, *VAR_8;
 dm_block_t VAR_9;




 FUNC_6(VAR_3->metadata_sm, VAR_1);
 VAR_4 = FUNC_9(VAR_3->tm, VAR_1,
          &VAR_2, &VAR_7, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_0(!VAR_5);

 VAR_9 = FUNC_4(VAR_7);
 VAR_6 = FUNC_3(VAR_7);

 if (FUNC_11(VAR_6->held_root)) {
  FUNC_1("Pool metadata snapshot already exists: release this before taking another.");

  FUNC_7(VAR_3->tm, VAR_9);
  FUNC_10(VAR_3->tm, VAR_7);
  return -VAR_0;
 }




 FUNC_12(&VAR_6->data_space_map_root, 0,
        sizeof(VAR_6->data_space_map_root));
 FUNC_12(&VAR_6->metadata_space_map_root, 0,
        sizeof(VAR_6->metadata_space_map_root));




 FUNC_8(VAR_3->tm, FUNC_11(VAR_6->data_mapping_root));
 FUNC_8(VAR_3->tm, FUNC_11(VAR_6->device_details_root));
 FUNC_10(VAR_3->tm, VAR_7);




 VAR_4 = FUNC_13(VAR_3, &VAR_8);
 if (VAR_4) {
  FUNC_7(VAR_3->tm, VAR_9);
  return VAR_4;
 }

 VAR_6 = FUNC_3(VAR_8);
 VAR_6->held_root = FUNC_2(VAR_9);
 FUNC_5(VAR_8);
 return 0;
}
