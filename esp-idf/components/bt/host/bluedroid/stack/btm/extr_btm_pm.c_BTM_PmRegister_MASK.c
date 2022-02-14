
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_PM_STATUS_CBACK ;
typedef int UINT8 ;
struct TYPE_4__ {TYPE_1__* pm_reg_db; } ;
struct TYPE_3__ {int mask; int * cback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;

tBTM_STATUS FUNC_0 (UINT8 VAR_8, UINT8 *VAR_9, tBTM_PM_STATUS_CBACK *VAR_10)
{
    int VAR_11;


    if (VAR_8 & VAR_3) {
        if (*VAR_9 >= VAR_1) {
            return VAR_0;
        }
        VAR_7.pm_reg_db[*VAR_9].mask = VAR_4;
        return VAR_6;
    }

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {

        if (VAR_7.pm_reg_db[VAR_11].mask == VAR_4) {

            if (VAR_8 & VAR_5) {
                if (VAR_10 == ((void*)0)) {
                    return VAR_0;
                }
                VAR_7.pm_reg_db[VAR_11].cback = VAR_10;
            }
            VAR_7.pm_reg_db[VAR_11].mask = VAR_8;
            *VAR_9 = VAR_11;
            return VAR_6;
        }
    }

    return VAR_2;
}
