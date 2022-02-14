
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int security_required; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
struct TYPE_5__ {int (* p_bond_cancel_cmpl_callback ) (int ) ;} ;
struct TYPE_7__ {int pairing_flags; scalar_t__ pairing_state; TYPE_1__ api; int pairing_bda; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (void)
{
    tBTM_SEC_DEV_REC *VAR_9;

    if ((VAR_8.pairing_flags & VAR_0) ||
            (VAR_5 == VAR_8.pairing_state &&
             VAR_2 & VAR_8.pairing_flags) ||
            (VAR_8.pairing_state == VAR_3 &&
             VAR_1 & VAR_8.pairing_flags)) {






        if ((VAR_9 = FUNC_0 (VAR_8.pairing_bda)) != ((void*)0)) {
            VAR_9->security_required = VAR_6;
        }
        FUNC_1 (VAR_4);


        if (VAR_8.api.p_bond_cancel_cmpl_callback) {
            VAR_8.api.p_bond_cancel_cmpl_callback(VAR_7);
        }
    }
}
