
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int diva_os_spin_lock_magic_t ;
typedef size_t byte ;
struct TYPE_7__ {scalar_t__ io; } ;
struct TYPE_6__ {size_t head; size_t tail; int data_spin_lock; TYPE_1__* e_tbl; } ;
struct TYPE_5__ {size_t next; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef TYPE_3__ ADAPTER ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;

void FUNC_2(ADAPTER * VAR_0, byte VAR_1)
{
  PISDN_ADAPTER VAR_2;
 diva_os_spin_lock_magic_t VAR_3;
  VAR_2 = (PISDN_ADAPTER) VAR_0->io;
 FUNC_0 (&VAR_2->data_spin_lock, &VAR_3, "data_req_q");
  VAR_2->e_tbl[VAR_1].next = 0;
  if(VAR_2->head) {
    VAR_2->e_tbl[VAR_2->tail].next = VAR_1;
    VAR_2->tail = VAR_1;
  }
  else {
    VAR_2->head = VAR_1;
    VAR_2->tail = VAR_1;
  }
 FUNC_1 (&VAR_2->data_spin_lock, &VAR_3, "data_req_q");
}
