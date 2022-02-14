
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int32_t ;
typedef enum MLPChMode { ____Placeholder_MLPChMode } MLPChMode ;
struct TYPE_3__ {int* sample_buffer; int number_of_samples; int num_channels; } ;
typedef TYPE_1__ MLPEncodeContext ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static enum MLPChMode FUNC_1(MLPEncodeContext *VAR_4)
{
    uint64_t VAR_5[4], VAR_6[4] = { 0, 0, 0, 0, };
    int32_t *VAR_7 = VAR_4->sample_buffer + 1;
    int32_t *VAR_8 = VAR_4->sample_buffer;
    int VAR_9;
    enum MLPChMode VAR_10 = 0;

    for(VAR_9 = 2; VAR_9 < VAR_4->number_of_samples; VAR_9++) {
        int32_t VAR_11 = VAR_8 [VAR_9 * VAR_4->num_channels] - 2 * VAR_8 [(VAR_9 - 1) * VAR_4->num_channels] + VAR_8 [(VAR_9 - 2) * VAR_4->num_channels];
        int32_t VAR_12 = VAR_7[VAR_9 * VAR_4->num_channels] - 2 * VAR_7[(VAR_9 - 1) * VAR_4->num_channels] + VAR_7[(VAR_9 - 2) * VAR_4->num_channels];

        VAR_6[0] += FUNC_0( VAR_11 );
        VAR_6[1] += FUNC_0( VAR_12);
        VAR_6[2] += FUNC_0((VAR_11 + VAR_12) >> 1);
        VAR_6[3] += FUNC_0( VAR_11 - VAR_12);
    }

    VAR_5[VAR_0] = VAR_6[0] + VAR_6[1];
    VAR_5[VAR_1] = VAR_6[0] + VAR_6[3];
    VAR_5[VAR_3] = VAR_6[1] + VAR_6[3];
    VAR_5[VAR_2] = VAR_6[2] + VAR_6[3];

    for(VAR_9 = 1; VAR_9 < 3; VAR_9++)
        if(VAR_5[VAR_9] < VAR_5[VAR_10])
            VAR_10 = VAR_9;

    return VAR_10;
}
