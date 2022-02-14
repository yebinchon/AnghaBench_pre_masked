
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int axes_count; int buttons_count; int hats_count; TYPE_6__* hats; TYPE_2__* buttons; TYPE_1__* axes; } ;
typedef TYPE_3__ joydata_t ;
struct TYPE_12__ {int min; int max; } ;
struct TYPE_10__ {int min; } ;
struct TYPE_9__ {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_6__*) ;
 int VAR_3 ;
 TYPE_3__** VAR_4 ;

int FUNC_7(void) {
    int VAR_5, VAR_6, VAR_7, VAR_8;
    joydata_t *VAR_9;


    for(VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
        VAR_9 = VAR_4[VAR_5];

        if(!VAR_9) {
            continue;
        }


        for(VAR_6 = 0; VAR_6 < VAR_9->axes_count; ++VAR_6) {
            int VAR_10 = FUNC_0(VAR_9->axes[VAR_6].min, VAR_9->axes[VAR_6].max);

            VAR_8 = FUNC_4(VAR_9, VAR_6);

            if(VAR_9->axes[VAR_6].max > 0 &&
               VAR_8 > FUNC_0(VAR_10, VAR_9->axes[VAR_6].max)) {
                FUNC_1((VAR_5 << 24) | VAR_1 | VAR_6);
                FUNC_2((VAR_5 << 24) | VAR_0 | VAR_6);
            }
            else if(VAR_9->axes[VAR_6].min < 0 &&
                    VAR_8 < FUNC_0(VAR_10, VAR_9->axes[VAR_6].min)) {
                FUNC_2((VAR_5 << 24) | VAR_1 | VAR_6);
                FUNC_1((VAR_5 << 24) | VAR_0 | VAR_6);
            }
            else {
                FUNC_2((VAR_5 << 24) | VAR_1 | VAR_6);
                FUNC_2((VAR_5 << 24) | VAR_0 | VAR_6);
            }
        }


        for(VAR_6 = 1; VAR_6 <= VAR_9->buttons_count; ++VAR_6) {
            VAR_8 = FUNC_5(VAR_9, VAR_6);

            if(VAR_8 > VAR_9->buttons[VAR_6].min) {
                FUNC_1((VAR_5 << 24) | VAR_6);
            }
            else {
                FUNC_2((VAR_5 << 24) | VAR_6);
            }
        }


        for(VAR_6 = 0; VAR_6 < VAR_9->hats_count; ++VAR_6) {
            VAR_8 = FUNC_6(VAR_9, VAR_9->hats + VAR_6);

            for(VAR_7 = VAR_9->hats[VAR_6].min; VAR_7 < VAR_9->hats[VAR_6].max; ++VAR_7) {
                if(VAR_8 == VAR_7) {
                    FUNC_1((VAR_5 << 24) | VAR_2 | (VAR_7 << 8) | VAR_6);
                }
                else {
                    FUNC_2((VAR_5 << 24) | VAR_2 | (VAR_7 << 8) | VAR_6);
                }
            }
        }
    }

    if(FUNC_3() != 0) {
        return -1;
    }

    return 0;
}
