
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const int16_t ;
struct TYPE_12__ {int w; int h; int channels; int time_base; int sample_rate; } ;
struct TYPE_11__ {int width; int height; int* linesize; scalar_t__* data; scalar_t__ pts; } ;
struct TYPE_10__ {int pixstep; TYPE_2__* outpicref; } ;
typedef TYPE_1__ ShowWavesContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_5(ShowWavesContext *VAR_1, const int16_t *VAR_2,
                           const AVFilterLink *VAR_3, AVFilterLink *VAR_4,
                           const AVFrame *VAR_5)
{
    if (!VAR_1->outpicref) {
        int VAR_6;
        AVFrame *VAR_7 = VAR_1->outpicref =
            FUNC_3(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_7)
            return FUNC_0(VAR_0);
        VAR_7->width = VAR_4->w;
        VAR_7->height = VAR_4->h;
        VAR_7->pts = VAR_5->pts + FUNC_2((VAR_2 - (int16_t *)VAR_5->data[0]) / VAR_3->channels,
                                          FUNC_1(1, VAR_3->sample_rate),
                                          VAR_4->time_base);
        for (VAR_6 = 0; VAR_6 < VAR_4->h; VAR_6++)
            FUNC_4(VAR_7->data[0] + VAR_6*VAR_7->linesize[0], 0, VAR_4->w * VAR_1->pixstep);
    }
    return 0;
}
