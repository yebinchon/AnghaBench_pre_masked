
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_7__ {int y; } ;
struct TYPE_9__ {TYPE_1__ val; } ;
struct TYPE_8__ {float* data; int length; int data_type; int * dims; } ;
typedef TYPE_2__ DnnOperand ;
typedef TYPE_3__ DnnLayerMaximumParams ;


 int VAR_0 ;
 float FUNC_0 (float const,int ) ;
 float* FUNC_1 (float*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(DnnOperand *VAR_1, const int32_t *VAR_2,
                              int32_t VAR_3, const void *VAR_4)
{
    const DnnOperand *VAR_5 = &VAR_1[VAR_2[0]];
    DnnOperand *VAR_6 = &VAR_1[VAR_3];
    const DnnLayerMaximumParams *VAR_7 = (const DnnLayerMaximumParams *)VAR_4;
    int VAR_8;
    const float *VAR_9;
    float *VAR_10;

    for (int VAR_11 = 0; VAR_11 < 4; ++VAR_11)
        VAR_6->dims[VAR_11] = VAR_5->dims[VAR_11];

    VAR_6->data_type = VAR_5->data_type;
    VAR_6->length = FUNC_2(VAR_6);
    VAR_6->data = FUNC_1(VAR_6->data, VAR_6->length);
    if (!VAR_6->data)
        return VAR_0;

    VAR_8 = FUNC_3(VAR_6);
    VAR_9 = VAR_5->data;
    VAR_10 = VAR_6->data;
    for (int VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12)
        VAR_10[VAR_12] = FUNC_0(VAR_9[VAR_12], VAR_7->val.y);

    return 0;
}
