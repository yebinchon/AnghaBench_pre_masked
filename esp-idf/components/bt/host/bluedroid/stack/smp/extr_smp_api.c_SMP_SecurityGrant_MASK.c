
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {scalar_t__ br_state; scalar_t__ cb_evt; scalar_t__ state; int pairing_bda; scalar_t__ smp_over_br; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

void FUNC_4(BD_ADDR VAR_7, UINT8 VAR_8)
{
    FUNC_0 ("SMP_SecurityGrant ");


    if (VAR_6.smp_over_br) {
        if (VAR_6.br_state != VAR_3 ||
                VAR_6.cb_evt != VAR_4 ||
                FUNC_1 (VAR_6.pairing_bda, VAR_7, VAR_0)) {
            return;
        }



        VAR_6.cb_evt = 0;
        FUNC_2(&VAR_6, VAR_2, &VAR_8);
        return;
    }


    if (VAR_6.state != VAR_5 ||
            VAR_6.cb_evt != VAR_4 ||
            FUNC_1 (VAR_6.pairing_bda, VAR_7, VAR_0)) {
        return;
    }


    VAR_6.cb_evt = 0;
    FUNC_3(&VAR_6, VAR_1, &VAR_8);
}
