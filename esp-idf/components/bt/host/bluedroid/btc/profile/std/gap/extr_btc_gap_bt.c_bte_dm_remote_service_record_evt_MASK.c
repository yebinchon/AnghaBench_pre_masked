
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; TYPE_3__* p_data; scalar_t__ event; } ;
typedef TYPE_2__ tBTA_DM_SEARCH_PARAM ;
typedef scalar_t__ tBTA_DM_SEARCH_EVT ;
struct TYPE_8__ {scalar_t__ raw_data_size; scalar_t__ p_raw_data; } ;
struct TYPE_10__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ tBTA_DM_SEARCH ;
struct TYPE_11__ {int act; int pid; int sig; } ;
typedef TYPE_4__ btc_msg_t ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(tBTA_DM_SEARCH_EVT VAR_5, tBTA_DM_SEARCH *VAR_6)
{
    tBTA_DM_SEARCH_PARAM VAR_7;
    VAR_7.event = VAR_5;
    VAR_7.p_data = VAR_6;
    UINT16 VAR_8 = 0;

    if (VAR_6) {
        VAR_8 += sizeof(tBTA_DM_SEARCH);
    }

    if (VAR_5 == VAR_0) {
        if (VAR_6->disc_res.raw_data_size && VAR_6->disc_res.p_raw_data) {
            VAR_8 += VAR_6->disc_res.raw_data_size;
        }
    }
    VAR_7.len = VAR_8;
    do {
        btc_msg_t VAR_9;
        VAR_9.sig = VAR_3;
        VAR_9.pid = VAR_2;
        VAR_9.act = VAR_1;
        FUNC_0(&VAR_9, &VAR_7, sizeof(tBTA_DM_SEARCH_PARAM), VAR_4);
    } while (0);

}
