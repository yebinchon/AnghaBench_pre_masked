
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
struct TYPE_6__ {int height; int width; int plane; int linesize; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {double* values; int bps; int * e; void** dst16; void** dst; } ;
typedef TYPE_2__ GEQContext ;
typedef TYPE_3__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* FUNC_0 (int ,double*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_9, void *VAR_10, int VAR_11, int VAR_12)
{
    GEQContext *VAR_13 = VAR_9->priv;
    ThreadData *VAR_14 = VAR_10;
    const int VAR_15 = VAR_14->height;
    const int VAR_16 = VAR_14->width;
    const int VAR_17 = VAR_14->plane;
    const int VAR_18 = VAR_14->linesize;
    const int VAR_19 = (VAR_15 * VAR_11) / VAR_12;
    const int VAR_20 = (VAR_15 * (VAR_11+1)) / VAR_12;
    int VAR_21, VAR_22;
    uint8_t *VAR_23;
    uint16_t *VAR_24;

    double VAR_25[VAR_5];
    VAR_25[VAR_6] = VAR_13->values[VAR_6];
    VAR_25[VAR_0] = VAR_13->values[VAR_0];
    VAR_25[VAR_1] = VAR_13->values[VAR_1];
    VAR_25[VAR_3] = VAR_13->values[VAR_3];
    VAR_25[VAR_2] = VAR_13->values[VAR_2];
    VAR_25[VAR_4] = VAR_13->values[VAR_4];

    if (VAR_13->bps == 8) {
        for (VAR_22 = VAR_19; VAR_22 < VAR_20; VAR_22++) {
            VAR_23 = VAR_13->dst + VAR_18 * VAR_22;
            VAR_25[VAR_8] = VAR_22;

            for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
                VAR_25[VAR_7] = VAR_21;
                VAR_23[VAR_21] = FUNC_0(VAR_13->e[VAR_17], VAR_25, VAR_13);
            }
            VAR_23 += VAR_18;
        }
    }
    else {
        for (VAR_22 = VAR_19; VAR_22 < VAR_20; VAR_22++) {
            VAR_24 = VAR_13->dst16 + (VAR_18/2) * VAR_22;
            VAR_25[VAR_8] = VAR_22;
            for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
                VAR_25[VAR_7] = VAR_21;
                VAR_24[VAR_21] = FUNC_0(VAR_13->e[VAR_17], VAR_25, VAR_13);
            }
        }
    }

    return 0;
}
