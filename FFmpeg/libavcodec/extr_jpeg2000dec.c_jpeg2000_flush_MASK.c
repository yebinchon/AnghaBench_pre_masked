
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bit_index; int g; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(Jpeg2000DecoderContext *VAR_0)
{
    if (FUNC_0(&VAR_0->g) == 0xff)
        FUNC_1(&VAR_0->g, 1);
    VAR_0->bit_index = 8;
}
