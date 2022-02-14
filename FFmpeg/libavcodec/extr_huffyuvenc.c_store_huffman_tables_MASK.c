
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int version; int alpha; int chroma; int * len; int vlc_n; int * bits; int * stats; } ;
typedef TYPE_1__ HYuvContext ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_3(HYuvContext *VAR_0, uint8_t *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 3;

    if (VAR_0->version > 2)
        VAR_5 = 1 + VAR_0->alpha + 2*VAR_0->chroma;

    for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
        if ((VAR_3 = FUNC_0(VAR_0->len[VAR_2], VAR_0->stats[VAR_2], VAR_0->vlc_n, 0)) < 0)
            return VAR_3;

        if (FUNC_1(VAR_0->bits[VAR_2], VAR_0->len[VAR_2], VAR_0->vlc_n) < 0) {
            return -1;
        }

        VAR_4 += FUNC_2(VAR_0, VAR_0->len[VAR_2], VAR_1 + VAR_4);
    }
    return VAR_4;
}
