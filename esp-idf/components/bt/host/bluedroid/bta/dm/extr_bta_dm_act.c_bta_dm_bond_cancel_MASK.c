
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_9__ {int result; } ;
struct TYPE_10__ {TYPE_2__ bond_cancel_cmpl; } ;
typedef TYPE_3__ tBTA_DM_SEC ;
struct TYPE_8__ {int bd_addr; } ;
struct TYPE_11__ {TYPE_1__ bond_cancel; } ;
typedef TYPE_4__ tBTA_DM_MSG ;
struct TYPE_12__ {int (* p_sec_cback ) (int ,TYPE_3__*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_6__ VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3 (tBTA_DM_MSG *VAR_5)
{
    tBTM_STATUS VAR_6;
    tBTA_DM_SEC VAR_7;

    FUNC_0(" bta_dm_bond_cancel ");
    VAR_6 = FUNC_1 ( VAR_5->bond_cancel.bd_addr );

    if (VAR_4.p_sec_cback && (VAR_6 != VAR_2 && VAR_6 != VAR_3)) {
        VAR_7.bond_cancel_cmpl.result = VAR_1;

        VAR_4.p_sec_cback(VAR_0, &VAR_7);
    }

}
