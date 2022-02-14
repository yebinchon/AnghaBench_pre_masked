
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_AG_VAL ;
typedef int tBTA_AG_REGISTER ;
typedef int tBTA_AG_OPEN ;
typedef int tBTA_AG_HDR ;
typedef scalar_t__ tBTA_AG_EVT ;
typedef int tBTA_AG_CONN ;
typedef int tBTA_AG ;
struct TYPE_3__ {scalar_t__ act; int pid; int sig; } ;
typedef TYPE_1__ btc_msg_t ;
typedef scalar_t__ bt_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(tBTA_AG_EVT VAR_9, tBTA_AG *VAR_10)
{
    int VAR_11 = 0;

    if (VAR_5 == VAR_9) {
        VAR_11 = sizeof(tBTA_AG_REGISTER);
    }
    else if (VAR_4 == VAR_9) {
        VAR_11 = sizeof(tBTA_AG_OPEN);
    }
    else if ((VAR_2 == VAR_9) || (VAR_1 == VAR_9) || (VAR_0 == VAR_9)) {
        VAR_11 = sizeof(tBTA_AG_HDR);
    }
    else if (VAR_3 == VAR_9) {
        VAR_11 = sizeof(tBTA_AG_CONN);
    }
    else if (VAR_10) {
        VAR_11 = sizeof(tBTA_AG_VAL);
    }
    btc_msg_t VAR_12;
    VAR_12.sig = VAR_7;
    VAR_12.pid = VAR_6;
    VAR_12.act = VAR_9;


    bt_status_t VAR_13 = FUNC_1(&VAR_12, VAR_10, VAR_11, ((void*)0));

    FUNC_0(VAR_13 == VAR_8, "context transfer failed", VAR_13);
}
