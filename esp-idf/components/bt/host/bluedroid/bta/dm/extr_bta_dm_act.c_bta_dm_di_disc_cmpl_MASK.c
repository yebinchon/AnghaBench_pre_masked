
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBTA_DM_SEARCH ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
struct TYPE_10__ {int result; int num_record; int bd_addr; } ;
typedef TYPE_3__ tBTA_DM_DI_DISC_CMPL ;
struct TYPE_12__ {int * p_di_db; } ;
struct TYPE_11__ {int (* p_search_cback ) (int ,int *) ;int peer_bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(tBTA_DM_MSG *VAR_6)
{
    tBTA_DM_DI_DISC_CMPL VAR_7;

    FUNC_2(&VAR_7, 0, sizeof(tBTA_DM_DI_DISC_CMPL));
    FUNC_1(VAR_7.bd_addr, VAR_5.peer_bdaddr);

    if ((VAR_6->hdr.offset == VAR_3)
            || (VAR_6->hdr.offset == VAR_2)) {
        VAR_7.num_record = FUNC_0(VAR_4.p_di_db);
    } else {
        VAR_7.result = VAR_1;
    }

    VAR_4.p_di_db = ((void*)0);
    VAR_5.p_search_cback(VAR_0, (tBTA_DM_SEARCH *) &VAR_7);
}
