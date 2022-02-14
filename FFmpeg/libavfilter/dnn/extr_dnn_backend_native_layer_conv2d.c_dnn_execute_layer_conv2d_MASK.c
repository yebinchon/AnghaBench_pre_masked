
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {int kernel_size; int input_num; scalar_t__ padding_method; int dilation; int output_num; float* biases; float* kernel; int activation; scalar_t__ has_bias; } ;
struct TYPE_5__ {int* dims; float* data; int length; int data_type; } ;
typedef TYPE_1__ DnnOperand ;
typedef TYPE_2__ ConvolutionalParams ;


 int FUNC_0 (int,int) ;
 float FUNC_1 (float,double) ;
 double FUNC_2 (float,double) ;



 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 float* FUNC_4 (float*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (float) ;

int FUNC_7(DnnOperand *VAR_2, const int32_t *VAR_3,
                             int32_t VAR_4, const void *VAR_5)
{
    float *VAR_6;
    int32_t VAR_7 = VAR_3[0];
    int VAR_8 = VAR_2[VAR_7].dims[0];
    int VAR_9 = VAR_2[VAR_7].dims[1];
    int VAR_10 = VAR_2[VAR_7].dims[2];
    int VAR_11 = VAR_2[VAR_7].dims[3];
    const float *VAR_12 = VAR_2[VAR_7].data;
    const ConvolutionalParams *VAR_13 = (const ConvolutionalParams *)VAR_5;

    int VAR_14 = VAR_13->kernel_size >> 1;
    int VAR_15 = VAR_10 * VAR_13->input_num;
    int VAR_16 = VAR_13->kernel_size * VAR_13->input_num;
    int VAR_17 = VAR_13->kernel_size * VAR_16;
    int VAR_18 = (VAR_13->padding_method == VAR_1) ? (VAR_13->kernel_size - 1) / 2 * VAR_13->dilation : 0;

    DnnOperand *VAR_19 = &VAR_2[VAR_4];
    VAR_19->dims[0] = VAR_8;
    VAR_19->dims[1] = VAR_9 - VAR_18 * 2;
    VAR_19->dims[2] = VAR_10 - VAR_18 * 2;
    VAR_19->dims[3] = VAR_13->output_num;
    VAR_19->data_type = VAR_2[VAR_7].data_type;
    VAR_19->length = FUNC_5(VAR_19);
    VAR_19->data = FUNC_4(VAR_19->data, VAR_19->length);
    if (!VAR_19->data)
        return -1;
    VAR_6 = VAR_19->data;

    FUNC_3(VAR_11 == VAR_13->input_num);

    for (int VAR_20 = VAR_18; VAR_20 < VAR_9 - VAR_18; ++VAR_20) {
        for (int VAR_21 = VAR_18; VAR_21 < VAR_10 - VAR_18; ++VAR_21) {
            for (int VAR_22 = 0; VAR_22 < VAR_13->output_num; ++VAR_22) {
                if (VAR_13->has_bias)
                    VAR_6[VAR_22] = VAR_13->biases[VAR_22];
                else
                    VAR_6[VAR_22] = 0.f;

                for (int VAR_23 = 0; VAR_23 < VAR_13->input_num; ++VAR_23) {
                    for (int VAR_24 = 0; VAR_24 < VAR_13->kernel_size; ++VAR_24) {
                        for (int VAR_25 = 0; VAR_25 < VAR_13->kernel_size; ++VAR_25) {
                            float VAR_26;
                            if (VAR_13->padding_method == VAR_0) {
                                int VAR_27 = FUNC_0(VAR_20 + (VAR_24 - VAR_14) * VAR_13->dilation, VAR_9);
                                int VAR_28 = FUNC_0(VAR_21 + (VAR_25 - VAR_14) * VAR_13->dilation, VAR_10);
                                VAR_26 = VAR_12[VAR_27 * VAR_15 + VAR_28 * VAR_13->input_num + VAR_23];
                            } else {
                                int VAR_29 = VAR_20 + (VAR_24 - VAR_14) * VAR_13->dilation;
                                int VAR_30 = VAR_21 + (VAR_25 - VAR_14) * VAR_13->dilation;
                                VAR_26 = (VAR_30 < 0 || VAR_30 >= VAR_10 || VAR_29 < 0 || VAR_29 >= VAR_9) ? 0.0 :
                                                   VAR_12[VAR_29 * VAR_15 + VAR_30 * VAR_13->input_num + VAR_23];
                            }


                            VAR_6[VAR_22] += VAR_26 * VAR_13->kernel[VAR_22 * VAR_17 + VAR_24 * VAR_16 +
                                                                                VAR_25 * VAR_13->input_num + VAR_23];
                        }
                    }
                }
                switch (VAR_13->activation){
                case 130:
                    VAR_6[VAR_22] = FUNC_1(VAR_6[VAR_22], 0.0);
                    break;
                case 128:
                    VAR_6[VAR_22] = 2.0f / (1.0f + FUNC_6(-2.0f * VAR_6[VAR_22])) - 1.0f;
                    break;
                case 129:
                    VAR_6[VAR_22] = 1.0f / (1.0f + FUNC_6(-VAR_6[VAR_22]));
                    break;
                case 131:
                    break;
                case 132:
                    VAR_6[VAR_22] = FUNC_1(VAR_6[VAR_22], 0.0) + 0.2 * FUNC_2(VAR_6[VAR_22], 0.0);
                }
            }
            VAR_6 += VAR_13->output_num;
        }
    }
    return 0;
}
