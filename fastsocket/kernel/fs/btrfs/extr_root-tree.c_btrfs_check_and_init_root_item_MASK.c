
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; } ;
struct btrfs_root_item {scalar_t__ byte_limit; scalar_t__ flags; TYPE_1__ inode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct btrfs_root_item *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_1->inode.flags);

 if (!(VAR_2 & VAR_0)) {
  VAR_2 |= VAR_0;
  VAR_1->inode.flags = FUNC_0(VAR_2);
  VAR_1->flags = 0;
  VAR_1->byte_limit = 0;
 }
}
