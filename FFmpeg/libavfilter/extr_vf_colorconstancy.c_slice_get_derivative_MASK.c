
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double uint8_t ;
struct TYPE_6__ {int* meta_data; double*** data; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int* linesize; double** data; } ;
struct TYPE_7__ {int filtersize; double** gauss; int* planeheight; int* planewidth; } ;
typedef TYPE_2__ ColorConstancyContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int const VAR_0 ;
 scalar_t__ FUNC_0 (double const*,int,int,int const,int const,int const,double const) ;
 int FUNC_1 (int const,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_2 (int,int,int const) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(AVFilterContext* VAR_6, void* VAR_7, int VAR_8, int VAR_9)
{
    ColorConstancyContext *VAR_10 = VAR_6->priv;
    ThreadData *VAR_11 = VAR_7;
    AVFrame *VAR_12 = VAR_11->in;
    const int VAR_13 = VAR_11->meta_data[VAR_3];
    const int VAR_14 = VAR_11->meta_data[VAR_1];
    const int VAR_15 = VAR_11->meta_data[VAR_4];
    const int VAR_16 = VAR_11->meta_data[VAR_2];
    const int VAR_17 = VAR_10->filtersize;
    const double *VAR_18 = VAR_10->gauss[VAR_13];
    int VAR_19;

    for (VAR_19 = 0; VAR_19 < VAR_5; ++VAR_19) {
        const int VAR_20 = VAR_10->planeheight[VAR_19];
        const int VAR_21 = VAR_10->planewidth[VAR_19];
        const int VAR_22 = VAR_12->linesize[VAR_19];
        double *VAR_23 = VAR_11->data[VAR_16][VAR_19];
        int VAR_24, VAR_25;
        int VAR_26, VAR_27, VAR_28;

        if (VAR_14 == VAR_0) {

            const uint8_t *VAR_29 = VAR_12->data[VAR_19];
            VAR_24 = (VAR_20 * VAR_8 ) / VAR_9;
            VAR_25 = (VAR_20 * (VAR_8 + 1)) / VAR_9;

            for (VAR_26 = VAR_24; VAR_26 < VAR_25; ++VAR_26) {
                for (VAR_27 = 0; VAR_27 < VAR_21; ++VAR_27) {
                    VAR_23[FUNC_2(VAR_26, VAR_27, VAR_21)] = 0;
                    for (VAR_28 = 0; VAR_28 < VAR_17; ++VAR_28) {
                        VAR_23[FUNC_2(VAR_26, VAR_27, VAR_21)] += FUNC_0(VAR_29, VAR_26, VAR_27 + FUNC_1(VAR_17, VAR_28),
                                                          VAR_22, VAR_20, VAR_21, VAR_18[VAR_28]);
                    }
                }
            }
        } else {

            const double *VAR_30 = VAR_11->data[VAR_15][VAR_19];
            VAR_24 = (VAR_21 * VAR_8 ) / VAR_9;
            VAR_25 = (VAR_21 * (VAR_8 + 1)) / VAR_9;

            for (VAR_27 = VAR_24; VAR_27 < VAR_25; ++VAR_27) {
                for (VAR_26 = 0; VAR_26 < VAR_20; ++VAR_26) {
                    VAR_23[FUNC_2(VAR_26, VAR_27, VAR_21)] = 0;
                    for (VAR_28 = 0; VAR_28 < VAR_17; ++VAR_28) {
                        VAR_23[FUNC_2(VAR_26, VAR_27, VAR_21)] += FUNC_0(VAR_30, VAR_26 + FUNC_1(VAR_17, VAR_28), VAR_27,
                                                          VAR_21, VAR_20, VAR_21, VAR_18[VAR_28]);
                    }
                }
            }
        }

    }
    return 0;
}
