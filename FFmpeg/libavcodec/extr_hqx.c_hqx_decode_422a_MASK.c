
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bits; int table; } ;
struct TYPE_8__ {int dcb; int * dc_vlc; scalar_t__ interlaced; TYPE_1__ cbp_vlc; TYPE_2__* slice; } ;
struct TYPE_7__ {int** block; int gb; } ;
typedef TYPE_2__ HQXSlice ;
typedef TYPE_3__ HQXContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int *,int const*,int ,int*,int*) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int,int,int*,int*,int ) ;

__attribute__((used)) static int FUNC_6(HQXContext *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    HQXSlice *VAR_7 = &VAR_3->slice[VAR_4];
    GetBitContext *VAR_8 = &VAR_7->gb;
    const int *VAR_9;
    int VAR_10 = 0;
    int VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;

    VAR_14 = FUNC_3(VAR_8, VAR_3->cbp_vlc.table, VAR_3->cbp_vlc.bits, 1);

    for (VAR_12 = 0; VAR_12 < 12; VAR_12++)
        FUNC_4(VAR_7->block[VAR_12], 0, sizeof(**VAR_7->block) * 64);
    for (VAR_12 = 0; VAR_12 < 12; VAR_12++)
        VAR_7->block[VAR_12][0] = -0x800;
    if (VAR_14) {
        if (VAR_3->interlaced)
            VAR_10 = FUNC_2(VAR_8);

        VAR_9 = VAR_2[FUNC_1(VAR_8, 4)];

        VAR_14 |= VAR_14 << 4;
        if (VAR_14 & 0x3)
            VAR_14 |= 0x500;
        if (VAR_14 & 0xC)
            VAR_14 |= 0xA00;
        for (VAR_12 = 0; VAR_12 < 12; VAR_12++) {
            if (VAR_12 == 0 || VAR_12 == 4 || VAR_12 == 8 || VAR_12 == 10)
                VAR_11 = 0;
            if (VAR_14 & (1 << VAR_12)) {
                int VAR_15 = VAR_3->dcb - 9;
                VAR_13 = FUNC_0(VAR_8, &VAR_3->dc_vlc[VAR_15], VAR_9,
                                   VAR_3->dcb, VAR_7->block[VAR_12], &VAR_11);
                if (VAR_13 < 0)
                    return VAR_13;
            }
        }
    }

    FUNC_5(VAR_3, 3, VAR_5, VAR_6, VAR_10, VAR_7->block[ 0], VAR_7->block[ 2], VAR_1);
    FUNC_5(VAR_3, 3, VAR_5 + 8, VAR_6, VAR_10, VAR_7->block[ 1], VAR_7->block[ 3], VAR_1);
    FUNC_5(VAR_3, 0, VAR_5, VAR_6, VAR_10, VAR_7->block[ 4], VAR_7->block[ 6], VAR_1);
    FUNC_5(VAR_3, 0, VAR_5 + 8, VAR_6, VAR_10, VAR_7->block[ 5], VAR_7->block[ 7], VAR_1);
    FUNC_5(VAR_3, 2, VAR_5 >> 1, VAR_6, VAR_10, VAR_7->block[ 8], VAR_7->block[ 9], VAR_0);
    FUNC_5(VAR_3, 1, VAR_5 >> 1, VAR_6, VAR_10, VAR_7->block[10], VAR_7->block[11], VAR_0);

    return 0;
}
