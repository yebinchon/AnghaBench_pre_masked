
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bit_index; int g; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(Jpeg2000DecoderContext *VAR_0, int VAR_1)
{
    int VAR_2 = 0;

    while (--VAR_1 >= 0) {
        VAR_2 <<= 1;
        if (VAR_0->bit_index == 0) {
            VAR_0->bit_index = 7 + (FUNC_0(&VAR_0->g) != 0xFFu);
        }
        VAR_0->bit_index--;
        VAR_2 |= (FUNC_1(&VAR_0->g) >> VAR_0->bit_index) & 1;
    }
    return VAR_2;
}
