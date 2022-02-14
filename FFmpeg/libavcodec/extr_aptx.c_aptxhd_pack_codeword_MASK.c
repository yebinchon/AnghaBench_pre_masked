
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* quantize; } ;
struct TYPE_5__ {int quantized_sample; } ;
typedef TYPE_2__ Channel ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static uint32_t FUNC_1(Channel *VAR_0)
{
    int32_t VAR_1 = FUNC_0(VAR_0);
    return (((VAR_0->quantize[3].quantized_sample & 0x01E) | VAR_1) << 19)
         | (((VAR_0->quantize[2].quantized_sample & 0x00F) ) << 15)
         | (((VAR_0->quantize[1].quantized_sample & 0x03F) ) << 9)
         | (((VAR_0->quantize[0].quantized_sample & 0x1FF) ) << 0);
}
