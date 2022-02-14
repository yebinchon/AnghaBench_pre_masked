
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int version; int alpha; int chroma; int * bits; int * len; int vlc_n; int * vlc; } ;
typedef TYPE_1__ HYuvContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int ,int ,int ,int,int,int ,int,int,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(HYuvContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    GetBitContext VAR_4;
    int VAR_5, VAR_6;
    int VAR_7 = 3;

    if ((VAR_6 = FUNC_4(&VAR_4, VAR_2, VAR_3 * 8)) < 0)
        return VAR_6;

    if (VAR_1->version > 2)
        VAR_7 = 1 + VAR_1->alpha + 2*VAR_1->chroma;

    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
        if ((VAR_6 = FUNC_6(VAR_1->len[VAR_5], &VAR_4, VAR_1->vlc_n)) < 0)
            return VAR_6;
        if ((VAR_6 = FUNC_1(VAR_1->bits[VAR_5], VAR_1->len[VAR_5], VAR_1->vlc_n)) < 0)
            return VAR_6;
        FUNC_0(&VAR_1->vlc[VAR_5]);
        if ((VAR_6 = FUNC_5(&VAR_1->vlc[VAR_5], VAR_0, VAR_1->vlc_n, VAR_1->len[VAR_5], 1, 1,
                           VAR_1->bits[VAR_5], 4, 4, 0)) < 0)
            return VAR_6;
    }

    if ((VAR_6 = FUNC_2(VAR_1)) < 0)
        return VAR_6;

    return (FUNC_3(&VAR_4) + 7) / 8;
}
