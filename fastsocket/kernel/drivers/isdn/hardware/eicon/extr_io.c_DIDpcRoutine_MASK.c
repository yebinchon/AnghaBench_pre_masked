
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct pc_maint {int req; } ;
struct _diva_os_soft_isr {int dummy; } ;
typedef int diva_os_spin_lock_magic_t ;
typedef int diva_os_atomic_t ;
struct TYPE_14__ {int rc; int req; } ;
struct TYPE_13__ {int (* ram_in_buffer ) (TYPE_2__*,TYPE_4__*,struct pc_maint*,int) ;scalar_t__ (* ram_in ) (TYPE_2__*,int *) ;int (* ram_out ) (TYPE_2__*,int *,int ) ;} ;
struct TYPE_12__ {int pcm_pending; int data_spin_lock; TYPE_4__* pcm; scalar_t__ pcm_data; int (* out ) (TYPE_2__*) ;int (* clr_irq ) (TYPE_2__*) ;int (* dpc ) (TYPE_2__*) ;int Unavailable; scalar_t__ (* tst_irq ) (TYPE_2__*) ;int in_dpc; TYPE_2__ a; } ;
typedef TYPE_1__* PISDN_ADAPTER ;
typedef TYPE_2__ ADAPTER ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int FUNC_9 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*,struct pc_maint*,int) ;

void FUNC_12 (struct _diva_os_soft_isr* VAR_0, void* VAR_1) {
 PISDN_ADAPTER VAR_2 = (PISDN_ADAPTER)VAR_1 ;
 ADAPTER* VAR_3 = &VAR_2->a ;
 diva_os_atomic_t* VAR_4 = &VAR_2->in_dpc;
 if (FUNC_1 (VAR_4) == 1) {
  do {
   if ( VAR_2->tst_irq (VAR_3) )
   {
    if ( !VAR_2->Unavailable )
     VAR_2->dpc (VAR_3) ;
    VAR_2->clr_irq (VAR_3) ;
   }
   VAR_2->out (VAR_3) ;
  } while (FUNC_0 (VAR_4) > 0);



  if (VAR_2->pcm_pending) {
   struct pc_maint *VAR_5;
   diva_os_spin_lock_magic_t VAR_6 ;
   FUNC_2 (&VAR_2->data_spin_lock,
                &VAR_6,
                "data_dpc");
   VAR_5 = (struct pc_maint *)VAR_2->pcm_data;
   switch (VAR_2->pcm_pending) {
    case 1:
     VAR_3->ram_out (VAR_3, &VAR_2->pcm->rc, 0) ;
     VAR_3->ram_out (VAR_3, &VAR_2->pcm->req, VAR_5->req) ;
     VAR_2->pcm_pending = 2;
     break;
    case 2:
     if ((int)(VAR_3->ram_in (VAR_3, &VAR_2->pcm->rc))) {
      VAR_3->ram_in_buffer (VAR_3, VAR_2->pcm, VAR_5, sizeof(*VAR_5)) ;
      VAR_2->pcm_pending = 3;
     }
     break;
    case 3:
     break;
   }
   FUNC_3 (&VAR_2->data_spin_lock,
                &VAR_6,
                "data_dpc");
  }

 }
}
