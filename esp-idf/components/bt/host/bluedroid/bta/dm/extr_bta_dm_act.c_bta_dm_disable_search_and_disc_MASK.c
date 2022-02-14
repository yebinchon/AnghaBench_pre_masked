
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result; int bd_addr; } ;
typedef TYPE_1__ tBTA_DM_DI_DISC_CMPL ;
struct TYPE_7__ {int * p_di_db; } ;
struct TYPE_6__ {scalar_t__ state; int (* p_search_cback ) (int ,int *) ;int peer_bdaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4 (void)
{

    tBTA_DM_DI_DISC_CMPL VAR_5;

    if (VAR_4.state != VAR_1) {
        FUNC_1(((void*)0));
    }

    if (VAR_3.p_di_db != ((void*)0)) {
        FUNC_2(&VAR_5, 0, sizeof(tBTA_DM_DI_DISC_CMPL));
        FUNC_0(VAR_5.bd_addr, VAR_4.peer_bdaddr);
        VAR_5.result = VAR_2;

        VAR_3.p_di_db = ((void*)0);
        VAR_4.p_search_cback(VAR_0, ((void*)0));
    }

}
