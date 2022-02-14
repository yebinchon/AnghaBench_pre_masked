
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {int block_size; } ;
struct TYPE_5__ {int* dims; float* data; int length; int data_type; } ;
typedef TYPE_1__ DnnOperand ;
typedef TYPE_2__ DepthToSpaceParams ;


 float* FUNC_0 (float*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(DnnOperand *VAR_0, const int32_t *VAR_1,
                                  int32_t VAR_2, const void *VAR_3)
{
    float *VAR_4;
    const DepthToSpaceParams *VAR_5 = (const DepthToSpaceParams *)VAR_3;
    int VAR_6 = VAR_5->block_size;
    int32_t VAR_7 = VAR_1[0];
    int VAR_8 = VAR_0[VAR_7].dims[0];
    int VAR_9 = VAR_0[VAR_7].dims[1];
    int VAR_10 = VAR_0[VAR_7].dims[2];
    int VAR_11 = VAR_0[VAR_7].dims[3];
    const float *VAR_12 = VAR_0[VAR_7].data;

    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18 = VAR_11 / (VAR_6 * VAR_6);
    int VAR_19 = VAR_10 * VAR_11;
    int VAR_20 = VAR_19 / VAR_6;
    int VAR_21 = VAR_18 * VAR_6;

    DnnOperand *VAR_22 = &VAR_0[VAR_2];
    VAR_22->dims[0] = VAR_8;
    VAR_22->dims[1] = VAR_9 * VAR_6;
    VAR_22->dims[2] = VAR_10 * VAR_6;
    VAR_22->dims[3] = VAR_18;
    VAR_22->data_type = VAR_0[VAR_7].data_type;
    VAR_22->length = FUNC_1(VAR_22);
    VAR_22->data = FUNC_0(VAR_22->data, VAR_22->length);
    if (!VAR_22->data)
        return -1;
    VAR_4 = VAR_22->data;

    for (VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13){
        for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14){
            for (VAR_15 = 0; VAR_15 < VAR_6; ++VAR_15){
                for (VAR_16 = 0; VAR_16 < VAR_6; ++VAR_16){
                    for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17){
                        VAR_4[VAR_15 * VAR_20 + VAR_14 * VAR_21 + VAR_16 * VAR_18 + VAR_17] = VAR_12[VAR_17];
                    }
                    VAR_12 += VAR_18;
                }
            }
        }
        VAR_4 += VAR_19;
    }
    return 0;
}
