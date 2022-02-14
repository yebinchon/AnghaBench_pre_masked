
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
typedef TYPE_1__ tBTA_HF_CLIENT_VAL ;
typedef int tBTA_HF_CLIENT_EVT ;
typedef int evt ;
typedef int UINT16 ;
struct TYPE_6__ {int (* p_cback ) (int ,TYPE_1__*) ;} ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2(tBTA_HF_CLIENT_EVT VAR_1, UINT16 VAR_2)
{
    tBTA_HF_CLIENT_VAL VAR_3;

    FUNC_0(&VAR_3, 0, sizeof(VAR_3));

    VAR_3.value = VAR_2;

    (*VAR_0.p_cback)(VAR_1, &VAR_3);
}
