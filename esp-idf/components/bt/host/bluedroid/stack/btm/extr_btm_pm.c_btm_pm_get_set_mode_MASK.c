
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int mode; } ;
typedef TYPE_2__ tBTM_PM_PWR_MD ;
typedef scalar_t__ tBTM_PM_MODE ;
struct TYPE_14__ {TYPE_2__* req_mode; } ;
typedef TYPE_3__ tBTM_PM_MCB ;
typedef scalar_t__ UINT8 ;
struct TYPE_12__ {int mask; } ;
struct TYPE_11__ {TYPE_1__* pm_reg_db; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_10__ VAR_5 ;
 int * FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static tBTM_PM_MODE FUNC_1(UINT8 VAR_6, tBTM_PM_MCB *VAR_7, tBTM_PM_PWR_MD *VAR_8, tBTM_PM_PWR_MD *VAR_9)
{
    int VAR_10, VAR_11;
    tBTM_PM_PWR_MD *VAR_12 = ((void*)0);

    if (VAR_8 != ((void*)0) && VAR_8->mode & VAR_2) {
        *VAR_9 = *VAR_8;
        VAR_9->mode &= ~VAR_2;
        return VAR_9->mode;
    }

    if (!VAR_8) {
        VAR_11 = VAR_0 + 1;
    } else {
        VAR_11 = VAR_0;
    }

    for ( VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {

        if (VAR_5.pm_reg_db[VAR_10].mask & VAR_3) {
            if (VAR_7->req_mode[VAR_10].mode == VAR_1) {

                return VAR_1;
            } else {

                if ( (FUNC_0(VAR_12, &VAR_7->req_mode[VAR_10], VAR_9)) == ((void*)0)) {
                    return VAR_1;
                }
                VAR_12 = VAR_9;
            }
        }
    }


    if (VAR_12 == ((void*)0)) {
        if (VAR_8) {
            *VAR_9 = *((tBTM_PM_PWR_MD *)VAR_8);
        } else {
            return VAR_1;
        }
    } else {


        if ( (VAR_6 == VAR_4) &&
                ((FUNC_0(VAR_8, VAR_12, VAR_9)) == ((void*)0)) ) {
            return VAR_1;
        }
    }

    return VAR_9->mode;
}
