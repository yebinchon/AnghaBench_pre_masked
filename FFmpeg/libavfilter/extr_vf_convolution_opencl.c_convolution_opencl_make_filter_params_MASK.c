
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ cl_mem ;
typedef int cl_int ;
struct TYPE_8__ {TYPE_1__* hwctx; } ;
struct TYPE_9__ {double* biases; char** matrix_str; int* matrix_sizes; int* dims; scalar_t__* matrix; TYPE_2__ ocf; struct TYPE_9__* priv; } ;
struct TYPE_7__ {int context; } ;
typedef TYPE_3__ ConvolutionOpenCLContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (float**) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 float* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,char*,char**) ;
 scalar_t__ FUNC_5 (int ,int,size_t,float*,int*) ;
 int FUNC_6 (char*,char*,float*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_7)
{
    ConvolutionOpenCLContext *VAR_8 = VAR_7->priv;
    float *VAR_9 = ((void*)0);
    size_t VAR_10;
    cl_mem VAR_11;
    cl_int VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;
    char *VAR_16, *VAR_17, *VAR_18 = ((void*)0);
    float VAR_19[4][49];

    for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
        VAR_8->biases[VAR_13] = VAR_8->biases[VAR_13] / 255.0;
    }

    for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
        VAR_16 = VAR_8->matrix_str[VAR_13];
        while (VAR_8->matrix_sizes[VAR_13] < 49) {
            VAR_17 = FUNC_4(VAR_16, " ", &VAR_18);
            if (!VAR_17) {
                break;
            }
            VAR_16 = ((void*)0);
            VAR_15 = FUNC_6(VAR_17, "%f", &VAR_19[VAR_13][VAR_8->matrix_sizes[VAR_13]]);
            if (VAR_15 != 1) {
                FUNC_2(VAR_8, VAR_0, "Matrix is sequence of 9, 25 or 49 signed numbers\n");
                return FUNC_0(VAR_4);
            }
            VAR_8->matrix_sizes[VAR_13]++;
        }
        if (VAR_8->matrix_sizes[VAR_13] == 9) {
            VAR_8->dims[VAR_13] = 3;
        } else if (VAR_8->matrix_sizes[VAR_13] == 25) {
            VAR_8->dims[VAR_13] = 5;
        } else if (VAR_8->matrix_sizes[VAR_13] == 49) {
            VAR_8->dims[VAR_13] = 7;
        } else {
            FUNC_2(VAR_8, VAR_0, "Invalid matrix size:%d\n", VAR_8->matrix_sizes[VAR_13]);
            return FUNC_0(VAR_4);
        }

    }

    for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
        VAR_10 = sizeof(float)*VAR_8->matrix_sizes[VAR_14];
        VAR_9 = FUNC_3(VAR_10);
        if (!VAR_9) {
            FUNC_1(&VAR_9);
            return FUNC_0(VAR_6);
        }

        for (VAR_13 = 0; VAR_13 < VAR_8->matrix_sizes[VAR_14]; VAR_13++)
            VAR_9[VAR_13] = VAR_19[VAR_14][VAR_13];

        VAR_11 = FUNC_5(VAR_8->ocf.hwctx->context,
                                VAR_3 |
                                VAR_1 |
                                VAR_2,
                                VAR_10, VAR_9, &VAR_12);
        if (!VAR_11) {
            FUNC_2(VAR_7, VAR_0, "Failed to create matrix buffer: "
                   "%d.\n", VAR_12);
            FUNC_1(&VAR_9);
            return FUNC_0(VAR_5);
        }
        VAR_8->matrix[VAR_14] = VAR_11;
        FUNC_1(&VAR_9);
    }

    return 0;
}
