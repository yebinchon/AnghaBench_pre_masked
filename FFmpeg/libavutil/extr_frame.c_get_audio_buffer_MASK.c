
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* data; } ;
struct TYPE_8__ {int channels; int nb_extended_buf; TYPE_4__** extended_buf; TYPE_4__** extended_data; int * linesize; TYPE_1__** buf; TYPE_4__** data; int format; int nb_samples; int channel_layout; } ;
struct TYPE_7__ {TYPE_4__* data; } ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__***) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(AVFrame *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5 = FUNC_8(VAR_2->format);
    int VAR_6;
    int VAR_7, VAR_8;

    if (!VAR_2->channels)
        VAR_2->channels = FUNC_6(VAR_2->channel_layout);

    VAR_4 = VAR_2->channels;
    VAR_6 = VAR_5 ? VAR_4 : 1;

    FUNC_1(VAR_2);
    if (!VAR_2->linesize[0]) {
        VAR_7 = FUNC_9(&VAR_2->linesize[0], VAR_4,
                                         VAR_2->nb_samples, VAR_2->format,
                                         VAR_3);
        if (VAR_7 < 0)
            return VAR_7;
    }

    if (VAR_6 > VAR_0) {
        VAR_2->extended_data = FUNC_7(VAR_6,
                                          sizeof(*VAR_2->extended_data));
        VAR_2->extended_buf = FUNC_7((VAR_6 - VAR_0),
                                          sizeof(*VAR_2->extended_buf));
        if (!VAR_2->extended_data || !VAR_2->extended_buf) {
            FUNC_5(&VAR_2->extended_data);
            FUNC_5(&VAR_2->extended_buf);
            return FUNC_0(VAR_1);
        }
        VAR_2->nb_extended_buf = VAR_6 - VAR_0;
    } else
        VAR_2->extended_data = VAR_2->data;

    for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_6, VAR_0); VAR_8++) {
        VAR_2->buf[VAR_8] = FUNC_3(VAR_2->linesize[0]);
        if (!VAR_2->buf[VAR_8]) {
            FUNC_4(VAR_2);
            return FUNC_0(VAR_1);
        }
        VAR_2->extended_data[VAR_8] = VAR_2->data[VAR_8] = VAR_2->buf[VAR_8]->data;
    }
    for (VAR_8 = 0; VAR_8 < VAR_6 - VAR_0; VAR_8++) {
        VAR_2->extended_buf[VAR_8] = FUNC_3(VAR_2->linesize[0]);
        if (!VAR_2->extended_buf[VAR_8]) {
            FUNC_4(VAR_2);
            return FUNC_0(VAR_1);
        }
        VAR_2->extended_data[VAR_8 + VAR_0] = VAR_2->extended_buf[VAR_8]->data;
    }
    return 0;

}
