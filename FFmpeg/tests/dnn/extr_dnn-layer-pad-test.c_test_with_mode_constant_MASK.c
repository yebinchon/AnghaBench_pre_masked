
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int expected_output ;
struct TYPE_6__ {float* data; int* dims; } ;
struct TYPE_5__ {int constant_values; int** paddings; int mode; } ;
typedef TYPE_1__ LayerPadParams ;
typedef TYPE_2__ DnnOperand ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float**) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (char*,int,float,float) ;

__attribute__((used)) static int FUNC_4(void)
{
    LayerPadParams VAR_2;
    DnnOperand VAR_3[2];
    int32_t VAR_4[1];
    float VAR_5[1*2*2*3] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    };
    float VAR_6[1*3*2*6] = {
        728.0, 728.0, 728.0, 728.0, 728.0, 728.0, 728.0, 728.0, 728.0, 728.0, 728.0,
        728.0, 728.0, 0.0, 1.0, 2.0, 728.0, 728.0, 728.0, 3.0, 4.0, 5.0, 728.0, 728.0,
        728.0, 6.0, 7.0, 8.0, 728.0, 728.0, 728.0, 9.0, 10.0, 11.0, 728.0, 728.0
    };
    float *VAR_7;

    VAR_2.mode = VAR_1;
    VAR_2.constant_values = 728;
    VAR_2.paddings[0][0] = 0;
    VAR_2.paddings[0][1] = 0;
    VAR_2.paddings[1][0] = 1;
    VAR_2.paddings[1][1] = 0;
    VAR_2.paddings[2][0] = 0;
    VAR_2.paddings[2][1] = 0;
    VAR_2.paddings[3][0] = 1;
    VAR_2.paddings[3][1] = 2;

    VAR_3[0].data = VAR_5;
    VAR_3[0].dims[0] = 1;
    VAR_3[0].dims[1] = 2;
    VAR_3[0].dims[2] = 2;
    VAR_3[0].dims[3] = 3;
    VAR_3[1].data = ((void*)0);

    VAR_4[0] = 0;
    FUNC_1(VAR_3, VAR_4, 1, &VAR_2);

    VAR_7 = VAR_3[1].data;
    for (int VAR_8 = 0; VAR_8 < sizeof(VAR_6) / sizeof(float); VAR_8++) {
        if (FUNC_2(VAR_7[VAR_8] - VAR_6[VAR_8]) > VAR_0) {
            FUNC_3("at index %d, output: %f, expected_output: %f\n", VAR_8, VAR_7[VAR_8], VAR_6[VAR_8]);
            FUNC_0(&VAR_7);
            return 1;
        }
    }

    FUNC_0(&VAR_7);
    return 0;

}
