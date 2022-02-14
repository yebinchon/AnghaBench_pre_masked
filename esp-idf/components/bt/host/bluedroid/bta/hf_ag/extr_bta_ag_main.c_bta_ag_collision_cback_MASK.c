
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tBTA_SYS_CONN_STATUS ;
struct TYPE_8__ {scalar_t__ param; int * p_cback; } ;
struct TYPE_7__ {scalar_t__ state; int colli_tmr_on; TYPE_2__ colli_timer; int reg_services; scalar_t__ p_disc_db; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
typedef int TIMER_CBACK ;
typedef scalar_t__ INT32 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

void FUNC_9 (tBTA_SYS_CONN_STATUS VAR_7, UINT8 VAR_8, UINT8 VAR_9, BD_ADDR VAR_10)
{
    UINT16 VAR_11;
    tBTA_AG_SCB *VAR_12;
    FUNC_2(VAR_7);
    FUNC_2(VAR_9);


    VAR_11 = FUNC_4 (VAR_10);
    VAR_12 = FUNC_6 (VAR_11);

    if (VAR_12 && (VAR_12->state == VAR_2)) {
        if (VAR_8 == VAR_4) {

            FUNC_0 ("AG found collision (ACL) ...");
        } else if (VAR_8 == VAR_3) {

            FUNC_0 ("AG found collision (RFCOMM) ...");
        } else {
            FUNC_0 ("AG found collision (\?\?\?) ...");
        }
        VAR_12->state = VAR_1;

        if(VAR_12->p_disc_db) {
            (void)FUNC_1 (VAR_12->p_disc_db);
            FUNC_3(VAR_12, ((void*)0));
        }


        if (FUNC_5 (VAR_12)) {
            FUNC_7(VAR_12, VAR_12->reg_services);
        }

        VAR_12->colli_timer.p_cback = (TIMER_CBACK*)&VAR_6;
        VAR_12->colli_timer.param = (INT32)VAR_12;
        FUNC_8(&VAR_12->colli_timer, 0, VAR_0);
        VAR_12->colli_tmr_on = VAR_5;
    }
}
