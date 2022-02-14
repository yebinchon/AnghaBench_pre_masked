
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int** data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int32_t FUNC_0(const AVFrame *VAR_2, int VAR_3,
                          enum AVSampleFormat VAR_4)
{
    int32_t VAR_5;

    if (VAR_4 == VAR_1) {
        VAR_5 = VAR_2->data[0][VAR_3] - 0x80;
    } else if (VAR_4 == VAR_0) {
        const int16_t *VAR_6 = (const int16_t *)VAR_2->data[0];
        VAR_5 = VAR_6[VAR_3];
    } else {
        const int32_t *VAR_7 = (const int32_t *)VAR_2->data[0];
        VAR_5 = VAR_7[VAR_3] >> 8;
    }

    return VAR_5;
}
