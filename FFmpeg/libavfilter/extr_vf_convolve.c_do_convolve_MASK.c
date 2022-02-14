
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_32__ {int plane; int n; int * vdata; int * hdata; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_36__ {TYPE_1__* internal; TYPE_4__* priv; int ** outputs; } ;
struct TYPE_35__ {int* linesize; scalar_t__* data; } ;
struct TYPE_34__ {int nb_planes; int* fft_len; int* planewidth; int* planeheight; int planes; int* got_impulse; int depth; int ** fft_hdata; int ** fft_vdata; int filter; int ** fft_vdata_impulse; int ** fft_hdata_impulse; scalar_t__ impulse; } ;
struct TYPE_33__ {TYPE_6__* parent; } ;
struct TYPE_31__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef int FFTComplex ;
typedef TYPE_3__ FFFrameSync ;
typedef TYPE_4__ ConvolveContext ;
typedef TYPE_5__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 float FUNC_0 (int,float) ;
 int FUNC_1 (int ,int const,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__**,TYPE_5__**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_5__*,int const,int const,int const,int,float) ;
 int FUNC_6 (TYPE_4__*,int *,TYPE_5__*,int const,int const,int const,int,float) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_8 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_10 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_12 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_13 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_14(FFFrameSync *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->parent;
    AVFilterLink *VAR_7 = VAR_6->outputs[0];
    ConvolveContext *VAR_8 = VAR_6->priv;
    AVFrame *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_11 = FUNC_4(VAR_5, &VAR_9, &VAR_10);
    if (VAR_11 < 0)
        return VAR_11;
    if (!VAR_10)
        return FUNC_2(VAR_7, VAR_9);

    for (VAR_14 = 0; VAR_14 < VAR_8->nb_planes; VAR_14++) {
        FFTComplex *VAR_15 = VAR_8->fft_vdata_impulse[VAR_14];
        FFTComplex *VAR_16 = VAR_8->fft_vdata[VAR_14];
        const int VAR_17 = VAR_8->fft_len[VAR_14];
        const int VAR_18 = VAR_8->planewidth[VAR_14];
        const int VAR_19 = VAR_8->planeheight[VAR_14];
        float VAR_20 = 0;
        ThreadData VAR_21;

        if (!(VAR_8->planes & (1 << VAR_14))) {
            continue;
        }

        VAR_21.plane = VAR_14, VAR_21.n = VAR_17;
        FUNC_5(VAR_8, VAR_8->fft_hdata[VAR_14], VAR_9, VAR_18, VAR_19, VAR_17, VAR_14, 1.f);

        VAR_21.hdata = VAR_8->fft_hdata[VAR_14];
        VAR_21.vdata = VAR_8->fft_vdata[VAR_14];

        VAR_6->internal->execute(VAR_6, VAR_1, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));
        VAR_6->internal->execute(VAR_6, VAR_2, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));

        if ((!VAR_8->impulse && !VAR_8->got_impulse[VAR_14]) || VAR_8->impulse) {
            if (VAR_8->depth == 8) {
                for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
                    const uint8_t *VAR_22 = (const uint8_t *)(VAR_10->data[VAR_14] + VAR_12 * VAR_10->linesize[VAR_14]) ;
                    for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {
                        VAR_20 += VAR_22[VAR_13];
                    }
                }
            } else {
                for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
                    const uint16_t *VAR_23 = (const uint16_t *)(VAR_10->data[VAR_14] + VAR_12 * VAR_10->linesize[VAR_14]) ;
                    for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {
                        VAR_20 += VAR_23[VAR_13];
                    }
                }
            }
            VAR_20 = FUNC_0(1, VAR_20);

            FUNC_5(VAR_8, VAR_8->fft_hdata_impulse[VAR_14], VAR_10, VAR_18, VAR_19, VAR_17, VAR_14, 1.f / VAR_20);

            VAR_21.hdata = VAR_8->fft_hdata_impulse[VAR_14];
            VAR_21.vdata = VAR_8->fft_vdata_impulse[VAR_14];

            VAR_6->internal->execute(VAR_6, VAR_1, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));
            VAR_6->internal->execute(VAR_6, VAR_2, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));

            VAR_8->got_impulse[VAR_14] = 1;
        }

        VAR_21.hdata = VAR_16;
        VAR_21.vdata = VAR_15;

        VAR_6->internal->execute(VAR_6, VAR_8->filter, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));

        VAR_21.hdata = VAR_8->fft_hdata[VAR_14];
        VAR_21.vdata = VAR_8->fft_vdata[VAR_14];

        VAR_6->internal->execute(VAR_6, VAR_4, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));
        VAR_6->internal->execute(VAR_6, VAR_3, &VAR_21, ((void*)0), FUNC_1(VAR_0, VAR_17, FUNC_3(VAR_6)));

        FUNC_6(VAR_8, VAR_8->fft_hdata[VAR_14], VAR_9, VAR_18, VAR_19, VAR_17, VAR_14, 1.f / (VAR_17 * VAR_17));
    }

    return FUNC_2(VAR_7, VAR_9);
}
