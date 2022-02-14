
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int timeout; int attempt; int min; int max; } ;
typedef TYPE_1__ tBTM_PM_PWR_MD ;
typedef size_t UINT8 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;

__attribute__((used)) static tBTM_PM_PWR_MD *FUNC_0(tBTM_PM_PWR_MD *VAR_5, tBTM_PM_PWR_MD *VAR_6, tBTM_PM_PWR_MD *VAR_7)
{
    UINT8 VAR_8;

    if (VAR_5 == ((void*)0)) {
        *VAR_7 = *VAR_6;
        VAR_7->mode &= ~VAR_1;

        return VAR_6;
    }

    if (VAR_6->mode == VAR_0 || VAR_5->mode == VAR_0) {
        return ((void*)0);
    }


    if (VAR_5->mode & VAR_1) {
        *VAR_7 = *VAR_5;
        VAR_7->mode &= ~VAR_1;
        return VAR_7;
    }

    if (VAR_6->mode & VAR_1) {
        *VAR_7 = *VAR_6;
        VAR_7->mode &= ~VAR_1;
        return VAR_7;
    }

    VAR_8 = (VAR_5->mode - 1) * VAR_3 + (VAR_6->mode - 1);
    VAR_8 = VAR_4[VAR_8];
    switch (VAR_8) {
    case 129:
        *VAR_7 = *VAR_5;
        return VAR_5;

    case 128:
        *VAR_7 = *VAR_6;
        return VAR_6;

    case 130:
        VAR_7->mode = VAR_5->mode;

        VAR_7->max = (VAR_5->max < VAR_6->max) ? (VAR_5->max) : (VAR_6->max);

        VAR_7->min = (VAR_5->min > VAR_6->min) ? (VAR_5->min) : (VAR_6->min);


        if ( VAR_7->max < VAR_7->min) {
            return ((void*)0);
        }

        if (VAR_7->mode == VAR_2) {

            VAR_7->attempt = (VAR_5->attempt > VAR_6->attempt) ? (VAR_5->attempt) : (VAR_6->attempt);
            VAR_7->timeout = (VAR_5->timeout > VAR_6->timeout) ? (VAR_5->timeout) : (VAR_6->timeout);
        }
        return VAR_7;
    }
    return ((void*)0);
}
