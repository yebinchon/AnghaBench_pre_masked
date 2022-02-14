
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int word ;
typedef int diva_os_spin_lock_magic_t ;
typedef size_t byte ;
struct TYPE_7__ {scalar_t__ io; } ;
struct TYPE_6__ {size_t assign; int data_spin_lock; TYPE_1__* e_tbl; } ;
struct TYPE_5__ {size_t next; int assign_ref; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef TYPE_3__ ADAPTER ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;

void FUNC_2(ADAPTER * VAR_0, byte VAR_1, word VAR_2)
{
  PISDN_ADAPTER VAR_3;
 diva_os_spin_lock_magic_t VAR_4;
  VAR_3 = (PISDN_ADAPTER) VAR_0->io;
 FUNC_0 (&VAR_3->data_spin_lock, &VAR_4, "data_assign");
  VAR_3->e_tbl[VAR_1].assign_ref = VAR_2;
  VAR_3->e_tbl[VAR_1].next = (byte)VAR_3->assign;
  VAR_3->assign = VAR_1;
 FUNC_1 (&VAR_3->data_spin_lock, &VAR_4, "data_assign");
}
