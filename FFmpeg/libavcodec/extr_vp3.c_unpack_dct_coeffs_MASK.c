
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ac_vlc_4; int * ac_vlc_3; int * ac_vlc_2; int * ac_vlc_1; int * fragment_height; int * fragment_width; int * fragment_start; TYPE_1__* avctx; int * dc_vlc; int dct_tokens_base; int ** dct_tokens; } ;
typedef TYPE_2__ Vp3DecodeContext ;
typedef int VLC ;
struct TYPE_6__ {int flags; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int,int,int) ;

__attribute__((used)) static int FUNC_4(Vp3DecodeContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9 = 0;
    VLC *VAR_10[64];
    VLC *VAR_11[64];

    VAR_2->dct_tokens[0][0] = VAR_2->dct_tokens_base;

    if (FUNC_1(VAR_3) < 16)
        return VAR_0;


    VAR_5 = FUNC_0(VAR_3, 4);
    VAR_6 = FUNC_0(VAR_3, 4);


    VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_2->dc_vlc[VAR_5], 0,
                                   0, VAR_9);
    if (VAR_9 < 0)
        return VAR_9;
    if (FUNC_1(VAR_3) < 8)
        return VAR_0;


    FUNC_2(VAR_2, 0, VAR_2->fragment_width[0], VAR_2->fragment_height[0]);


    VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_2->dc_vlc[VAR_6], 0,
                                   1, VAR_9);
    if (VAR_9 < 0)
        return VAR_9;
    VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_2->dc_vlc[VAR_6], 0,
                                   2, VAR_9);
    if (VAR_9 < 0)
        return VAR_9;


    if (!(VAR_2->avctx->flags & VAR_1)) {
        FUNC_2(VAR_2, VAR_2->fragment_start[1],
                              VAR_2->fragment_width[1], VAR_2->fragment_height[1]);
        FUNC_2(VAR_2, VAR_2->fragment_start[2],
                              VAR_2->fragment_width[1], VAR_2->fragment_height[1]);
    }

    if (FUNC_1(VAR_3) < 8)
        return VAR_0;

    VAR_7 = FUNC_0(VAR_3, 4);
    VAR_8 = FUNC_0(VAR_3, 4);


    for (VAR_4 = 1; VAR_4 <= 5; VAR_4++) {
        VAR_10[VAR_4] = &VAR_2->ac_vlc_1[VAR_7];
        VAR_11[VAR_4] = &VAR_2->ac_vlc_1[VAR_8];
    }
    for (VAR_4 = 6; VAR_4 <= 14; VAR_4++) {
        VAR_10[VAR_4] = &VAR_2->ac_vlc_2[VAR_7];
        VAR_11[VAR_4] = &VAR_2->ac_vlc_2[VAR_8];
    }
    for (VAR_4 = 15; VAR_4 <= 27; VAR_4++) {
        VAR_10[VAR_4] = &VAR_2->ac_vlc_3[VAR_7];
        VAR_11[VAR_4] = &VAR_2->ac_vlc_3[VAR_8];
    }
    for (VAR_4 = 28; VAR_4 <= 63; VAR_4++) {
        VAR_10[VAR_4] = &VAR_2->ac_vlc_4[VAR_7];
        VAR_11[VAR_4] = &VAR_2->ac_vlc_4[VAR_8];
    }


    for (VAR_4 = 1; VAR_4 <= 63; VAR_4++) {
        VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_10[VAR_4], VAR_4,
                                       0, VAR_9);
        if (VAR_9 < 0)
            return VAR_9;

        VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_11[VAR_4], VAR_4,
                                       1, VAR_9);
        if (VAR_9 < 0)
            return VAR_9;
        VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_11[VAR_4], VAR_4,
                                       2, VAR_9);
        if (VAR_9 < 0)
            return VAR_9;
    }

    return 0;
}
