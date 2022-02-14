
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int size; int * equal; int * dec; int * inc; } ;
struct TYPE_8__ {int levels; TYPE_3__ value_type; struct dm_transaction_manager* tm; } ;
struct TYPE_5__ {int size; int * equal; int * dec; int * inc; } ;
struct TYPE_6__ {int levels; TYPE_1__ value_type; struct dm_transaction_manager* tm; } ;
struct ll_disk {int block_size; int entries_per_block; int bitmap_index_changed; scalar_t__ ref_count_root; scalar_t__ bitmap_root; scalar_t__ nr_blocks; TYPE_4__ ref_count_info; TYPE_2__ bitmap_info; struct dm_transaction_manager* tm; } ;
struct dm_transaction_manager {int dummy; } ;
struct disk_index_entry {int dummy; } ;
struct disk_bitmap_header {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_transaction_manager*) ;

__attribute__((used)) static int FUNC_3(struct ll_disk *VAR_2, struct dm_transaction_manager *VAR_3)
{
 VAR_2->tm = VAR_3;

 VAR_2->bitmap_info.tm = VAR_3;
 VAR_2->bitmap_info.levels = 1;






 VAR_2->bitmap_info.value_type.size = sizeof(struct disk_index_entry);
 VAR_2->bitmap_info.value_type.inc = ((void*)0);
 VAR_2->bitmap_info.value_type.dec = ((void*)0);
 VAR_2->bitmap_info.value_type.equal = ((void*)0);

 VAR_2->ref_count_info.tm = VAR_3;
 VAR_2->ref_count_info.levels = 1;
 VAR_2->ref_count_info.value_type.size = sizeof(uint32_t);
 VAR_2->ref_count_info.value_type.inc = ((void*)0);
 VAR_2->ref_count_info.value_type.dec = ((void*)0);
 VAR_2->ref_count_info.value_type.equal = ((void*)0);

 VAR_2->block_size = FUNC_1(FUNC_2(VAR_3));

 if (VAR_2->block_size > (1 << 30)) {
  FUNC_0("block size too big to hold bitmaps");
  return -VAR_0;
 }

 VAR_2->entries_per_block = (VAR_2->block_size - sizeof(struct disk_bitmap_header)) *
  VAR_1;
 VAR_2->nr_blocks = 0;
 VAR_2->bitmap_root = 0;
 VAR_2->ref_count_root = 0;
 VAR_2->bitmap_index_changed = 0;

 return 0;
}
