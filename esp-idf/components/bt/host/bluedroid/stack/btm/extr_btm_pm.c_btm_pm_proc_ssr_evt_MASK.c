
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ interval; } ;
typedef TYPE_2__ tBTM_PM_MCB ;
struct TYPE_7__ {int remote_addr; } ;
typedef TYPE_3__ tACL_CONN ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {TYPE_1__* pm_reg_db; TYPE_3__* acl_db; TYPE_2__* pm_mode_db; } ;
struct TYPE_5__ {int mask; int (* cback ) (int ,int ,scalar_t__,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_4__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;

void FUNC_5 (UINT8 *VAR_7, UINT16 VAR_8)
{
    UINT8 VAR_9;
    UINT16 VAR_10;
    UINT16 VAR_11;
    int VAR_12, VAR_13;
    tBTM_PM_MCB *VAR_14;
    tACL_CONN *VAR_15 = ((void*)0);
    UINT16 VAR_16 = VAR_5;
    FUNC_2(VAR_8);

    FUNC_1 (VAR_9, VAR_7);

    FUNC_0 (VAR_10, VAR_7);

    if ((VAR_12 = FUNC_3(VAR_10)) >= VAR_4) {
        return;
    }

    VAR_7 += 2;
    FUNC_0 (VAR_11, VAR_7);
    VAR_14 = &(VAR_6.pm_mode_db[VAR_12]);

    VAR_15 = &VAR_6.acl_db[VAR_12];
    if (VAR_14->interval == VAR_11) {

        VAR_16 = VAR_3;
    }


    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        if (VAR_6.pm_reg_db[VAR_13].mask & VAR_1) {
            if ( VAR_15) {
                (*VAR_6.pm_reg_db[VAR_13].cback)( VAR_15->remote_addr, VAR_2, VAR_16, VAR_9);
            }
        }
    }
}
