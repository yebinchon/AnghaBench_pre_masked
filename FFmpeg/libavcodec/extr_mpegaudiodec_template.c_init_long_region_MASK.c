
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* region_size; } ;
struct TYPE_5__ {size_t sample_rate_index; } ;
typedef TYPE_1__ MPADecodeContext ;
typedef TYPE_2__ GranuleDef ;


 int FUNC_0 (int,int) ;
 int** VAR_0 ;

__attribute__((used)) static void FUNC_1(MPADecodeContext *VAR_1, GranuleDef *VAR_2,
                             int VAR_3, int VAR_4)
{
    int VAR_5;
    VAR_2->region_size[0] = VAR_0[VAR_1->sample_rate_index][VAR_3 + 1] >> 1;

    VAR_5 = FUNC_0(VAR_3 + VAR_4 + 2, 22);
    VAR_2->region_size[1] = VAR_0[VAR_1->sample_rate_index][ VAR_5] >> 1;
}
