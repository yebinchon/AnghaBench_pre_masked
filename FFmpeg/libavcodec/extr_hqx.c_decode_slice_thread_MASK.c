
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {scalar_t__ data_size; scalar_t__ src; TYPE_1__* slice; scalar_t__* slice_off; } ;
struct TYPE_7__ {int gb; } ;
typedef TYPE_2__ HQXContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, void *VAR_4,
                               int VAR_5, int VAR_6)
{
    HQXContext *VAR_7 = VAR_3->priv_data;
    uint32_t *VAR_8 = VAR_7->slice_off;
    int VAR_9;

    if (VAR_8[VAR_5] < VAR_2 ||
        VAR_8[VAR_5] >= VAR_8[VAR_5 + 1] ||
        VAR_8[VAR_5 + 1] > VAR_7->data_size) {
        FUNC_0(VAR_3, VAR_1, "Invalid slice size %d.\n", VAR_7->data_size);
        return VAR_0;
    }

    VAR_9 = FUNC_2(&VAR_7->slice[VAR_5].gb,
                         VAR_7->src + VAR_8[VAR_5],
                         VAR_8[VAR_5 + 1] - VAR_8[VAR_5]);
    if (VAR_9 < 0)
        return VAR_9;

    return FUNC_1(VAR_7, VAR_5);
}
