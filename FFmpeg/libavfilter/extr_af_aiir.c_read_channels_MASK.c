
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {size_t format; TYPE_1__* iir; } ;
struct TYPE_7__ {int* nb_ab; void** ab; void** cache; } ;
typedef TYPE_1__ IIRChannel ;
typedef TYPE_2__ AudioIIRContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,int*) ;
 int * VAR_2 ;
 int FUNC_6 (TYPE_3__*,char*,int,void*) ;
 int FUNC_7 (TYPE_3__*,char*,int,void*,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_3, int VAR_4, uint8_t *VAR_5, int VAR_6)
{
    AudioIIRContext *VAR_7 = VAR_3->priv;
    char *VAR_8, *VAR_9, *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    int VAR_13, VAR_14;

    VAR_8 = VAR_10 = FUNC_3(VAR_5);
    if (!VAR_8)
        return FUNC_0(VAR_1);
    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        IIRChannel *VAR_15 = &VAR_7->iir[VAR_13];

        if (!(VAR_9 = FUNC_4(VAR_8, "|", &VAR_12)))
            VAR_9 = VAR_11;

        if (!VAR_9) {
            FUNC_2(&VAR_10);
            return FUNC_0(VAR_0);
        }

        FUNC_5(VAR_9, &VAR_15->nb_ab[VAR_6]);

        VAR_8 = ((void*)0);
        VAR_15->cache[VAR_6] = FUNC_1(VAR_15->nb_ab[VAR_6] + 1, sizeof(double));
        VAR_15->ab[VAR_6] = FUNC_1(VAR_15->nb_ab[VAR_6] * (!!VAR_7->format + 1), sizeof(double));
        if (!VAR_15->ab[VAR_6] || !VAR_15->cache[VAR_6]) {
            FUNC_2(&VAR_10);
            return FUNC_0(VAR_1);
        }

        if (VAR_7->format) {
            VAR_14 = FUNC_7(VAR_3, VAR_9, VAR_15->nb_ab[VAR_6], VAR_15->ab[VAR_6], VAR_2[VAR_7->format]);
        } else {
            VAR_14 = FUNC_6(VAR_3, VAR_9, VAR_15->nb_ab[VAR_6], VAR_15->ab[VAR_6]);
        }
        if (VAR_14 < 0) {
            FUNC_2(&VAR_10);
            return VAR_14;
        }
        VAR_11 = VAR_9;
    }

    FUNC_2(&VAR_10);

    return 0;
}
