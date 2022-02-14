
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_IND_TYPE ;
struct TYPE_5__ {int value; int type; } ;
typedef TYPE_1__ tBTA_HF_CLIENT_IND ;
typedef int evt ;
typedef int UINT16 ;
struct TYPE_6__ {int (* p_cback ) (int ,TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2(tBTA_HF_CLIENT_IND_TYPE VAR_2, UINT16 VAR_3)
{
    tBTA_HF_CLIENT_IND VAR_4;

    FUNC_0(&VAR_4, 0, sizeof(VAR_4));

    VAR_4.type = VAR_2;
    VAR_4.value = VAR_3;

    (*VAR_1.p_cback)(VAR_0, &VAR_4);
}
