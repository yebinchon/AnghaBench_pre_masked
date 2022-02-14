
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int param_len; int * p_param_buf; } ;
typedef TYPE_1__ tBTM_VSC_CMPL ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_5__ {int (* p_ener_cback ) (int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

void FUNC_5 (tBTM_VSC_CMPL *VAR_1)
{
    UINT8 *VAR_2 = VAR_1->p_param_buf;
    UINT16 VAR_3 = VAR_1->param_len;
    UINT8 VAR_4 = 0;
    UINT32 VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

    if (VAR_3 < 17) {
        FUNC_1("wrong length for btm_ble_cont_energy_cmpl_cback");
        return;
    }

    FUNC_3(VAR_4, VAR_2);
    FUNC_2(VAR_5, VAR_2);
    FUNC_2(VAR_6, VAR_2);
    FUNC_2(VAR_7, VAR_2);
    FUNC_2(VAR_8, VAR_2);

    FUNC_0("energy_info status=%d,tx_t=%u, rx_t=%u, ener_used=%u, idle_t=%u",
                    VAR_4, VAR_5, VAR_6, VAR_8, VAR_7);

    if (((void*)0) != VAR_0.p_ener_cback) {
        VAR_0.p_ener_cback(VAR_5, VAR_6, VAR_7,
                                        VAR_8, VAR_4);
    }

    return;
}
