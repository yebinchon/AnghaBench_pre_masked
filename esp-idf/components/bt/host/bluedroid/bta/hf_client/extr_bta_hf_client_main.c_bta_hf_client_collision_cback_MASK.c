
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTA_SYS_CONN_STATUS ;
typedef scalar_t__ UINT8 ;
struct TYPE_5__ {int * p_cback; } ;
struct TYPE_4__ {scalar_t__ state; int colli_tmr_on; TYPE_2__ colli_timer; scalar_t__ p_disc_db; } ;
struct TYPE_6__ {TYPE_1__ scb; } ;
typedef int TIMER_CBACK ;
typedef scalar_t__ BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

void FUNC_6 (tBTA_SYS_CONN_STATUS VAR_8, UINT8 VAR_9,
                                    UINT8 VAR_10, BD_ADDR VAR_11)
{
    FUNC_2(VAR_8);
    FUNC_2(VAR_10);
    FUNC_2(VAR_11);

    if (VAR_6.scb.state == VAR_2) {
        if (VAR_9 == VAR_4) {
            FUNC_0 ("HF Client found collision (ACL) ...");
        } else if (VAR_9 == VAR_3) {
            FUNC_0 ("HF Client found collision (RFCOMM) ...");
        } else {
            FUNC_0 ("HF Client found collision (\?\?\?) ...");
        }

        VAR_6.scb.state = VAR_1;


        if (VAR_6.scb.p_disc_db) {
            (void)FUNC_1 (VAR_6.scb.p_disc_db);
            FUNC_3(((void*)0));
        }



        FUNC_4();


        VAR_6.scb.colli_timer.p_cback = (TIMER_CBACK *)&VAR_7;
        FUNC_5(&VAR_6.scb.colli_timer, 0, VAR_0);
        VAR_6.scb.colli_tmr_on = VAR_5;
    }
}
