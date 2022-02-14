
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct walk_control {scalar_t__ wait; scalar_t__ write; int trans; scalar_t__ pin; } ;
struct extent_buffer {int len; int start; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int extent_root; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;

__attribute__((used)) static int FUNC_4(struct btrfs_root *VAR_0,
         struct extent_buffer *VAR_1,
         struct walk_control *VAR_2, u64 VAR_3)
{
 if (VAR_2->pin)
  FUNC_1(VAR_2->trans,
      VAR_0->fs_info->extent_root,
      VAR_1->start, VAR_1->len);

 if (FUNC_0(VAR_1, VAR_3, 0)) {
  if (VAR_2->write)
   FUNC_3(VAR_1);
  if (VAR_2->wait)
   FUNC_2(VAR_1);
 }
 return 0;
}
