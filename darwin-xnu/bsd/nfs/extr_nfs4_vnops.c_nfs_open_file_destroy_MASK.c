
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_open_file {int nof_lock; TYPE_1__* nof_owner; } ;
struct TYPE_2__ {int noo_lock; int noo_opens; } ;


 int FUNC_0 (struct nfs_open_file*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nfs_open_file*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_6(struct nfs_open_file *VAR_3)
{
 FUNC_3(&VAR_3->nof_owner->noo_lock);
 FUNC_1(&VAR_3->nof_owner->noo_opens, VAR_3, VAR_2);
 FUNC_4(&VAR_3->nof_owner->noo_lock);
 FUNC_5(VAR_3->nof_owner);
 FUNC_2(&VAR_3->nof_lock, VAR_1);
 FUNC_0(VAR_3, VAR_0);
}
