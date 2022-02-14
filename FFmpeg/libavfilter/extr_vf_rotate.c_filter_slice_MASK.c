
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_8__ {int outw; int outh; int inw; int inh; int plane; int xi; int yi; int c; int s; int const xprime; int const yprime; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int* linesize; int ** data; } ;
struct TYPE_7__ {int const* pixelstep; } ;
struct TYPE_9__ {TYPE_1__ draw; int * (* interpolate_bilinear ) (int *,int *,int,int,int,int,int const,int const) ;scalar_t__ use_bilinear; scalar_t__ angle; } ;
typedef TYPE_3__ RotContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int ,int const) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int,int,int const,int const) ;
 int * FUNC_8 (int *,int *,int,int,int,int,int const,int const) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
    ThreadData *VAR_7 = VAR_4;
    AVFrame *VAR_8 = VAR_7->in;
    AVFrame *VAR_9 = VAR_7->out;
    RotContext *VAR_10 = VAR_3->priv;
    const int VAR_11 = VAR_7->outw, VAR_12 = VAR_7->outh;
    const int VAR_13 = VAR_7->inw, VAR_14 = VAR_7->inh;
    const int VAR_15 = VAR_7->plane;
    const int VAR_16 = VAR_7->xi, VAR_17 = VAR_7->yi;
    const int VAR_18 = VAR_7->c, VAR_19 = VAR_7->s;
    const int VAR_20 = (VAR_12 * VAR_5 ) / VAR_6;
    const int VAR_21 = (VAR_12 * (VAR_5+1)) / VAR_6;
    int VAR_22 = VAR_7->xprime + VAR_20 * VAR_19;
    int VAR_23 = VAR_7->yprime + VAR_20 * VAR_18;
    int VAR_24, VAR_25, VAR_26, VAR_27;

    for (VAR_25 = VAR_20; VAR_25 < VAR_21; VAR_25++) {
        VAR_26 = VAR_22 + VAR_16 + VAR_0*(VAR_13-1)/2;
        VAR_27 = VAR_23 + VAR_17 + VAR_0*(VAR_14-1)/2;

        if (FUNC_5(VAR_10->angle - 0) < VAR_1 && VAR_11 == VAR_13 && VAR_12 == VAR_14) {
            FUNC_7(VAR_9->data[VAR_15] + VAR_25 * VAR_9->linesize[VAR_15],
                           VAR_8->data[VAR_15] + VAR_25 * VAR_8->linesize[VAR_15],
                          VAR_8->linesize[VAR_15], 0, VAR_10->draw.pixelstep[VAR_15], VAR_11);
        } else if (FUNC_5(VAR_10->angle - VAR_2/2) < VAR_1 && VAR_11 == VAR_14 && VAR_12 == VAR_13) {
            FUNC_7(VAR_9->data[VAR_15] + VAR_25 * VAR_9->linesize[VAR_15],
                           VAR_8->data[VAR_15] + VAR_25 * VAR_10->draw.pixelstep[VAR_15],
                          VAR_8->linesize[VAR_15], 1, VAR_10->draw.pixelstep[VAR_15], VAR_11);
        } else if (FUNC_5(VAR_10->angle - VAR_2) < VAR_1 && VAR_11 == VAR_13 && VAR_12 == VAR_14) {
            FUNC_7(VAR_9->data[VAR_15] + VAR_25 * VAR_9->linesize[VAR_15],
                           VAR_8->data[VAR_15] + (VAR_12-VAR_25-1) * VAR_8->linesize[VAR_15],
                          VAR_8->linesize[VAR_15], 2, VAR_10->draw.pixelstep[VAR_15], VAR_11);
        } else if (FUNC_5(VAR_10->angle - 3*VAR_2/2) < VAR_1 && VAR_11 == VAR_14 && VAR_12 == VAR_13) {
            FUNC_7(VAR_9->data[VAR_15] + VAR_25 * VAR_9->linesize[VAR_15],
                           VAR_8->data[VAR_15] + (VAR_12-VAR_25-1) * VAR_10->draw.pixelstep[VAR_15],
                          VAR_8->linesize[VAR_15], 3, VAR_10->draw.pixelstep[VAR_15], VAR_11);
        } else {

        for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++) {
            int32_t VAR_28;
            int VAR_29, VAR_30;
            uint8_t *VAR_31, *VAR_32;
            VAR_29 = VAR_26>>16;
            VAR_30 = VAR_27>>16;


            if (VAR_29 >= -1 && VAR_29 <= VAR_13 && VAR_30 >= -1 && VAR_30 <= VAR_14) {
                uint8_t VAR_33[4];
                VAR_32 = VAR_9->data[VAR_15] + VAR_25 * VAR_9->linesize[VAR_15] + VAR_24 * VAR_10->draw.pixelstep[VAR_15];
                if (VAR_10->use_bilinear) {
                    VAR_31 = VAR_10->interpolate_bilinear(VAR_33,
                                                    VAR_8->data[VAR_15], VAR_8->linesize[VAR_15], VAR_10->draw.pixelstep[VAR_15],
                                                    VAR_26, VAR_27, VAR_13-1, VAR_14-1);
                } else {
                    int VAR_34 = FUNC_4(VAR_29, 0, VAR_13-1);
                    int VAR_35 = FUNC_4(VAR_30, 0, VAR_14-1);
                    VAR_31 = VAR_8->data[VAR_15] + VAR_35 * VAR_8->linesize[VAR_15] + VAR_34 * VAR_10->draw.pixelstep[VAR_15];
                }
                switch (VAR_10->draw.pixelstep[VAR_15]) {
                case 1:
                    *VAR_32 = *VAR_31;
                    break;
                case 2:
                    VAR_28 = FUNC_1(VAR_31);
                    FUNC_3(VAR_32, VAR_28);
                    break;
                case 3:
                    VAR_28 = FUNC_0(VAR_31);
                    FUNC_2(VAR_32, VAR_28);
                    break;
                case 4:
                    *((uint32_t *)VAR_32) = *((uint32_t *)VAR_31);
                    break;
                default:
                    FUNC_6(VAR_32, VAR_31, VAR_10->draw.pixelstep[VAR_15]);
                    break;
                }
            }
            VAR_26 += VAR_18;
            VAR_27 -= VAR_19;
        }
        }
        VAR_22 += VAR_19;
        VAR_23 += VAR_18;
    }

    return 0;
}
