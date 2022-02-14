
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bit_index; int* buf; } ;
typedef TYPE_1__ Jpeg2000EncoderContext ;



__attribute__((used)) static void FUNC_0(Jpeg2000EncoderContext *VAR_0, int VAR_1, int VAR_2)
{
    while (VAR_2-- > 0){
        if (VAR_0->bit_index == 8)
        {
            VAR_0->bit_index = *VAR_0->buf == 0xff;
            *(++VAR_0->buf) = 0;
        }
        *VAR_0->buf |= VAR_1 << (7 - VAR_0->bit_index++);
    }
}
