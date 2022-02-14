
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {scalar_t__ cached; TYPE_1__* free_ino_ctl; int cache_wait; } ;
struct TYPE_2__ {scalar_t__ free_space; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_root*,int *) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_root*,int ) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct btrfs_root *VAR_3, u64 *VAR_4)
{
 if (!FUNC_2(VAR_3, VAR_2))
  return FUNC_0(VAR_3, VAR_4);

again:
 *VAR_4 = FUNC_1(VAR_3);

 if (*VAR_4 != 0)
  return 0;

 FUNC_3(VAR_3);

 FUNC_4(VAR_3->cache_wait,
     VAR_3->cached == VAR_0 ||
     VAR_3->free_ino_ctl->free_space > 0);

 if (VAR_3->cached == VAR_0 &&
     VAR_3->free_ino_ctl->free_space == 0)
  return -VAR_1;
 else
  goto again;
}
