
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; scalar_t__ bit_index; } ;
typedef TYPE_1__ Jpeg2000EncoderContext ;



__attribute__((used)) static void FUNC_0(Jpeg2000EncoderContext *VAR_0)
{
    if (VAR_0->bit_index){
        VAR_0->bit_index = 0;
        VAR_0->buf++;
    }
}
