
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {void* flags; void* trans_id; void* device_details_root; void* data_mapping_root; void* time; } ;
struct dm_pool_metadata {int tm; int flags; int trans_id; int details_root; int root; int time; int data_sm; int metadata_sm; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_pool_metadata*) ;
 int FUNC_2 (struct dm_pool_metadata*,struct thin_disk_superblock*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 struct thin_disk_superblock* FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,size_t*) ;
 int FUNC_8 (int ,struct dm_block*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dm_pool_metadata*) ;
 int FUNC_11 (struct dm_pool_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_12(struct dm_pool_metadata *VAR_0)
{
 int VAR_1;
 size_t VAR_2, VAR_3;
 struct thin_disk_superblock *VAR_4;
 struct dm_block *VAR_5;




 FUNC_0(sizeof(struct thin_disk_superblock) > 512);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_6(VAR_0->data_sm);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_9(VAR_0->tm);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_7(VAR_0->metadata_sm, &VAR_2);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_7(VAR_0->data_sm, &VAR_3);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_10(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_11(VAR_0, &VAR_5);
 if (VAR_1)
  return VAR_1;

 VAR_4 = FUNC_5(VAR_5);
 VAR_4->time = FUNC_3(VAR_0->time);
 VAR_4->data_mapping_root = FUNC_4(VAR_0->root);
 VAR_4->device_details_root = FUNC_4(VAR_0->details_root);
 VAR_4->trans_id = FUNC_4(VAR_0->trans_id);
 VAR_4->flags = FUNC_3(VAR_0->flags);

 FUNC_2(VAR_0, VAR_4);

 return FUNC_8(VAR_0->tm, VAR_5);
}
