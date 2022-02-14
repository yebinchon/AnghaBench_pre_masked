
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* quantize; } ;
struct TYPE_5__ {int quantized_sample; } ;
typedef TYPE_2__ Channel ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(Channel *VAR_0, uint32_t VAR_1)
{
    VAR_0->quantize[0].quantized_sample = FUNC_1(VAR_1 >> 0, 9);
    VAR_0->quantize[1].quantized_sample = FUNC_1(VAR_1 >> 9, 6);
    VAR_0->quantize[2].quantized_sample = FUNC_1(VAR_1 >> 15, 4);
    VAR_0->quantize[3].quantized_sample = FUNC_1(VAR_1 >> 19, 5);
    VAR_0->quantize[3].quantized_sample = (VAR_0->quantize[3].quantized_sample & ~1)
                                          | FUNC_0(VAR_0);
}
