
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int input ;
struct TYPE_6__ {double y; } ;
struct TYPE_8__ {TYPE_1__ val; } ;
struct TYPE_7__ {float* data; int* dims; } ;
typedef TYPE_2__ DnnOperand ;
typedef TYPE_3__ DnnLayerMaximumParams ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (float**) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (char*,int,float,float) ;

__attribute__((used)) static int FUNC_4(void)
{
    DnnLayerMaximumParams VAR_1;
    DnnOperand VAR_2[2];
    int32_t VAR_3[1];
    float VAR_4[1*1*2*3] = {
        -3, 2.5, 2, -2.1, 7.8, 100
    };
    float *VAR_5;

    VAR_1.val.y = 2.3;

    VAR_2[0].data = VAR_4;
    VAR_2[0].dims[0] = 1;
    VAR_2[0].dims[1] = 1;
    VAR_2[0].dims[2] = 2;
    VAR_2[0].dims[3] = 3;
    VAR_2[1].data = ((void*)0);

    VAR_3[0] = 0;
    FUNC_1(VAR_2, VAR_3, 1, &VAR_1);

    VAR_5 = VAR_2[1].data;
    for (int VAR_6 = 0; VAR_6 < sizeof(VAR_4) / sizeof(float); VAR_6++) {
        float VAR_7 = VAR_4[VAR_6] > VAR_1.val.y ? VAR_4[VAR_6] : VAR_1.val.y;
        if (FUNC_2(VAR_5[VAR_6] - VAR_7) > VAR_0) {
            FUNC_3("at index %d, output: %f, expected_output: %f\n", VAR_6, VAR_5[VAR_6], VAR_7);
            FUNC_0(&VAR_5);
            return 1;
        }
    }

    FUNC_0(&VAR_5);
    return 0;

}
