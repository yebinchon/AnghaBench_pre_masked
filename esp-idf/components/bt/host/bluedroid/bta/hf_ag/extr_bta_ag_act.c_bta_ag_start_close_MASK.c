
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int post_sco; int peer_addr; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{

    FUNC_4(VAR_3->peer_addr);
    FUNC_0(VAR_3->peer_addr, 0, VAR_2);

    if (FUNC_2(VAR_3)) {
        VAR_3->post_sco = VAR_0;
    } else {
        VAR_3->post_sco = VAR_1;
        FUNC_1(VAR_3, VAR_4);
    }

    FUNC_3(VAR_3, VAR_4);
}
