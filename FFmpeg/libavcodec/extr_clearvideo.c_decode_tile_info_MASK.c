
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef void* int8_t ;
typedef void* int16_t ;
struct TYPE_14__ {void* y; void* x; int member_0; } ;
struct TYPE_13__ {int flags; struct TYPE_13__** child; void* bias; TYPE_5__ mv; } ;
typedef TYPE_4__ TileInfo ;
struct TYPE_12__ {int bits; scalar_t__ table; } ;
struct TYPE_11__ {int bits; scalar_t__ table; } ;
struct TYPE_10__ {int bits; scalar_t__ table; } ;
struct TYPE_15__ {int mv_esc; int bias_esc; TYPE_3__ bias_cb; TYPE_2__ mv_cb; TYPE_1__ flags_cb; } ;
typedef TYPE_5__ MV ;
typedef TYPE_6__ LevelCodes ;
typedef int GetBitContext ;


 TYPE_4__* FUNC_0 (int,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int ,int) ;

__attribute__((used)) static TileInfo* FUNC_3(GetBitContext *VAR_0, LevelCodes *VAR_1, int VAR_2)
{
    TileInfo *VAR_3;
    int VAR_4, VAR_5 = 0;
    int16_t VAR_6 = 0;
    MV VAR_7 = { 0 };

    if (VAR_1[VAR_2].flags_cb.table) {
        VAR_5 = FUNC_2(VAR_0, VAR_1[VAR_2].flags_cb.table, VAR_1[VAR_2].flags_cb.bits, 2);
    }

    if (VAR_1[VAR_2].mv_cb.table) {
        uint16_t VAR_8 = FUNC_2(VAR_0, VAR_1[VAR_2].mv_cb.table, VAR_1[VAR_2].mv_cb.bits, 3);

        if (VAR_8 != VAR_1[VAR_2].mv_esc) {
            VAR_7.x = (int8_t)(VAR_8 & 0xff);
            VAR_7.y = (int8_t)(VAR_8 >> 8);
        } else {
            VAR_7.x = FUNC_1(VAR_0, 8);
            VAR_7.y = FUNC_1(VAR_0, 8);
        }
    }

    if (VAR_1[VAR_2].bias_cb.table) {
        uint16_t VAR_9 = FUNC_2(VAR_0, VAR_1[VAR_2].bias_cb.table, VAR_1[VAR_2].bias_cb.bits, 2);

        if (VAR_9 != VAR_1[VAR_2].bias_esc) {
            VAR_6 = (int16_t)(VAR_9);
        } else {
            VAR_6 = FUNC_1(VAR_0, 16);
        }
    }

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    if (!VAR_3)
        return ((void*)0);

    VAR_3->flags = VAR_5;
    VAR_3->mv = VAR_7;
    VAR_3->bias = VAR_6;

    if (VAR_3->flags) {
        for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
            if (VAR_3->flags & (1 << VAR_4)) {
                TileInfo *VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2 + 1);
                VAR_3->child[VAR_4] = VAR_10;
            }
        }
    }

    return VAR_3;
}
