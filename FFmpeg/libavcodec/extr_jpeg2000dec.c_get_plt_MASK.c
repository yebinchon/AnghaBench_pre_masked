
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int g; int avctx; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Jpeg2000DecoderContext *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;

    FUNC_0(VAR_2->avctx, VAR_1,
            "PLT marker at pos 0x%X\n", FUNC_2(&VAR_2->g) - 4);

    if (VAR_3 < 4)
        return VAR_0;

               FUNC_1(&VAR_2->g);

    for (VAR_4 = 0; VAR_4 < VAR_3 - 3; VAR_4++) {
        VAR_5 = FUNC_1(&VAR_2->g);
    }
    if (VAR_5 & 0x80)
        return VAR_0;

    return 0;
}
