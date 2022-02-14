
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {int free_extents; int free_space; int free_space_offset; } ;
struct btrfs_free_space {scalar_t__ bytes; int * bitmap; int offset_index; int offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct btrfs_free_space_ctl *VAR_0,
      struct btrfs_free_space *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(!VAR_1->bitmap && !VAR_1->bytes);
 VAR_2 = FUNC_1(&VAR_0->free_space_offset, VAR_1->offset,
     &VAR_1->offset_index, (VAR_1->bitmap != ((void*)0)));
 if (VAR_2)
  return VAR_2;

 VAR_0->free_space += VAR_1->bytes;
 VAR_0->free_extents++;
 return VAR_2;
}
