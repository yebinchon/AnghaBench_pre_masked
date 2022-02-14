
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int block_type; int* region_size; } ;
struct TYPE_5__ {int sample_rate_index; } ;
typedef TYPE_1__ MPADecodeContext ;
typedef TYPE_2__ GranuleDef ;



__attribute__((used)) static void FUNC_0(MPADecodeContext *VAR_0, GranuleDef *VAR_1)
{
    if (VAR_1->block_type == 2) {
        if (VAR_0->sample_rate_index != 8)
            VAR_1->region_size[0] = (36 / 2);
        else
            VAR_1->region_size[0] = (72 / 2);
    } else {
        if (VAR_0->sample_rate_index <= 2)
            VAR_1->region_size[0] = (36 / 2);
        else if (VAR_0->sample_rate_index != 8)
            VAR_1->region_size[0] = (54 / 2);
        else
            VAR_1->region_size[0] = (108 / 2);
    }
    VAR_1->region_size[1] = (576 / 2);
}
