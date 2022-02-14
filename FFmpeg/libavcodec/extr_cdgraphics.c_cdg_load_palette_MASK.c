
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int color ;
struct TYPE_5__ {size_t transparency; TYPE_1__* frame; } ;
struct TYPE_4__ {int palette_has_changed; scalar_t__* data; } ;
typedef TYPE_2__ CDGraphicsContext ;



__attribute__((used)) static void FUNC_0(CDGraphicsContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint8_t VAR_3, VAR_4, VAR_5;
    uint16_t VAR_6;
    int VAR_7;
    int VAR_8 = VAR_2 ? 0 : 8;
    uint32_t *VAR_9 = (uint32_t *) VAR_0->frame->data[1];

    for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
        VAR_6 = (VAR_1[2 * VAR_7] << 6) + (VAR_1[2 * VAR_7 + 1] & 0x3F);
        VAR_3 = ((VAR_6 >> 8) & 0x000F) * 17;
        VAR_4 = ((VAR_6 >> 4) & 0x000F) * 17;
        VAR_5 = ((VAR_6 ) & 0x000F) * 17;
        VAR_9[VAR_7 + VAR_8] = 0xFFU << 24 | VAR_3 << 16 | VAR_4 << 8 | VAR_5;
        if (VAR_0->transparency >= 0)
            VAR_9[VAR_0->transparency] &= 0xFFFFFF;
    }
    VAR_0->frame->palette_has_changed = 1;
}
