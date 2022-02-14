
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_11__ {scalar_t__ data; scalar_t__ extended_data; int nb_samples; int channel_layout; int channels; int height; int width; int format; int * buf; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

int FUNC_7(AVFrame *VAR_1)
{
    AVFrame VAR_2;
    int VAR_3;

    if (!VAR_1->buf[0])
        return FUNC_0(VAR_0);

    if (FUNC_4(VAR_1))
        return 0;

    FUNC_6(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.format = VAR_1->format;
    VAR_2.width = VAR_1->width;
    VAR_2.height = VAR_1->height;
    VAR_2.channels = VAR_1->channels;
    VAR_2.channel_layout = VAR_1->channel_layout;
    VAR_2.nb_samples = VAR_1->nb_samples;
    VAR_3 = FUNC_3(&VAR_2, 32);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_3 = FUNC_1(&VAR_2, VAR_1);
    if (VAR_3 < 0) {
        FUNC_5(&VAR_2);
        return VAR_3;
    }

    VAR_3 = FUNC_2(&VAR_2, VAR_1);
    if (VAR_3 < 0) {
        FUNC_5(&VAR_2);
        return VAR_3;
    }

    FUNC_5(VAR_1);

    *VAR_1 = VAR_2;
    if (VAR_2.data == VAR_2.extended_data)
        VAR_1->extended_data = VAR_1->data;

    return 0;
}
