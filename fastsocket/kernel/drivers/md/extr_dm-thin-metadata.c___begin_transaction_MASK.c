
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int data_block_size; int flags; int trans_id; int device_details_root; int data_mapping_root; int time; } ;
struct dm_pool_metadata {void* data_block_size; void* flags; void* trans_id; void* details_root; void* root; void* time; int bm; } ;
struct dm_block {int dummy; } ;


 int VAR_0 ;
 struct thin_disk_superblock* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ,int ,int *,struct dm_block**) ;
 int FUNC_2 (struct dm_block*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct dm_pool_metadata *VAR_2)
{
 int VAR_3;
 struct thin_disk_superblock *VAR_4;
 struct dm_block *VAR_5;





 VAR_3 = FUNC_1(VAR_2->bm, VAR_0,
       &VAR_1, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_5);
 VAR_2->time = FUNC_3(VAR_4->time);
 VAR_2->root = FUNC_4(VAR_4->data_mapping_root);
 VAR_2->details_root = FUNC_4(VAR_4->device_details_root);
 VAR_2->trans_id = FUNC_4(VAR_4->trans_id);
 VAR_2->flags = FUNC_3(VAR_4->flags);
 VAR_2->data_block_size = FUNC_3(VAR_4->data_block_size);

 FUNC_2(VAR_5);
 return 0;
}
