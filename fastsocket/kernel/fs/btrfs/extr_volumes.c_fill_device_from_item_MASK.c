
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_device {int uuid; int sector_size; int io_width; int io_align; int type; int bytes_used; int disk_total_bytes; int total_bytes; int devid; } ;
struct btrfs_dev_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_dev_item*) ;
 scalar_t__ FUNC_7 (struct btrfs_dev_item*) ;
 int FUNC_8 (struct extent_buffer*,int ,unsigned long,int ) ;

__attribute__((used)) static void FUNC_9(struct extent_buffer *VAR_1,
     struct btrfs_dev_item *VAR_2,
     struct btrfs_device *VAR_3)
{
 unsigned long VAR_4;

 VAR_3->devid = FUNC_1(VAR_1, VAR_2);
 VAR_3->disk_total_bytes = FUNC_5(VAR_1, VAR_2);
 VAR_3->total_bytes = VAR_3->disk_total_bytes;
 VAR_3->bytes_used = FUNC_0(VAR_1, VAR_2);
 VAR_3->type = FUNC_6(VAR_1, VAR_2);
 VAR_3->io_align = FUNC_2(VAR_1, VAR_2);
 VAR_3->io_width = FUNC_3(VAR_1, VAR_2);
 VAR_3->sector_size = FUNC_4(VAR_1, VAR_2);

 VAR_4 = (unsigned long)FUNC_7(VAR_2);
 FUNC_8(VAR_1, VAR_3->uuid, VAR_4, VAR_0);
}
