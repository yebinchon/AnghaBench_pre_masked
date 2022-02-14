
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_samples; int pts; scalar_t__* extended_data; int channel_layout; int format; int sample_rate; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 float FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(AVFrame *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;




    VAR_5->sample_rate = VAR_3;
    VAR_5->format = VAR_2;
    VAR_5->channel_layout = VAR_1;
    VAR_5->nb_samples = 1024;
    VAR_5->pts = VAR_6 * 1024;

    VAR_7 = FUNC_0(VAR_5, 0);
    if (VAR_7 < 0)
        return VAR_7;


    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
        float *VAR_10 = (float*)VAR_5->extended_data[VAR_8];

        for (VAR_9 = 0; VAR_9 < VAR_5->nb_samples; VAR_9++)
            VAR_10[VAR_9] = FUNC_1(2 * VAR_4 * (VAR_6 + VAR_9) * (VAR_8 + 1) / 1024);
    }

    return 0;
}
