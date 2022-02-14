
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int diva_os_spin_lock_magic_t ;
struct TYPE_7__ {scalar_t__ io; } ;
struct TYPE_6__ {size_t head; int data_spin_lock; scalar_t__ tail; TYPE_1__* e_tbl; } ;
struct TYPE_5__ {size_t next; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef TYPE_3__ ADAPTER ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;

void FUNC_2(ADAPTER * VAR_0)
{
  PISDN_ADAPTER VAR_1;
 diva_os_spin_lock_magic_t VAR_2;
  VAR_1 = (PISDN_ADAPTER) VAR_0->io;
 FUNC_0 (&VAR_1->data_spin_lock, &VAR_2, "data_req_next");
  VAR_1->head = VAR_1->e_tbl[VAR_1->head].next;
  if(!VAR_1->head) VAR_1->tail = 0;
 FUNC_1 (&VAR_1->data_spin_lock, &VAR_2, "data_req_next");
}
