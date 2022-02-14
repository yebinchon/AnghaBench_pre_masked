
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_7__ {int** block; TYPE_1__ hqa_cbp_vlc; } ;
typedef TYPE_2__ HQContext ;
typedef int GetBitContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int *,int*,int,int,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int *,int,int,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_6(HQContext *VAR_1, AVFrame *VAR_2, int VAR_3,
                         GetBitContext *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;

    if (FUNC_1(VAR_4) < 1)
        return VAR_0;

    VAR_10 = FUNC_2(VAR_4, VAR_1->hqa_cbp_vlc.table, 5, 1);

    for (VAR_8 = 0; VAR_8 < 12; VAR_8++)
        FUNC_4(VAR_1->block[VAR_8], 0, sizeof(*VAR_1->block));
    for (VAR_8 = 0; VAR_8 < 12; VAR_8++)
        VAR_1->block[VAR_8][0] = -128 * (1 << 6);

    if (VAR_10) {
        VAR_7 = FUNC_0(VAR_4);

        VAR_10 |= VAR_10 << 4;
        if (VAR_10 & 0x3)
            VAR_10 |= 0x500;
        if (VAR_10 & 0xC)
            VAR_10 |= 0xA00;
        for (VAR_8 = 0; VAR_8 < 12; VAR_8++) {
            if (!(VAR_10 & (1 << VAR_8)))
                continue;
            VAR_9 = FUNC_3(VAR_1, VAR_4, VAR_1->block[VAR_8], VAR_3, VAR_8 >= 8, 1);
            if (VAR_9 < 0)
                return VAR_9;
        }
    }

    FUNC_5(VAR_1, VAR_2, 3, VAR_5, VAR_6, VAR_7, VAR_1->block[ 0], VAR_1->block[ 2]);
    FUNC_5(VAR_1, VAR_2, 3, VAR_5 + 8, VAR_6, VAR_7, VAR_1->block[ 1], VAR_1->block[ 3]);
    FUNC_5(VAR_1, VAR_2, 0, VAR_5, VAR_6, VAR_7, VAR_1->block[ 4], VAR_1->block[ 6]);
    FUNC_5(VAR_1, VAR_2, 0, VAR_5 + 8, VAR_6, VAR_7, VAR_1->block[ 5], VAR_1->block[ 7]);
    FUNC_5(VAR_1, VAR_2, 2, VAR_5 >> 1, VAR_6, VAR_7, VAR_1->block[ 8], VAR_1->block[ 9]);
    FUNC_5(VAR_1, VAR_2, 1, VAR_5 >> 1, VAR_6, VAR_7, VAR_1->block[10], VAR_1->block[11]);

    return 0;
}
