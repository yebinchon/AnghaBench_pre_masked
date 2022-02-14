
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* mount_t ;
struct TYPE_5__ {int * tqe_prev; int * tqe_next; } ;
struct TYPE_6__ {TYPE_1__ mnt_list; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(mount_t VAR_3)
{
 FUNC_1();
 FUNC_0(&VAR_1, VAR_3, VAR_0);
 VAR_2--;
 VAR_3->mnt_list.tqe_next = ((void*)0);
 VAR_3->mnt_list.tqe_prev = ((void*)0);
 FUNC_2();
}
