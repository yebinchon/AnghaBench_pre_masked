
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef int (* tUSER_TIMEOUT_FUNC ) (TYPE_2__*) ;
typedef int tCONN_CB ;
struct TYPE_20__ {int event; scalar_t__ param; } ;
struct TYPE_19__ {int (* timer_cb ) (TYPE_2__*) ;TYPE_2__* p_tle; } ;
struct TYPE_18__ {TYPE_1__* timer_reg; } ;
typedef TYPE_2__ TIMER_LIST_ENT ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 TYPE_13__ VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_16(void *VAR_4)
{
    TIMER_LIST_ENT *VAR_5 = (TIMER_LIST_ENT *)VAR_4;
    FUNC_0(VAR_5 != ((void*)0));

    switch (VAR_5->event) {
    case 142:
        FUNC_4(VAR_5);
        break;

    case 135:
    case 139:
    case 137:
    case 136:
    case 138:
    case 134:
        FUNC_9 (VAR_5);
        break;





    case 141:
        FUNC_5();
        break;
    case 133:
        FUNC_10(VAR_5);
        break;

    case 128: {
        tUSER_TIMEOUT_FUNC *VAR_6 = (tUSER_TIMEOUT_FUNC *)VAR_5->param;
        (*VAR_6)(VAR_5);
    }
    break;

    default:;
        int VAR_7 = 0;
        BOOLEAN VAR_8 = VAR_1;

        for (; !VAR_8 && VAR_7 < VAR_0; VAR_7++) {
            if (VAR_3.timer_reg[VAR_7].timer_cb == ((void*)0)) {
                continue;
            }
            if (VAR_3.timer_reg[VAR_7].p_tle == VAR_5) {
                VAR_3.timer_reg[VAR_7].timer_cb(VAR_5);
                VAR_8 = VAR_2;
            }
        }
        break;
    }
}
