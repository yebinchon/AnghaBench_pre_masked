
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct walk_control {int free; int process_func; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int node; int dirty_log_pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int,int ) ;
 int FUNC_2 (int *,int ,int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_root*) ;
 int VAR_3 ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct walk_control*) ;

__attribute__((used)) static void FUNC_6(struct btrfs_trans_handle *VAR_4,
     struct btrfs_root *VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 struct walk_control VAR_9 = {
  .free = 1,
  .process_func = VAR_3
 };

 VAR_6 = FUNC_5(VAR_4, VAR_5, &VAR_9);
 FUNC_0(VAR_6);

 while (1) {
  VAR_6 = FUNC_2(&VAR_5->dirty_log_pages,
    0, &VAR_7, &VAR_8, VAR_0 | VAR_1);
  if (VAR_6)
   break;

  FUNC_1(&VAR_5->dirty_log_pages, VAR_7, VAR_8,
      VAR_0 | VAR_1, VAR_2);
 }

 FUNC_3(VAR_5->node);
 FUNC_4(VAR_5);
}
