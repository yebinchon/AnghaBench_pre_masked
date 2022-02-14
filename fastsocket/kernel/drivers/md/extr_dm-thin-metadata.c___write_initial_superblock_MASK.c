
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_disk_superblock {void* data_block_size; void* metadata_nr_blocks; void* metadata_block_size; void* device_details_root; void* data_mapping_root; scalar_t__ held_root; scalar_t__ trans_id; scalar_t__ time; void* version; void* magic; int uuid; scalar_t__ flags; } ;
struct dm_pool_metadata {int root; int details_root; int tm; int data_block_size; int data_sm; TYPE_1__* bdev; } ;
struct dm_block {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dm_pool_metadata*,struct thin_disk_superblock*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 struct thin_disk_superblock* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct dm_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct dm_pool_metadata*) ;
 int FUNC_10 (struct dm_pool_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_11(struct dm_pool_metadata *VAR_6)
{
 int VAR_7;
 struct dm_block *VAR_8;
 struct thin_disk_superblock *VAR_9;
 sector_t VAR_10 = FUNC_7(VAR_6->bdev->bd_inode) >> VAR_0;

 if (VAR_10 > VAR_3)
  VAR_10 = VAR_3;

 VAR_7 = FUNC_4(VAR_6->data_sm);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6->tm);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_10(VAR_6, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->flags = 0;
 FUNC_8(VAR_9->uuid, 0, sizeof(VAR_9->uuid));
 VAR_9->magic = FUNC_2(VAR_4);
 VAR_9->version = FUNC_1(VAR_5);
 VAR_9->time = 0;
 VAR_9->trans_id = 0;
 VAR_9->held_root = 0;

 FUNC_0(VAR_6, VAR_9);

 VAR_9->data_mapping_root = FUNC_2(VAR_6->root);
 VAR_9->device_details_root = FUNC_2(VAR_6->details_root);
 VAR_9->metadata_block_size = FUNC_1(VAR_2);
 VAR_9->metadata_nr_blocks = FUNC_2(VAR_10 >> VAR_1);
 VAR_9->data_block_size = FUNC_1(VAR_6->data_block_size);

 return FUNC_5(VAR_6->tm, VAR_8);
}
