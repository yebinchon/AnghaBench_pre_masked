
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quantizer; int dequant_dc; int dequant_ac; int bounding_values_array; } ;
typedef TYPE_1__ VP56Context ;


 int FUNC_0 (int ,int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;

void FUNC_1(VP56Context *VAR_3, int VAR_4)
{
    if (VAR_3->quantizer != VAR_4)
        FUNC_0(VAR_3->bounding_values_array, VAR_2[VAR_4]);
    VAR_3->quantizer = VAR_4;
    VAR_3->dequant_dc = VAR_1[VAR_4] << 2;
    VAR_3->dequant_ac = VAR_0[VAR_4] << 2;
}
