
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int on_event; } ;
struct TYPE_10__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int frame_rate; int sample_aspect_ratio; int time_base; int h; int w; TYPE_3__* src; } ;
struct TYPE_8__ {int nb_planes; void*** ifft; void*** fft; int * fft_bits; TYPE_4__ fs; } ;
typedef TYPE_1__ ConvolveContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    ConvolveContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->inputs[0];
    int VAR_7, VAR_8, VAR_9;

    VAR_5->fs.on_event = VAR_2;
    VAR_7 = FUNC_3(&VAR_5->fs, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;
    VAR_3->w = VAR_6->w;
    VAR_3->h = VAR_6->h;
    VAR_3->time_base = VAR_6->time_base;
    VAR_3->sample_aspect_ratio = VAR_6->sample_aspect_ratio;
    VAR_3->frame_rate = VAR_6->frame_rate;

    if ((VAR_7 = FUNC_2(&VAR_5->fs)) < 0)
        return VAR_7;

    for (VAR_8 = 0; VAR_8 < VAR_5->nb_planes; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
            VAR_5->fft[VAR_8][VAR_9] = FUNC_1(VAR_5->fft_bits[VAR_8], 0);
            VAR_5->ifft[VAR_8][VAR_9] = FUNC_1(VAR_5->fft_bits[VAR_8], 1);
            if (!VAR_5->fft[VAR_8][VAR_9] || !VAR_5->ifft[VAR_8][VAR_9])
                return FUNC_0(VAR_0);
        }
    }

    return 0;
}
