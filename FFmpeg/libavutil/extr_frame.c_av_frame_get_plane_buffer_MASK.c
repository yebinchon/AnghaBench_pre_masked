
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int size; int * data; } ;
struct TYPE_7__ {int channels; int nb_extended_buf; TYPE_2__** extended_buf; TYPE_2__** buf; int ** extended_data; int format; scalar_t__ nb_samples; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__**) ;
 scalar_t__ FUNC_2 (int ) ;

AVBufferRef *FUNC_3(AVFrame *VAR_0, int VAR_1)
{
    uint8_t *VAR_2;
    int VAR_3, VAR_4;

    if (VAR_0->nb_samples) {
        int VAR_5 = VAR_0->channels;
        if (!VAR_5)
            return ((void*)0);
        FUNC_0(VAR_0);
        VAR_3 = FUNC_2(VAR_0->format) ? VAR_5 : 1;
    } else
        VAR_3 = 4;

    if (VAR_1 < 0 || VAR_1 >= VAR_3 || !VAR_0->extended_data[VAR_1])
        return ((void*)0);
    VAR_2 = VAR_0->extended_data[VAR_1];

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_0->buf) && VAR_0->buf[VAR_4]; VAR_4++) {
        AVBufferRef *VAR_6 = VAR_0->buf[VAR_4];
        if (VAR_2 >= VAR_6->data && VAR_2 < VAR_6->data + VAR_6->size)
            return VAR_6;
    }
    for (VAR_4 = 0; VAR_4 < VAR_0->nb_extended_buf; VAR_4++) {
        AVBufferRef *VAR_7 = VAR_0->extended_buf[VAR_4];
        if (VAR_2 >= VAR_7->data && VAR_2 < VAR_7->data + VAR_7->size)
            return VAR_7;
    }
    return ((void*)0);
}
