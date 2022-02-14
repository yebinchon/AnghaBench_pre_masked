
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nrpages; int tree_lock; } ;
struct inode {int i_state; scalar_t__ i_cdev; int i_mode; scalar_t__ i_bdev; TYPE_3__* i_sb; TYPE_1__ i_data; } ;
struct TYPE_6__ {TYPE_2__* s_op; } ;
struct TYPE_5__ {int (* clear_inode ) (struct inode*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;

void FUNC_12(struct inode *VAR_2)
{
 FUNC_7();
 FUNC_6(VAR_2);






 FUNC_8(&VAR_2->i_data.tree_lock);
 FUNC_0(VAR_2->i_data.nrpages);
 FUNC_9(&VAR_2->i_data.tree_lock);
 FUNC_0(!(VAR_2->i_state & VAR_1));
 FUNC_0(VAR_2->i_state & VAR_0);
 FUNC_5(VAR_2);
 FUNC_11(VAR_2);
 if (VAR_2->i_sb->s_op->clear_inode)
  VAR_2->i_sb->s_op->clear_inode(VAR_2);
 if (FUNC_1(VAR_2->i_mode) && VAR_2->i_bdev)
  FUNC_3(VAR_2);
 if (FUNC_2(VAR_2->i_mode) && VAR_2->i_cdev)
  FUNC_4(VAR_2);
 VAR_2->i_state = VAR_0;
}
