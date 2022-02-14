
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int event; int len; TYPE_4__* p_data; } ;
typedef TYPE_3__ tBTA_DM_SEARCH_PARAM ;
typedef int tBTA_DM_SEARCH_EVT ;
struct TYPE_11__ {int remt_name_not_required; int p_eir; } ;
struct TYPE_10__ {int raw_data_size; int p_raw_data; } ;
struct TYPE_13__ {TYPE_2__ inq_res; TYPE_1__ disc_res; } ;
typedef TYPE_4__ tBTA_DM_SEARCH ;
struct TYPE_14__ {int act; int pid; int sig; } ;
typedef TYPE_5__ btc_msg_t ;
typedef int UINT16 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(tBTA_DM_SEARCH_EVT VAR_5, tBTA_DM_SEARCH *VAR_6)
{
    tBTA_DM_SEARCH_PARAM VAR_7;
    VAR_7.event = VAR_5;
    VAR_7.p_data = VAR_6;

    UINT16 VAR_8 = 0;

    if (VAR_6) {
        VAR_8 += sizeof(tBTA_DM_SEARCH);
    }

    switch (VAR_5) {
    case 128: {
        if (VAR_6->inq_res.p_eir) {
            VAR_8 += VAR_3;
        }
    }
    break;

    case 129: {
        if (VAR_6->disc_res.raw_data_size && VAR_6->disc_res.p_raw_data) {
            VAR_8 += VAR_6->disc_res.raw_data_size;
        }
    }
    break;
    }


    if (VAR_5 == 128) {
        VAR_6->inq_res.remt_name_not_required = FUNC_1(VAR_6, ((void*)0), ((void*)0));
    }

    VAR_7.len = VAR_8;
    do {
        btc_msg_t VAR_9;
        VAR_9.sig = VAR_2;
        VAR_9.pid = VAR_1;
        VAR_9.act = VAR_0;

        FUNC_0(&VAR_9, &VAR_7, sizeof(tBTA_DM_SEARCH_PARAM), VAR_4);
    } while (0);
}
