
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ link_state; int timer_entry; int * p_echo_rsp_cb; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int tL2CA_ECHO_RSP_CB ;
typedef scalar_t__ BOOLEAN ;
typedef int * BD_ADDR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;

BOOLEAN FUNC_9 (BD_ADDR VAR_8, tL2CA_ECHO_RSP_CB *VAR_9)
{
    tL2C_LCB *VAR_10;

    FUNC_1 ("L2CA_Ping()  BDA: %02x-%02x-%02x-%02x-%02x-%02x",
                     VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_8[5]);


    if (!FUNC_0()) {
        return (VAR_2);
    }


    if ((VAR_10 = FUNC_7 (VAR_8, VAR_1)) == ((void*)0)) {

        if ((VAR_10 = FUNC_5 (VAR_8, VAR_2, VAR_1)) == ((void*)0)) {
            FUNC_2 ("L2CAP - no LCB for L2CA_ping");
            return (VAR_2);
        }
        if (FUNC_6(VAR_10, VAR_1) == VAR_2) {
            return (VAR_2);
        }

        VAR_10->p_echo_rsp_cb = VAR_9;

        return (VAR_7);
    }


    if (VAR_10->p_echo_rsp_cb != ((void*)0)) {
        FUNC_2 ("L2CAP - rejected second L2CA_ping");
        return (VAR_2);
    }


    if (VAR_10->link_state == VAR_6) {
        FUNC_2 ("L2CAP - L2CA_ping rejected - link disconnecting");
        return (VAR_2);
    }


    VAR_10->p_echo_rsp_cb = VAR_9;

    if (VAR_10->link_state == VAR_5) {
        FUNC_4(VAR_10, VAR_3);
        FUNC_8 (VAR_10, ((void*)0), 0);
        FUNC_3 (&VAR_10->timer_entry, VAR_0, VAR_4);
    }

    return (VAR_7);
}
