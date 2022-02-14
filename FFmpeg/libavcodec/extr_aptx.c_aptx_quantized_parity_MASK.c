
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int dither_parity; TYPE_1__* quantize; } ;
struct TYPE_4__ {int quantized_sample; } ;
typedef TYPE_2__ Channel ;


 int VAR_0 ;

__attribute__((used)) static int32_t FUNC_0(Channel *VAR_1)
{
    int32_t VAR_2 = VAR_1->dither_parity;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        VAR_2 ^= VAR_1->quantize[VAR_3].quantized_sample;

    return VAR_2 & 1;
}
