
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_pid; int l_owner; } ;
struct nfs_lock_context {int io_count; int list; TYPE_1__ lockowner; int count; } ;
struct TYPE_4__ {int tgid; int files; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfs_lock_context *VAR_1)
{
 FUNC_1(&VAR_1->count, 1);
 VAR_1->lockowner.l_owner = VAR_0->files;
 VAR_1->lockowner.l_pid = VAR_0->tgid;
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_1->io_count);
}
