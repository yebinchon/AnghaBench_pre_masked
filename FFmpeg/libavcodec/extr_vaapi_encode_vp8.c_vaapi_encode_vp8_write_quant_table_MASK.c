
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int quant ;
struct TYPE_9__ {int* quantization_index; scalar_t__* quantization_index_delta; } ;
typedef TYPE_1__ VAQMatrixBufferVP8 ;
struct TYPE_10__ {int q_index_p; int q_index_i; } ;
typedef TYPE_2__ VAAPIEncodeVP8Context ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_3__ VAAPIEncodePicture ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4,
                                              VAAPIEncodePicture *VAR_5,
                                              int VAR_6, int *VAR_7,
                                              char *VAR_8, size_t *VAR_9)
{
    VAAPIEncodeVP8Context *VAR_10 = VAR_4->priv_data;
    VAQMatrixBufferVP8 VAR_11;
    int VAR_12, VAR_13;

    if (VAR_6 > 0)
        return VAR_0;

    if (*VAR_9 < sizeof(VAR_11))
        return FUNC_0(VAR_1);
    *VAR_7 = VAR_3;
    *VAR_9 = sizeof(VAR_11);

    FUNC_2(&VAR_11, 0, sizeof(VAR_11));

    if (VAR_5->type == VAR_2)
        VAR_13 = VAR_10->q_index_p;
    else
        VAR_13 = VAR_10->q_index_i;

    for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
        VAR_11.quantization_index[VAR_12] = VAR_13;
    for (VAR_12 = 0; VAR_12 < 5; VAR_12++)
        VAR_11.quantization_index_delta[VAR_12] = 0;

    FUNC_1(VAR_8, &VAR_11, sizeof(VAR_11));
    return 0;
}
