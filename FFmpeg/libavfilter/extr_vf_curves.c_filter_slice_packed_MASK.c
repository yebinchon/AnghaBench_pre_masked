
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int height; int** data; int* linesize; int const width; } ;
struct TYPE_7__ {int step; int* rgba_map; size_t** graph; scalar_t__ is_16bit; } ;
typedef TYPE_2__ CurvesContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    const CurvesContext *VAR_10 = VAR_4->priv;
    const ThreadData *VAR_11 = VAR_5;
    const AVFrame *VAR_12 = VAR_11->in;
    const AVFrame *VAR_13 = VAR_11->out;
    const int VAR_14 = VAR_13 == VAR_12;
    const int VAR_15 = VAR_10->step;
    const uint8_t VAR_16 = VAR_10->rgba_map[VAR_3];
    const uint8_t VAR_17 = VAR_10->rgba_map[VAR_2];
    const uint8_t VAR_18 = VAR_10->rgba_map[VAR_1];
    const uint8_t VAR_19 = VAR_10->rgba_map[VAR_0];
    const int VAR_20 = (VAR_12->height * VAR_6 ) / VAR_7;
    const int VAR_21 = (VAR_12->height * (VAR_6+1)) / VAR_7;

    if (VAR_10->is_16bit) {
        for (VAR_9 = VAR_20; VAR_9 < VAR_21; VAR_9++) {
            uint16_t *VAR_22 = ( uint16_t *)(VAR_13->data[0] + VAR_9 * VAR_13->linesize[0]);
            const uint16_t *VAR_23 = (const uint16_t *)(VAR_12 ->data[0] + VAR_9 * VAR_12->linesize[0]);

            for (VAR_8 = 0; VAR_8 < VAR_12->width * VAR_15; VAR_8 += VAR_15) {
                VAR_22[VAR_8 + VAR_16] = VAR_10->graph[VAR_3][VAR_23[VAR_8 + VAR_16]];
                VAR_22[VAR_8 + VAR_17] = VAR_10->graph[VAR_2][VAR_23[VAR_8 + VAR_17]];
                VAR_22[VAR_8 + VAR_18] = VAR_10->graph[VAR_1][VAR_23[VAR_8 + VAR_18]];
                if (!VAR_14 && VAR_15 == 4)
                    VAR_22[VAR_8 + VAR_19] = VAR_23[VAR_8 + VAR_19];
            }
        }
    } else {
        uint8_t *VAR_24 = VAR_13->data[0] + VAR_20 * VAR_13->linesize[0];
        const uint8_t *VAR_25 = VAR_12->data[0] + VAR_20 * VAR_12->linesize[0];

        for (VAR_9 = VAR_20; VAR_9 < VAR_21; VAR_9++) {
            for (VAR_8 = 0; VAR_8 < VAR_12->width * VAR_15; VAR_8 += VAR_15) {
                VAR_24[VAR_8 + VAR_16] = VAR_10->graph[VAR_3][VAR_25[VAR_8 + VAR_16]];
                VAR_24[VAR_8 + VAR_17] = VAR_10->graph[VAR_2][VAR_25[VAR_8 + VAR_17]];
                VAR_24[VAR_8 + VAR_18] = VAR_10->graph[VAR_1][VAR_25[VAR_8 + VAR_18]];
                if (!VAR_14 && VAR_15 == 4)
                    VAR_24[VAR_8 + VAR_19] = VAR_25[VAR_8 + VAR_19];
            }
            VAR_24 += VAR_13->linesize[0];
            VAR_25 += VAR_12 ->linesize[0];
        }
    }
    return 0;
}
