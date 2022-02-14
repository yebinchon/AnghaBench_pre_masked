
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int samples_skipped; } ;
struct TYPE_18__ {int time_base; TYPE_9__ fifo; int format; int channels; int min_samples; } ;
struct TYPE_17__ {unsigned int nb_samples; int extended_data; int pts; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int ,int ,unsigned int,int ,unsigned int,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_9__*,unsigned int) ;
 unsigned int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,unsigned int,int ) ;
 TYPE_1__* FUNC_8 (TYPE_9__*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,unsigned int) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_1, unsigned VAR_2, unsigned VAR_3,
                        AVFrame **VAR_4)
{
    AVFrame *VAR_5, *VAR_6, *VAR_7;
    unsigned VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12;



    FUNC_1(FUNC_10(VAR_1, VAR_1->min_samples));
    VAR_5 = VAR_6 = FUNC_5(&VAR_1->fifo, 0);
    if (!VAR_1->fifo.samples_skipped && VAR_6->nb_samples >= VAR_2 && VAR_6->nb_samples <= VAR_3) {
        *VAR_4 = FUNC_8(&VAR_1->fifo);
        return 0;
    }
    VAR_9 = 0;
    VAR_8 = 0;
    while (1) {
        if (VAR_8 + VAR_6->nb_samples > VAR_3) {
            if (VAR_8 < VAR_2)
                VAR_8 = VAR_3;
            break;
        }
        VAR_8 += VAR_6->nb_samples;
        VAR_9++;
        if (VAR_9 == FUNC_6(&VAR_1->fifo))
            break;
        VAR_6 = FUNC_5(&VAR_1->fifo, VAR_9);
    }

    VAR_7 = FUNC_9(VAR_1, VAR_8);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_12 = FUNC_2(VAR_7, VAR_5);
    if (VAR_12 < 0) {
        FUNC_3(&VAR_7);
        return VAR_12;
    }
    VAR_7->pts = VAR_5->pts;

    VAR_11 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        VAR_6 = FUNC_8(&VAR_1->fifo);
        FUNC_4(VAR_7->extended_data, VAR_6->extended_data, VAR_11, 0,
                        VAR_6->nb_samples, VAR_1->channels, VAR_1->format);
        VAR_11 += VAR_6->nb_samples;
        FUNC_3(&VAR_6);
    }
    if (VAR_11 < VAR_8) {
        unsigned VAR_13 = VAR_8 - VAR_11;
        VAR_6 = FUNC_5(&VAR_1->fifo, 0);
        FUNC_4(VAR_7->extended_data, VAR_6->extended_data, VAR_11, 0, VAR_13,
                        VAR_1->channels, VAR_1->format);
        FUNC_7(&VAR_1->fifo, VAR_13, VAR_1->time_base);
    }

    *VAR_4 = VAR_7;
    return 0;
}
