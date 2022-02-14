
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_inode_info {int i_datasync_tid; int i_sync_tid; } ;
struct TYPE_6__ {TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_5__ {int t_tid; } ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_2(handle_t *VAR_0,
       struct inode *VAR_1,
       int VAR_2)
{
 struct ext4_inode_info *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_0)) {
  VAR_3->i_sync_tid = VAR_0->h_transaction->t_tid;
  if (VAR_2)
   VAR_3->i_datasync_tid = VAR_0->h_transaction->t_tid;
 }
}
