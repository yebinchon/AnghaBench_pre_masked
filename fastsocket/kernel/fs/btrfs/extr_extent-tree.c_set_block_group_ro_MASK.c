
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_space_info {int flags; scalar_t__ bytes_used; scalar_t__ bytes_reserved; scalar_t__ bytes_pinned; scalar_t__ bytes_may_use; scalar_t__ bytes_readonly; scalar_t__ total_bytes; int lock; } ;
struct TYPE_2__ {scalar_t__ offset; } ;
struct btrfs_block_group_cache {int ro; scalar_t__ reserved; scalar_t__ pinned; scalar_t__ bytes_super; int lock; int item; TYPE_1__ key; struct btrfs_space_info* space_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct btrfs_block_group_cache *VAR_3, int VAR_4)
{
 struct btrfs_space_info *VAR_5 = VAR_3->space_info;
 u64 VAR_6;
 u64 VAR_7;
 int VAR_8 = -VAR_2;







 if ((VAR_5->flags &
      (VAR_1 | VAR_0)) &&
     !VAR_4)
  VAR_7 = 1 * 1024 * 1024;
 else
  VAR_7 = 0;

 FUNC_1(&VAR_5->lock);
 FUNC_1(&VAR_3->lock);

 if (VAR_3->ro) {
  VAR_8 = 0;
  goto out;
 }

 VAR_6 = VAR_3->key.offset - VAR_3->reserved - VAR_3->pinned -
      VAR_3->bytes_super - FUNC_0(&VAR_3->item);

 if (VAR_5->bytes_used + VAR_5->bytes_reserved + VAR_5->bytes_pinned +
     VAR_5->bytes_may_use + VAR_5->bytes_readonly + VAR_6 +
     VAR_7 <= VAR_5->total_bytes) {
  VAR_5->bytes_readonly += VAR_6;
  VAR_3->ro = 1;
  VAR_8 = 0;
 }
out:
 FUNC_2(&VAR_3->lock);
 FUNC_2(&VAR_5->lock);
 return VAR_8;
}
