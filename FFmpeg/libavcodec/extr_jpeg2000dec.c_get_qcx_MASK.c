
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int g; } ;
struct TYPE_5__ {int nguardbits; int quantsty; int* expn; int* mant; } ;
typedef TYPE_1__ Jpeg2000QuantStyle ;
typedef TYPE_2__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Jpeg2000DecoderContext *VAR_4, int VAR_5, Jpeg2000QuantStyle *VAR_6)
{
    int VAR_7, VAR_8;

    if (FUNC_2(&VAR_4->g) < 1)
        return VAR_0;

    VAR_8 = FUNC_3(&VAR_4->g);

    VAR_6->nguardbits = VAR_8 >> 5;
    VAR_6->quantsty = VAR_8 & 0x1f;

    if (VAR_6->quantsty == VAR_2) {
        VAR_5 -= 3;
        if (FUNC_2(&VAR_4->g) < VAR_5 ||
            VAR_5 > VAR_1*3)
            return VAR_0;
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
            VAR_6->expn[VAR_7] = FUNC_3(&VAR_4->g) >> 3;
    } else if (VAR_6->quantsty == VAR_3) {
        if (FUNC_2(&VAR_4->g) < 2)
            return VAR_0;
        VAR_8 = FUNC_1(&VAR_4->g);
        VAR_6->expn[0] = VAR_8 >> 11;
        VAR_6->mant[0] = VAR_8 & 0x7ff;
        for (VAR_7 = 1; VAR_7 < VAR_1 * 3; VAR_7++) {
            int VAR_9 = FUNC_0(0, VAR_6->expn[0] - (VAR_7 - 1) / 3);
            VAR_6->expn[VAR_7] = VAR_9;
            VAR_6->mant[VAR_7] = VAR_6->mant[0];
        }
    } else {
        VAR_5 = (VAR_5 - 3) >> 1;
        if (FUNC_2(&VAR_4->g) < 2 * VAR_5 ||
            VAR_5 > VAR_1*3)
            return VAR_0;
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            VAR_8 = FUNC_1(&VAR_4->g);
            VAR_6->expn[VAR_7] = VAR_8 >> 11;
            VAR_6->mant[VAR_7] = VAR_8 & 0x7ff;
        }
    }
    return 0;
}
