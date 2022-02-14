
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct TYPE_2__ {scalar_t__ last_unlink_trans; scalar_t__ logged_trans; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(struct btrfs_trans_handle *VAR_0,
        struct inode *VAR_1, struct inode *VAR_2,
        int VAR_3)
{
 if (FUNC_1(VAR_2->i_mode))
  FUNC_0(VAR_2)->last_unlink_trans = VAR_0->transid;





 FUNC_2();
 if (FUNC_0(VAR_1)->logged_trans == VAR_0->transid)
  return;





 if (FUNC_0(VAR_2)->logged_trans == VAR_0->transid)
  return;
 if (VAR_3)
  goto record;


 return;

record:
 FUNC_0(VAR_1)->last_unlink_trans = VAR_0->transid;
}
