
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int event; int len; TYPE_3__* p_data; } ;
typedef TYPE_2__ tBTA_DM_SEARCH_PARAM ;
typedef int tBTA_DM_SEARCH_EVT ;
struct TYPE_8__ {int num_uuids; int result; } ;
struct TYPE_10__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ tBTA_DM_SEARCH ;
struct TYPE_11__ {int act; int pid; int sig; } ;
typedef TYPE_4__ btc_msg_t ;
typedef int UINT16 ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(tBTA_DM_SEARCH_EVT VAR_6, tBTA_DM_SEARCH *VAR_7)
{
    tBTA_DM_SEARCH_PARAM VAR_8;
    VAR_8.event = VAR_6;
    VAR_8.p_data = VAR_7;

    UINT16 VAR_9 = 0;
    if (VAR_7) {
        VAR_9 += sizeof(tBTA_DM_SEARCH);
    }

    switch (VAR_6) {
    case 128: {
        if ((VAR_7->disc_res.result == VAR_0) && (VAR_7->disc_res.num_uuids > 0)) {
            VAR_9 += (VAR_7->disc_res.num_uuids * VAR_4);
        }
    } break;
    }
    VAR_8.len = VAR_9;
    do {
        btc_msg_t VAR_10;
        VAR_10.sig = VAR_3;
        VAR_10.pid = VAR_2;
        VAR_10.act = VAR_1;
        FUNC_0(&VAR_10, &VAR_8, sizeof(tBTA_DM_SEARCH_PARAM), VAR_5);
    } while (0);
}
