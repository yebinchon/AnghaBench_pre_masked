
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sec_mask; int bd_addr; } ;
struct TYPE_8__ {TYPE_1__ api_open; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_DATA ;
struct TYPE_7__ {int role; int peer_addr; int cli_sec_mask; } ;
struct TYPE_9__ {TYPE_2__ scb; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;

void FUNC_5(tBTA_HF_CLIENT_DATA *VAR_3)
{
    BD_ADDR VAR_4;


    if (VAR_3) {
        FUNC_1(VAR_2.scb.peer_addr, VAR_3->api_open.bd_addr);
        VAR_2.scb.cli_sec_mask = VAR_3->api_open.sec_mask;
    }


    if (FUNC_0 (VAR_4)) {



        FUNC_3 (0, VAR_1, 0, VAR_2.scb.peer_addr);
        return;
    }


    FUNC_2();


    VAR_2.scb.role = VAR_0;


    FUNC_4();
}
