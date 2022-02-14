
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int opacity; scalar_t__ mode; void* blend; } ;
typedef TYPE_1__ FilterParams ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(FilterParams *VAR_6, int VAR_7)
{
    switch (VAR_7) {
    case 8:
        FUNC_4(VAR_6);
        break;
    case 9:
        FUNC_5(VAR_6);
        break;
    case 10:
        FUNC_1(VAR_6);
        break;
    case 12:
        FUNC_2(VAR_6);
        break;
    case 16:
        FUNC_3(VAR_6);
        break;
    }

    if (VAR_6->opacity == 0 && VAR_6->mode != VAR_1) {
        VAR_6->blend = VAR_7 > 8 ? VAR_4 : VAR_5;
    } else if (VAR_6->mode == VAR_1) {
        if (VAR_6->opacity == 1)
            VAR_6->blend = VAR_7 > 8 ? VAR_4 : VAR_5;
        else if (VAR_6->opacity == 0)
            VAR_6->blend = VAR_7 > 8 ? VAR_2 : VAR_3;
    }

    if (VAR_0)
        FUNC_0(VAR_6, VAR_7);
}
