
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pseudo_addr; int cur_rand_addr; int active_addr_type; } ;
struct TYPE_5__ {TYPE_1__ ble; int bd_addr; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, void *VAR_4)
{
    tBTM_SEC_DEV_REC *VAR_5 = (tBTM_SEC_DEV_REC *) VAR_3;
    UINT8 VAR_6 = VAR_1;
    BD_ADDR VAR_7;
    UINT8 *VAR_8 = (UINT8 *)VAR_4 + 1;
    UINT8 VAR_9;

    FUNC_1 ("btm_ble_resolve_random_addr_on_adv ");

    FUNC_3 (VAR_9, VAR_8);
    FUNC_3 (VAR_6, VAR_8);
    FUNC_2 (VAR_7, VAR_8);

    if (VAR_5) {
        FUNC_0("Random match");
        VAR_5->ble.active_addr_type = VAR_2;
        FUNC_6(VAR_5->ble.cur_rand_addr, VAR_7, VAR_0);

        if (FUNC_4(VAR_5, VAR_7)) {
            FUNC_6(VAR_7, VAR_5->bd_addr, VAR_0);
        } else {

            FUNC_6(VAR_7, VAR_5->ble.pseudo_addr, VAR_0);
        }
    }

    FUNC_5(VAR_7, VAR_6, VAR_9, VAR_8);

    return;
}
