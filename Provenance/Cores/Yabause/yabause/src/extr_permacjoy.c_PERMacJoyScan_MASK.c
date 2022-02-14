
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int axes_count; int buttons_count; int hats_count; TYPE_6__* hats; TYPE_2__* buttons; TYPE_1__* axes; } ;
typedef TYPE_3__ joydata_t ;
struct TYPE_12__ {int min; int max; } ;
struct TYPE_10__ {int min; } ;
struct TYPE_9__ {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int VAR_3 ;
 TYPE_3__** VAR_4 ;

u32 FUNC_4(u32 VAR_5) {
    int VAR_6, VAR_7, VAR_8, VAR_9;
    joydata_t *VAR_10;


    for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
        VAR_10 = VAR_4[VAR_6];

        if(!VAR_10) {
            continue;
        }


        for(VAR_7 = 0; VAR_7 < VAR_10->axes_count; ++VAR_7) {
            int VAR_11 = FUNC_0(VAR_10->axes[VAR_7].min, VAR_10->axes[VAR_7].max);

            VAR_9 = FUNC_1(VAR_10, VAR_7);

            if(VAR_10->axes[VAR_7].max > 0 &&
               VAR_9 > FUNC_0(VAR_11, VAR_10->axes[VAR_7].max)) {
                return ((VAR_6 << 24) | VAR_1 | VAR_7);
            }
            else if(VAR_10->axes[VAR_7].min < 0 &&
                    VAR_9 < FUNC_0(VAR_11, VAR_10->axes[VAR_7].min)) {
                return ((VAR_6 << 24) | VAR_0 | VAR_7);
            }
        }


        for(VAR_7 = 1; VAR_7 <= VAR_10->buttons_count; ++VAR_7) {
            VAR_9 = FUNC_2(VAR_10, VAR_7);

            if(VAR_9 > VAR_10->buttons[VAR_7].min) {
                return ((VAR_6 << 24) | VAR_7);
            }
        }


        for(VAR_7 = 0; VAR_7 < VAR_10->hats_count; ++VAR_7) {
            VAR_9 = FUNC_3(VAR_10, VAR_10->hats + VAR_7);

            for(VAR_8 = VAR_10->hats[VAR_7].min; VAR_8 < VAR_10->hats[VAR_7].max; ++VAR_8) {
                if(VAR_9 == VAR_8) {
                    return ((VAR_6 << 24) | VAR_2 | (VAR_8 << 8) | VAR_7);
                }
            }
        }
    }

    return 0;
}
