
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_inode_ref {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 unsigned long FUNC_1 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,char const*,unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct btrfs_path *VAR_0, const char *VAR_1,
    int VAR_2, struct btrfs_inode_ref **VAR_3)
{
 struct extent_buffer *VAR_4;
 struct btrfs_inode_ref *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 VAR_4 = VAR_0->nodes[0];
 VAR_8 = FUNC_2(VAR_4, VAR_0->slots[0]);
 VAR_6 = FUNC_1(VAR_4, VAR_0->slots[0]);
 while (VAR_9 < VAR_8) {
  VAR_5 = (struct btrfs_inode_ref *)(VAR_6 + VAR_9);
  VAR_10 = FUNC_0(VAR_4, VAR_5);
  VAR_7 = (unsigned long)(VAR_5 + 1);
  VAR_9 += VAR_10 + sizeof(*VAR_5);
  if (VAR_10 != VAR_2)
   continue;
  if (FUNC_3(VAR_4, VAR_1, VAR_7, VAR_2) == 0) {
   *VAR_3 = VAR_5;
   return 1;
  }
 }
 return 0;
}
