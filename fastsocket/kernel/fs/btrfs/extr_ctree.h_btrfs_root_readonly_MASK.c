
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct btrfs_root {TYPE_1__ root_item; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct btrfs_root *VAR_1)
{
 return (VAR_1->root_item.flags & FUNC_0(VAR_0)) != 0;
}
