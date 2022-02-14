
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_15__ {int format; int nb_extended_buf; TYPE_2__** extended_buf; int ** extended_data; TYPE_1__** buf; int ** data; int * linesize; int channels; int nb_samples; int height; int width; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int type; int format; int planes; int * pools; int * linesize; int channels; int nb_samples; int height; int width; } ;
struct TYPE_12__ {int * data; } ;
struct TYPE_11__ {int * data; } ;
typedef TYPE_3__ FFFramePool ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFrame ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_5__**) ;
 void* FUNC_5 (int,int) ;
 TYPE_4__* FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;

AVFrame *FUNC_8(FFFramePool *VAR_5)
{
    int VAR_6;
    AVFrame *VAR_7;
    const AVPixFmtDescriptor *VAR_8;

    VAR_7 = FUNC_3();
    if (!VAR_7) {
        return ((void*)0);
    }

    switch(VAR_5->type) {
    case 128:
        VAR_8 = FUNC_6(VAR_5->format);
        if (!VAR_8) {
            goto fail;
        }

        VAR_7->width = VAR_5->width;
        VAR_7->height = VAR_5->height;
        VAR_7->format = VAR_5->format;

        for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            VAR_7->linesize[VAR_6] = VAR_5->linesize[VAR_6];
            if (!VAR_5->pools[VAR_6])
                break;

            VAR_7->buf[VAR_6] = FUNC_2(VAR_5->pools[VAR_6]);
            if (!VAR_7->buf[VAR_6])
                goto fail;

            VAR_7->data[VAR_6] = VAR_7->buf[VAR_6]->data;
        }

        if (VAR_8->flags & VAR_2 ||
            VAR_8->flags & VAR_4) {
            enum AVPixelFormat VAR_9 =
                VAR_5->format == VAR_3 ? VAR_1 : VAR_5->format;

            FUNC_1(VAR_7->data[1] != ((void*)0));
            if (FUNC_7((uint32_t *)VAR_7->data[1], VAR_9) < 0)
                goto fail;
        }

        VAR_7->extended_data = VAR_7->data;
        break;
    case 129:
        VAR_7->nb_samples = VAR_5->nb_samples;
        VAR_7->channels = VAR_5->channels;
        VAR_7->format = VAR_5->format;
        VAR_7->linesize[0] = VAR_5->linesize[0];

        if (VAR_5->planes > VAR_0) {
            VAR_7->extended_data = FUNC_5(VAR_5->planes,
                                                    sizeof(*VAR_7->extended_data));
            VAR_7->nb_extended_buf = VAR_5->planes - VAR_0;
            VAR_7->extended_buf = FUNC_5(VAR_7->nb_extended_buf,
                                                   sizeof(*VAR_7->extended_buf));
            if (!VAR_7->extended_data || !VAR_7->extended_buf)
                goto fail;
        } else {
            VAR_7->extended_data = VAR_7->data;
            FUNC_1(VAR_7->nb_extended_buf == 0);
        }

        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->planes, VAR_0); VAR_6++) {
            VAR_7->buf[VAR_6] = FUNC_2(VAR_5->pools[0]);
            if (!VAR_7->buf[VAR_6])
                goto fail;
            VAR_7->extended_data[VAR_6] = VAR_7->data[VAR_6] = VAR_7->buf[VAR_6]->data;
        }
        for (VAR_6 = 0; VAR_6 < VAR_7->nb_extended_buf; VAR_6++) {
            VAR_7->extended_buf[VAR_6] = FUNC_2(VAR_5->pools[0]);
            if (!VAR_7->extended_buf[VAR_6])
                goto fail;
            VAR_7->extended_data[VAR_6 + VAR_0] = VAR_7->extended_buf[VAR_6]->data;
        }

        break;
    default:
        FUNC_1(0);
    }

    return VAR_7;
fail:
    FUNC_4(&VAR_7);
    return ((void*)0);
}
