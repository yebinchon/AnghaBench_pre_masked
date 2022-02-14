
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int table; } ;
struct TYPE_9__ {int* block; TYPE_3__* ac_vlc; TYPE_2__* nc_vlc; TYPE_1__ dc_vlc; int gb; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {int table; } ;
typedef TYPE_4__ TSCC2Context ;
typedef int GetBitContext ;


 int VAR_0 ;
 size_t* VAR_1 ;
 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_7(TSCC2Context *VAR_2, int *VAR_3, int VAR_4,
                           uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    GetBitContext *VAR_8 = &VAR_2->gb;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;

    if (FUNC_1(VAR_8)) {
        if (FUNC_1(VAR_8)) {
            VAR_14 = FUNC_0(VAR_8, 8);
            for (VAR_15 = 0; VAR_15 < 8; VAR_15++, VAR_5 += VAR_6)
                FUNC_4(VAR_5, VAR_14, 16);
        } else {
            if (FUNC_2(VAR_8) < 16 * 8 * 8)
                return VAR_0;
            for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < 16; VAR_16++)
                    VAR_5[VAR_16] = FUNC_0(VAR_8, 8);
                VAR_5 += VAR_6;
            }
        }
        return 0;
    }

    VAR_9 = 0;
    for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
        for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
            if (!(VAR_16 | VAR_17)) {
                VAR_10 = FUNC_0(VAR_8, 8);
            } else {
                VAR_10 = FUNC_3(VAR_8, VAR_2->dc_vlc.table, 9, 2);
                if (VAR_10 == -1)
                    return VAR_0;
                if (VAR_10 == 0x100)
                    VAR_10 = FUNC_0(VAR_8, 8);
            }
            VAR_10 = (VAR_10 + VAR_9) & 0xFF;
            VAR_9 = VAR_10;
            VAR_2->block[0] = VAR_10;

            VAR_11 = FUNC_3(VAR_8, VAR_2->nc_vlc[VAR_4].table, 9, 1);
            if (VAR_11 == -1)
                return VAR_0;

            VAR_13 = 1;
            FUNC_4(VAR_2->block + 1, 0, 15 * sizeof(*VAR_2->block));
            for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
                VAR_12 = FUNC_3(VAR_8, VAR_2->ac_vlc[VAR_4].table, 9, 2);
                if (VAR_12 == -1)
                    return VAR_0;
                if (VAR_12 == 0x1000)
                    VAR_12 = FUNC_0(VAR_8, 12);
                VAR_13 += VAR_12 & 0xF;
                if (VAR_13 >= 16)
                    return VAR_0;
                VAR_14 = FUNC_5(VAR_12 >> 4, 8);
                VAR_2->block[VAR_1[VAR_13++]] = VAR_14;
            }
            FUNC_6(VAR_2->block, VAR_3, VAR_5 + VAR_17 * 4, VAR_6);
        }
        VAR_5 += 4 * VAR_6;
    }
    return 0;
}
