
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {int result; } ;
struct TYPE_6__ {TYPE_1__ bond_cancel_cmpl; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
struct TYPE_7__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(tBTM_STATUS VAR_5)
{

    tBTA_DM_SEC VAR_6;

    if (VAR_5 == VAR_3) {
        VAR_6.bond_cancel_cmpl.result = VAR_2;
    } else {
        VAR_6.bond_cancel_cmpl.result = VAR_1;
    }

    if (VAR_4.p_sec_cback) {
        VAR_4.p_sec_cback(VAR_0, &VAR_6);
    }
}
