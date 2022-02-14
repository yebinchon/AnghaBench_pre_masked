
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_3__ {int width; int stride_line; int buf_x_offset; scalar_t__ buf_y_offset; } ;
typedef TYPE_1__ SubBand ;
typedef int SnowContext ;
typedef scalar_t__ IDWTELEM ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(SnowContext *VAR_0, slice_buffer * VAR_1, SubBand *VAR_2, IDWTELEM *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8){
    const int VAR_9= VAR_2->width;
    int VAR_10,VAR_11;

    IDWTELEM * VAR_12=0;
    IDWTELEM * VAR_13;

    if (VAR_7 != 0)
        VAR_12 = FUNC_1(VAR_1, ((VAR_7 - 1) * VAR_2->stride_line) + VAR_2->buf_y_offset) + VAR_2->buf_x_offset;

    for(VAR_11=VAR_7; VAR_11<VAR_8; VAR_11++){
        VAR_13 = VAR_12;

        VAR_12 = FUNC_1(VAR_1, (VAR_11 * VAR_2->stride_line) + VAR_2->buf_y_offset) + VAR_2->buf_x_offset;
        for(VAR_10=0; VAR_10<VAR_9; VAR_10++){
            if(VAR_10){
                if(VAR_6){
                    if(VAR_11 && VAR_10+1<VAR_9) VAR_12[VAR_10] += FUNC_0(VAR_12[VAR_10 - 1], VAR_13[VAR_10], VAR_13[VAR_10 + 1]);
                    else VAR_12[VAR_10] += VAR_12[VAR_10 - 1];
                }else{
                    if(VAR_11) VAR_12[VAR_10] += FUNC_0(VAR_12[VAR_10 - 1], VAR_13[VAR_10], VAR_12[VAR_10 - 1] + VAR_13[VAR_10] - VAR_13[VAR_10 - 1]);
                    else VAR_12[VAR_10] += VAR_12[VAR_10 - 1];
                }
            }else{
                if(VAR_11) VAR_12[VAR_10] += VAR_13[VAR_10];
            }
        }
    }
}
