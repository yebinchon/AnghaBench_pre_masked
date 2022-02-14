
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {size_t* colormap; size_t* alpha; int* palette; scalar_t__ has_palette; } ;
typedef TYPE_1__ DVDSubContext ;


 int FUNC_0 (size_t*,int ,int) ;

__attribute__((used)) static void FUNC_1(DVDSubContext* VAR_0,
                          uint32_t *VAR_1,
                          uint32_t VAR_2)
{
    static const uint8_t VAR_3[4][4] = {


        {0xff},
        {0x00, 0xff},
        {0x00, 0x80, 0xff},
        {0x00, 0x55, 0xaa, 0xff},
    };
    uint8_t VAR_4[16] = { 0 };
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint8_t *VAR_12 = VAR_0->colormap, *VAR_13 = VAR_0->alpha;

    if(VAR_0->has_palette) {
        for(VAR_6 = 0; VAR_6 < 4; VAR_6++)
            VAR_1[VAR_6] = (VAR_0->palette[VAR_12[VAR_6]] & 0x00ffffff)
                              | ((VAR_13[VAR_6] * 17U) << 24);
        return;
    }

    for(VAR_6 = 0; VAR_6 < 4; VAR_6++)
        VAR_1[VAR_6] = 0;

    VAR_5 = 0;
    for(VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        if (VAR_13[VAR_6] != 0 && !VAR_4[VAR_12[VAR_6]]) {
            VAR_4[VAR_12[VAR_6]] = 1;
            VAR_5++;
        }
    }

    if (VAR_5 == 0)
        return;

    VAR_8 = 0;
    FUNC_0(VAR_4, 0, 16);
    for(VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        if (VAR_13[VAR_6] != 0) {
            if (!VAR_4[VAR_12[VAR_6]]) {
                VAR_7 = VAR_3[VAR_5 - 1][VAR_8];
                VAR_9 = (((VAR_2 >> 16) & 0xff) * VAR_7) >> 8;
                VAR_10 = (((VAR_2 >> 8) & 0xff) * VAR_7) >> 8;
                VAR_11 = (((VAR_2 >> 0) & 0xff) * VAR_7) >> 8;
                VAR_1[VAR_6] = VAR_11 | (VAR_10 << 8) | (VAR_9 << 16) | ((VAR_13[VAR_6] * 17U) << 24);
                VAR_4[VAR_12[VAR_6]] = (VAR_6 + 1);
                VAR_8++;
            } else {
                VAR_1[VAR_6] = (VAR_1[VAR_4[VAR_12[VAR_6]] - 1] & 0x00ffffff) |
                                    ((VAR_13[VAR_6] * 17U) << 24);
            }
        }
    }
}
