
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int bitstream_bpp; int ** bits; int ** len; int * vlc; } ;
typedef TYPE_1__ HYuvContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int,int *,int,int,int *,int,int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(HYuvContext *VAR_7)
{
    GetBitContext VAR_8;
    int VAR_9, VAR_10;

    FUNC_2(&VAR_8, VAR_5,
                  VAR_6 * 8);
    if ((VAR_10 = FUNC_5(VAR_7->len[0], &VAR_8, 256)) < 0)
        return VAR_10;

    FUNC_2(&VAR_8, VAR_3,
                  VAR_4 * 8);
    if ((VAR_10 = FUNC_5(VAR_7->len[1], &VAR_8, 256)) < 0)
        return VAR_10;

    for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
        VAR_7->bits[0][VAR_9] = VAR_2[VAR_9];
    for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
        VAR_7->bits[1][VAR_9] = VAR_1[VAR_9];

    if (VAR_7->bitstream_bpp >= 24) {
        FUNC_4(VAR_7->bits[1], VAR_7->bits[0], 256 * sizeof(uint32_t));
        FUNC_4(VAR_7->len[1], VAR_7->len[0], 256 * sizeof(uint8_t));
    }
    FUNC_4(VAR_7->bits[2], VAR_7->bits[1], 256 * sizeof(uint32_t));
    FUNC_4(VAR_7->len[2], VAR_7->len[1], 256 * sizeof(uint8_t));

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        FUNC_0(&VAR_7->vlc[VAR_9]);
        if ((VAR_10 = FUNC_3(&VAR_7->vlc[VAR_9], VAR_0, 256, VAR_7->len[VAR_9], 1, 1,
                            VAR_7->bits[VAR_9], 4, 4, 0)) < 0)
            return VAR_10;
    }

    if ((VAR_10 = FUNC_1(VAR_7)) < 0)
        return VAR_10;

    return 0;
}
