
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int dummy; } ;
struct btrfs_delayed_root {int items; int wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct btrfs_delayed_root* FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_delayed_root*,struct btrfs_root*,int) ;
 int FUNC_3 (int ,int,int ) ;

void FUNC_4(struct btrfs_root *VAR_3)
{
 struct btrfs_delayed_root *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(&VAR_4->items) < VAR_0)
  return;

 if (FUNC_0(&VAR_4->items) >= VAR_1) {
  int VAR_5;
  VAR_5 = FUNC_2(VAR_4, VAR_3, 1);
  if (VAR_5)
   return;

  FUNC_3(
    VAR_4->wait,
    (FUNC_0(&VAR_4->items) <
     VAR_0),
    VAR_2);
  return;
 }

 FUNC_2(VAR_4, VAR_3, 0);
}
