
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int prev_sample; size_t step_index; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (int) ;
 size_t* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline uint8_t FUNC_3(ADPCMChannelStatus *VAR_2,
                                                   int16_t VAR_3)
{
    int VAR_4 = VAR_3 - VAR_2->prev_sample;
    int VAR_5, VAR_6 = VAR_1[VAR_2->step_index];
    int VAR_7 = 8*(VAR_4 < 0);

    VAR_4= FUNC_0(VAR_4);
    VAR_5 = VAR_4 + (VAR_6 >> 3);

    if (VAR_4 >= VAR_6) {
        VAR_7 |= 4;
        VAR_4 -= VAR_6;
    }
    VAR_6 >>= 1;
    if (VAR_4 >= VAR_6) {
        VAR_7 |= 2;
        VAR_4 -= VAR_6;
    }
    VAR_6 >>= 1;
    if (VAR_4 >= VAR_6) {
        VAR_7 |= 1;
        VAR_4 -= VAR_6;
    }
    VAR_5 -= VAR_4;

    if (VAR_7 & 8)
        VAR_2->prev_sample -= VAR_5;
    else
        VAR_2->prev_sample += VAR_5;

    VAR_2->prev_sample = FUNC_2(VAR_2->prev_sample);
    VAR_2->step_index = FUNC_1(VAR_2->step_index + VAR_0[VAR_7], 0, 88);

    return VAR_7;
}
