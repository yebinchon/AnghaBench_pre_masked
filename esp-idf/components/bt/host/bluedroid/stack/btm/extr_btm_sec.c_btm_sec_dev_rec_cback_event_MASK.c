
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pseudo_addr; } ;
struct TYPE_5__ {int p_ref_data; int bd_addr; TYPE_1__ ble; int (* p_callback ) (int ,int ,int ,int ) ;} ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int (* tBTM_SEC_CALLBACK ) (int ,int ,int ,int ) ;
typedef int UINT8 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3 (tBTM_SEC_DEV_REC *VAR_2, UINT8 VAR_3, BOOLEAN VAR_4)
{
    tBTM_SEC_CALLBACK *VAR_5 = &VAR_2->p_callback;

    if (VAR_2->p_callback) {
        VAR_2->p_callback = ((void*)0);


        if (VAR_4) {
            (*VAR_5) (VAR_2->ble.pseudo_addr, VAR_1, VAR_2->p_ref_data, VAR_3);
        } else

        {
            (*VAR_5) (VAR_2->bd_addr, VAR_0, VAR_2->p_ref_data, VAR_3);
        }
    }

    FUNC_0();

}
