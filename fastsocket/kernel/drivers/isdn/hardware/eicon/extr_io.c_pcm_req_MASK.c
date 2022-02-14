
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct pc_maint {int req; } ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_18__ {int rc; int req; } ;
struct TYPE_17__ {int (* ram_in_buffer ) (TYPE_4__*,TYPE_8__*,struct pc_maint*,int) ;scalar_t__ (* ram_in ) (TYPE_4__*,int *) ;int (* ram_out ) (TYPE_4__*,int *,int ) ;} ;
struct TYPE_16__ {int Ind; } ;
struct TYPE_14__ {scalar_t__ Card; } ;
struct TYPE_15__ {int pcm_pending; int trapped; int ANum; int (* os_trap_nfy_Fnc ) (TYPE_2__*,int ) ;int (* trapFnc ) (TYPE_2__*) ;TYPE_8__* pcm; int data_spin_lock; int * pcm_data; int req_soft_isr; TYPE_1__ Properties; TYPE_4__ a; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef TYPE_3__ ENTITY ;
typedef TYPE_4__ ADAPTER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (TYPE_4__*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*,struct pc_maint*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10 (PISDN_ADAPTER VAR_1, ENTITY *VAR_2)
{
 diva_os_spin_lock_magic_t VAR_3 ;
 int VAR_4, VAR_5 ;
 ADAPTER *VAR_6 = &VAR_1->a ;
 struct pc_maint *VAR_7 = (struct pc_maint *)&VAR_2->Ind ;




 if ( VAR_1->Properties.Card == VAR_0 )
 {
  FUNC_0 (&VAR_1->data_spin_lock,
               &VAR_3,
               "data_pcm_1");
  VAR_1->pcm_data = (void *)VAR_7;
  VAR_1->pcm_pending = 1;
  FUNC_2 (&VAR_1->req_soft_isr);
  FUNC_1 (&VAR_1->data_spin_lock,
               &VAR_3,
               "data_pcm_1");
  for ( VAR_5 = 0, VAR_4 = (VAR_1->trapped ? 3000 : 250) ; !VAR_5 && (VAR_4 > 0) ; --VAR_4 )
  {
   FUNC_3 (1) ;
   if (VAR_1->pcm_pending == 3) {
    FUNC_0 (&VAR_1->data_spin_lock,
                 &VAR_3,
                 "data_pcm_3");
    VAR_1->pcm_pending = 0;
    VAR_1->pcm_data = ((void*)0) ;
    FUNC_1 (&VAR_1->data_spin_lock,
                 &VAR_3,
                 "data_pcm_3");
    return ;
   }
   FUNC_0 (&VAR_1->data_spin_lock,
                &VAR_3,
                "data_pcm_2");
   FUNC_2 (&VAR_1->req_soft_isr);
   FUNC_1 (&VAR_1->data_spin_lock,
                &VAR_3,
                "data_pcm_2");
  }
  FUNC_0 (&VAR_1->data_spin_lock,
               &VAR_3,
               "data_pcm_4");
  VAR_1->pcm_pending = 0;
  VAR_1->pcm_data = ((void*)0) ;
  FUNC_1 (&VAR_1->data_spin_lock,
               &VAR_3,
               "data_pcm_4");
  goto Trapped ;
 }




 VAR_6->ram_out (VAR_6, &VAR_1->pcm->rc, 0) ;
 VAR_6->ram_out (VAR_6, &VAR_1->pcm->req, VAR_7->req) ;
 for ( VAR_4 = (VAR_1->trapped ? 3000 : 250) ; --VAR_4 > 0 ; )
 {
  FUNC_3 (1) ;
  VAR_5 = (int)(VAR_6->ram_in (VAR_6, &VAR_1->pcm->rc)) ;
  if ( VAR_5 )
  {
   VAR_6->ram_in_buffer (VAR_6, VAR_1->pcm, VAR_7, sizeof(*VAR_7)) ;
   return ;
  }
 }
Trapped:
 if ( VAR_1->trapFnc )
 {
    int VAR_8 = VAR_1->trapped;
  VAR_1->trapFnc (VAR_1) ;



    if (!VAR_8 && VAR_1->trapped && VAR_1->os_trap_nfy_Fnc) {
      (*(VAR_1->os_trap_nfy_Fnc))(VAR_1, VAR_1->ANum);
    }
 }
}
