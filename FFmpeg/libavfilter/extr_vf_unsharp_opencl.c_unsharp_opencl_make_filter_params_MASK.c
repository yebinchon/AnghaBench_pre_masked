
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* cl_mem ;
typedef int cl_int ;
struct TYPE_12__ {TYPE_2__* hwctx; int output_format; } ;
struct TYPE_14__ {int nb_planes; float luma_size_x; float luma_size_y; float luma_amount; float chroma_size_x; float chroma_size_y; float chroma_amount; TYPE_4__* plane; TYPE_3__ ocf; scalar_t__ global; } ;
typedef TYPE_5__ UnsharpOpenCLContext ;
struct TYPE_16__ {TYPE_5__* priv; } ;
struct TYPE_15__ {int nb_components; int flags; TYPE_1__* comp; } ;
struct TYPE_13__ {double* blur_x; double* blur_y; int size_x; int size_y; float amount; void* coef_y; void* coef_x; void* matrix; } ;
struct TYPE_11__ {int context; } ;
struct TYPE_10__ {scalar_t__ plane; } ;
typedef TYPE_6__ AVPixFmtDescriptor ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (float**) ;
 float* FUNC_4 (size_t) ;
 TYPE_6__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (float) ;
 void* FUNC_7 (int ,int,int,float*,int *) ;
 double FUNC_8 (double) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_6)
{
    UnsharpOpenCLContext *VAR_7 = VAR_6->priv;
    const AVPixFmtDescriptor *VAR_8;
    float *VAR_9;
    double VAR_10, VAR_11;
    cl_int VAR_12;
    cl_mem VAR_13;
    size_t VAR_14;
    float VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

    VAR_8 = FUNC_5(VAR_7->ocf.output_format);

    VAR_7->nb_planes = 0;
    for (VAR_19 = 0; VAR_19 < VAR_8->nb_components; VAR_19++)
        VAR_7->nb_planes = FUNC_2(VAR_7->nb_planes, VAR_8->comp[VAR_19].plane + 1);

    for (VAR_19 = 0; VAR_19 < VAR_7->nb_planes; VAR_19++) {
        if (VAR_19 == 0 || (VAR_8->flags & VAR_0)) {
            VAR_15 = VAR_7->luma_size_x;
            VAR_16 = VAR_7->luma_size_y;
            VAR_17 = VAR_7->luma_amount;
        } else {
            VAR_15 = VAR_7->chroma_size_x;
            VAR_16 = VAR_7->chroma_size_y;
            VAR_17 = VAR_7->chroma_amount;
        }
        VAR_22 = (int)FUNC_6(VAR_15) | 1;
        VAR_23 = (int)FUNC_6(VAR_16) | 1;
        VAR_14 = VAR_22 * VAR_23 * sizeof(float);

        VAR_9 = FUNC_4(VAR_14);
        if (!VAR_9) {
            VAR_18 = FUNC_0(VAR_5);
            goto fail;
        }

        VAR_11 = 0.0;
        for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
            double VAR_24 = (double)(VAR_20 - VAR_22 / 2) / VAR_15;
            VAR_11 += VAR_7->plane[VAR_19].blur_x[VAR_20] = FUNC_8(-16.0 * (VAR_24 * VAR_24));
        }
        for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
            VAR_7->plane[VAR_19].blur_x[VAR_20] /= VAR_11;

        VAR_11 = 0.0;
        for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
            double VAR_25 = (double)(VAR_21 - VAR_23 / 2) / VAR_16;
            VAR_11 += VAR_7->plane[VAR_19].blur_y[VAR_21] = FUNC_8(-16.0 * (VAR_25 * VAR_25));
        }
        for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
            VAR_7->plane[VAR_19].blur_y[VAR_21] /= VAR_11;

        for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
                VAR_10 = VAR_7->plane[VAR_19].blur_x[VAR_20] * VAR_7->plane[VAR_19].blur_y[VAR_21];
                VAR_9[VAR_21 * VAR_22 + VAR_20] = VAR_10;
            }
        }

        if (VAR_7->global) {
            VAR_13 = FUNC_7(VAR_7->ocf.hwctx->context,
                                    VAR_3 |
                                    VAR_1 |
                                    VAR_2,
                                    VAR_14, VAR_9, &VAR_12);
            FUNC_1(FUNC_0(VAR_4), "Failed to create matrix buffer: "
                             "%d.\n", VAR_12);
            VAR_7->plane[VAR_19].matrix = VAR_13;
        } else {
            VAR_13 = FUNC_7(VAR_7->ocf.hwctx->context,
                                    VAR_3 |
                                    VAR_1 |
                                    VAR_2,
                                    sizeof(VAR_7->plane[VAR_19].blur_x),
                                    VAR_7->plane[VAR_19].blur_x, &VAR_12);
            FUNC_1(FUNC_0(VAR_4), "Failed to create x-coef buffer: "
                             "%d.\n", VAR_12);
            VAR_7->plane[VAR_19].coef_x = VAR_13;

            VAR_13 = FUNC_7(VAR_7->ocf.hwctx->context,
                                    VAR_3 |
                                    VAR_1 |
                                    VAR_2,
                                    sizeof(VAR_7->plane[VAR_19].blur_y),
                                    VAR_7->plane[VAR_19].blur_y, &VAR_12);
            FUNC_1(FUNC_0(VAR_4), "Failed to create y-coef buffer: "
                             "%d.\n", VAR_12);
            VAR_7->plane[VAR_19].coef_y = VAR_13;
        }

        FUNC_3(&VAR_9);

        VAR_7->plane[VAR_19].size_x = VAR_22;
        VAR_7->plane[VAR_19].size_y = VAR_23;
        VAR_7->plane[VAR_19].amount = VAR_17;
    }

    VAR_18 = 0;
fail:
    FUNC_3(&VAR_9);
    return VAR_18;
}
