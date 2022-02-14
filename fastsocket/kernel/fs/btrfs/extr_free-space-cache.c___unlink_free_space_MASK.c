
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {int free_extents; int free_space_offset; } ;
struct btrfs_free_space {int offset_index; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct btrfs_free_space_ctl *VAR_0,
      struct btrfs_free_space *VAR_1)
{
 FUNC_0(&VAR_1->offset_index, &VAR_0->free_space_offset);
 VAR_0->free_extents--;
}
