
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {scalar_t__ sco_state; int sco_close_rfc; int peer_addr; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(tBTA_HF_CLIENT_DATA *VAR_4)
{


    FUNC_1(VAR_3.scb.peer_addr);

    FUNC_0(VAR_3.scb.peer_addr, 0, VAR_1);


    if (VAR_3.scb.sco_state == VAR_0) {
        VAR_3.scb.sco_close_rfc = VAR_2;
    } else {
        FUNC_2(VAR_4);
    }


    FUNC_3(((void*)0));
}
