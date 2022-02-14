
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int prev_sample; size_t step_index; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (size_t,int ,int) ;
 int FUNC_3 (int) ;
 size_t* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline uint8_t FUNC_4(ADPCMChannelStatus *VAR_3,
                                                int16_t VAR_4)
{
    int VAR_5 = VAR_4 - VAR_3->prev_sample;
    int VAR_6 = FUNC_0(7, FUNC_1(VAR_5) * 4 /
                       VAR_1[VAR_3->step_index]) + (VAR_5 < 0) * 8;
    VAR_3->prev_sample += ((VAR_1[VAR_3->step_index] *
                        VAR_2[VAR_6]) / 8);
    VAR_3->prev_sample = FUNC_3(VAR_3->prev_sample);
    VAR_3->step_index = FUNC_2(VAR_3->step_index + VAR_0[VAR_6], 0, 88);
    return VAR_6;
}
