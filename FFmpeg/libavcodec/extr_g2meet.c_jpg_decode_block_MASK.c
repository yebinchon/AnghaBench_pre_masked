
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_10__ {size_t* permutated; } ;
struct TYPE_7__ {int (* clear_block ) (int*) ;} ;
struct TYPE_11__ {int* prev_dc; TYPE_4__ scantable; TYPE_3__* ac_vlc; TYPE_2__* dc_vlc; TYPE_1__ bdsp; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
typedef TYPE_5__ JPGContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int) ;
 int* VAR_3 ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(JPGContext *VAR_4, GetBitContext *VAR_5,
                            int VAR_6, int16_t *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    const int VAR_11 = !!VAR_6;
    const uint8_t *VAR_12 = VAR_11 ? VAR_1 : VAR_3;

    if (FUNC_0(VAR_5) < 1)
        return VAR_0;

    VAR_4->bdsp.clear_block(VAR_7);
    VAR_8 = FUNC_1(VAR_5, VAR_4->dc_vlc[VAR_11].table, 9, 3);
    if (VAR_8 < 0)
        return VAR_0;
    if (VAR_8)
        VAR_8 = FUNC_2(VAR_5, VAR_8);
    VAR_8 = VAR_8 * VAR_12[0] + VAR_4->prev_dc[VAR_6];
    VAR_7[0] = VAR_8;
    VAR_4->prev_dc[VAR_6] = VAR_8;

    VAR_10 = 0;
    while (VAR_10 < 63) {
        VAR_9 = FUNC_1(VAR_5, VAR_4->ac_vlc[VAR_11].table, 9, 3);
        if (VAR_9 < 0)
            return VAR_0;
        VAR_10 += VAR_9 >> 4;
        VAR_9 &= 0xF;
        if (VAR_10 > 63)
            return VAR_9 ? VAR_0 : 0;
        if (VAR_9) {
            int VAR_13 = VAR_9;

            VAR_9 = FUNC_2(VAR_5, VAR_13);
            VAR_9 *= VAR_12[VAR_2[VAR_10]];
            VAR_7[VAR_4->scantable.permutated[VAR_10]] = VAR_9;
        }
    }
    return 0;
}
