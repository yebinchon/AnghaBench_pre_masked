
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int metric_plane; int* planewidth; int metric_w; int metric_length; int metric_offset; int metric_h; } ;
struct TYPE_8__ {TYPE_1__* buffer; } ;
struct TYPE_7__ {int ** planes; } ;
typedef TYPE_2__ PullupField ;
typedef TYPE_3__ PullupContext ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(PullupContext *VAR_0, int *VAR_1,
                           PullupField *VAR_2, int VAR_3, PullupField *VAR_4, int VAR_5,
                           int (*VAR_6)(const uint8_t *, const uint8_t *, VAR_7))
{
    int VAR_8 = VAR_0->metric_plane;
    int VAR_9 = 8;
    int VAR_10 = VAR_0->planewidth[VAR_8] << 3;
    int VAR_11 = VAR_0->planewidth[VAR_8] << 1;
    int VAR_12 = VAR_0->metric_w * VAR_9;
    uint8_t *VAR_13, *VAR_14;
    int VAR_15, VAR_16;

    if (!VAR_2->buffer || !VAR_4->buffer)
        return;


    if (VAR_2->buffer == VAR_4->buffer && VAR_3 == VAR_5) {
        FUNC_0(VAR_1, 0, VAR_0->metric_length * sizeof(*VAR_1));
        return;
    }

    VAR_13 = VAR_2->buffer->planes[VAR_8] + VAR_3 * VAR_0->planewidth[VAR_8] + VAR_0->metric_offset;
    VAR_14 = VAR_4->buffer->planes[VAR_8] + VAR_5 * VAR_0->planewidth[VAR_8] + VAR_0->metric_offset;

    for (VAR_16 = 0; VAR_16 < VAR_0->metric_h; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15 += VAR_9)
            *VAR_1++ = VAR_6(VAR_13 + VAR_15, VAR_14 + VAR_15, VAR_11);
        VAR_13 += VAR_10; VAR_14 += VAR_10;
    }
}
