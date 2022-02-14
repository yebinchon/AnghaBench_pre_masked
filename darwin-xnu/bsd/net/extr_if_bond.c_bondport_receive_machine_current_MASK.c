
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
typedef TYPE_1__* partner_state_ref ;
typedef int devtimer_timeout_func ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_13__ {int verbose; } ;
struct TYPE_11__ {int ps_state; } ;
struct TYPE_12__ {int po_current_while_timer; TYPE_1__ po_partner_state; int po_actor_state; int po_receive_state; } ;
typedef int LAEvent ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,void*) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct timeval,int ,void*,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void
FUNC_11(bondport_ref VAR_5, LAEvent VAR_6,
     void * VAR_7)
{
    partner_state_ref VAR_8;
    struct timeval VAR_9;

    switch (VAR_6) {
    case 129:
 FUNC_6(VAR_5->po_current_while_timer);
 if (VAR_4->verbose) {
     FUNC_10("[%s] Receive CURRENT\n",
        FUNC_4(VAR_5));
 }
 VAR_5->po_receive_state = VAR_3;
 FUNC_2(VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_7);
 FUNC_0(VAR_5, VAR_7);
 VAR_5->po_actor_state
     = FUNC_8(VAR_5->po_actor_state);
 FUNC_3(VAR_5);

 VAR_8 = &VAR_5->po_partner_state;
 if (FUNC_9(VAR_8->ps_state)) {
     VAR_9.tv_sec = VAR_1;
 }
 else {
     VAR_9.tv_sec = VAR_0;
 }
 VAR_9.tv_usec = 0;
 FUNC_7(VAR_5->po_current_while_timer, VAR_9,
         (devtimer_timeout_func)
         FUNC_11,
         (void *)128, ((void*)0));
 break;
    case 128:
 FUNC_5(VAR_5, VAR_2, ((void*)0));
 break;
    default:
 break;
    }
    return;
}
