
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int** sample_buf; int frame_size; int interlacing_leftweight; int interlacing_shift; } ;
typedef TYPE_1__ AlacEncodeContext ;





 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(AlacEncodeContext *VAR_0)
{
    int32_t *VAR_1 = VAR_0->sample_buf[0], *VAR_2 = VAR_0->sample_buf[1];
    int VAR_3, VAR_4, VAR_5 = VAR_0->frame_size;
    int32_t VAR_6;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5);

    switch (VAR_4) {
    case 130:
        VAR_0->interlacing_leftweight = 0;
        VAR_0->interlacing_shift = 0;
        break;
    case 129:
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
            VAR_2[VAR_3] = VAR_1[VAR_3] - VAR_2[VAR_3];
        VAR_0->interlacing_leftweight = 1;
        VAR_0->interlacing_shift = 0;
        break;
    case 128:
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
            VAR_6 = VAR_2[VAR_3];
            VAR_2[VAR_3] = VAR_1[VAR_3] - VAR_2[VAR_3];
            VAR_1[VAR_3] = VAR_6 + (VAR_2[VAR_3] >> 31);
        }
        VAR_0->interlacing_leftweight = 1;
        VAR_0->interlacing_shift = 31;
        break;
    default:
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
            VAR_6 = VAR_1[VAR_3];
            VAR_1[VAR_3] = (VAR_6 + VAR_2[VAR_3]) >> 1;
            VAR_2[VAR_3] = VAR_6 - VAR_2[VAR_3];
        }
        VAR_0->interlacing_leftweight = 1;
        VAR_0->interlacing_shift = 1;
        break;
    }
}
