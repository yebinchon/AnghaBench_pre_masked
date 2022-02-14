
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int transaction_t ;
struct jbd2_inode {TYPE_1__* i_vfs_inode; int * i_transaction; } ;
typedef int loff_t ;
struct TYPE_6__ {int j_list_lock; int j_state_lock; int * j_committing_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_5__ {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(journal_t *VAR_1,
     struct jbd2_inode *VAR_2,
     loff_t VAR_3)
{
 transaction_t *VAR_4, *VAR_5;
 int VAR_6 = 0;


 if (!VAR_2->i_transaction)
  goto out;



 FUNC_2(&VAR_1->j_state_lock);
 VAR_5 = VAR_1->j_committing_transaction;
 FUNC_3(&VAR_1->j_state_lock);
 FUNC_2(&VAR_1->j_list_lock);
 VAR_4 = VAR_2->i_transaction;
 FUNC_3(&VAR_1->j_list_lock);
 if (VAR_4 == VAR_5) {
  VAR_6 = FUNC_0(VAR_2->i_vfs_inode->i_mapping,
   VAR_3, VAR_0);
  if (VAR_6)
   FUNC_1(VAR_1, VAR_6);
 }
out:
 return VAR_6;
}
