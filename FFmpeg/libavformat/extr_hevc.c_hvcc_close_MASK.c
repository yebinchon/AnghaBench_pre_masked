
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {struct TYPE_5__* nalUnitLength; struct TYPE_5__* nalUnit; scalar_t__ numNalus; } ;
struct TYPE_4__ {size_t numOfArrays; TYPE_3__* array; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;


 int FUNC_0 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_1(HEVCDecoderConfigurationRecord *VAR_0)
{
    uint8_t VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->numOfArrays; VAR_1++) {
        VAR_0->array[VAR_1].numNalus = 0;
        FUNC_0(&VAR_0->array[VAR_1].nalUnit);
        FUNC_0(&VAR_0->array[VAR_1].nalUnitLength);
    }

    VAR_0->numOfArrays = 0;
    FUNC_0(&VAR_0->array);
}
