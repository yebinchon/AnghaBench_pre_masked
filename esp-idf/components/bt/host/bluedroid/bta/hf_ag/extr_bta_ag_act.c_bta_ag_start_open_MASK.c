
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int open_services; int role; int reg_services; int peer_addr; int cli_sec_mask; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_8__ {int sec_mask; int services; int bd_addr; } ;
struct TYPE_10__ {TYPE_1__ api_open; } ;
typedef TYPE_3__ tBTA_AG_DATA ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(tBTA_AG_SCB *VAR_2, tBTA_AG_DATA *VAR_3)
{
    BD_ADDR VAR_4;

    if (VAR_3) {
        FUNC_1(VAR_2->peer_addr, VAR_3->api_open.bd_addr);
        VAR_2->open_services = VAR_3->api_open.services;
        VAR_2->cli_sec_mask = VAR_3->api_open.sec_mask;
    }

    if (FUNC_0 (VAR_4)) {



        FUNC_3 (0, VAR_1, 0, VAR_2->peer_addr);
        return;
    }

    FUNC_2(VAR_2, VAR_2->reg_services);

    VAR_2->role = VAR_0;

    FUNC_4(VAR_2, VAR_2->open_services);
}
