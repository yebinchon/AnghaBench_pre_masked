
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_root {scalar_t__ last_log_commit; int log_mutex; } ;
struct TYPE_2__ {scalar_t__ logged_trans; scalar_t__ last_sub_trans; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_0, u64 VAR_1)
{
 struct btrfs_root *VAR_2 = FUNC_0(VAR_0)->root;
 int VAR_3 = 0;

 FUNC_1(&VAR_2->log_mutex);
 if (FUNC_0(VAR_0)->logged_trans == VAR_1 &&
     FUNC_0(VAR_0)->last_sub_trans <= VAR_2->last_log_commit)
  VAR_3 = 1;
 FUNC_2(&VAR_2->log_mutex);
 return VAR_3;
}
