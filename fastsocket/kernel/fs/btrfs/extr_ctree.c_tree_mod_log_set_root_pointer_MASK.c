
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {int node; int fs_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,struct extent_buffer*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct btrfs_root *VAR_1,
         struct extent_buffer *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_1->fs_info, VAR_1->node);
 VAR_3 = FUNC_2(VAR_1->fs_info, VAR_1->node,
           VAR_2, VAR_0);
 FUNC_0(VAR_3 < 0);
}
