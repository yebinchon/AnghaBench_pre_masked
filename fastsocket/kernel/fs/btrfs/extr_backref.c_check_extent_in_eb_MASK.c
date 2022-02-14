
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_inode_elem {scalar_t__ offset; int inum; struct extent_inode_elem* next; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_key {scalar_t__ offset; int objectid; } ;
struct btrfs_file_extent_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_file_extent_item*) ;
 struct extent_inode_elem* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct btrfs_key *VAR_2, struct extent_buffer *VAR_3,
    struct btrfs_file_extent_item *VAR_4,
    u64 VAR_5,
    struct extent_inode_elem **VAR_6)
{
 u64 VAR_7;
 u64 VAR_8;
 struct extent_inode_elem *VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 VAR_8 = FUNC_0(VAR_3, VAR_4);

 if (VAR_5 < VAR_7 ||
     VAR_5 >= VAR_7 + VAR_8)
  return 1;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->next = *VAR_6;
 VAR_9->inum = VAR_2->objectid;
 VAR_9->offset = VAR_2->offset + (VAR_5 - VAR_7);
 *VAR_6 = VAR_9;

 return 0;
}
