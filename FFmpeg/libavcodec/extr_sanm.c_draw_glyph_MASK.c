
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;
struct TYPE_3__ {int ** p4x4glyphs; int ** p8x8glyphs; int avctx; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(SANMVideoContext *VAR_3, uint16_t *VAR_4, int VAR_5,
                      uint16_t VAR_6, uint16_t VAR_7, int VAR_8,
                      ptrdiff_t VAR_9)
{
    int8_t *VAR_10;
    uint16_t VAR_11[2] = { VAR_6, VAR_7 };
    int VAR_12, VAR_13;

    if (VAR_5 >= VAR_2) {
        FUNC_0(VAR_3->avctx, VAR_1, "Ignoring nonexistent glyph #%u.\n", VAR_5);
        return VAR_0;
    }

    VAR_10 = VAR_8 == 8 ? VAR_3->p8x8glyphs[VAR_5] : VAR_3->p4x4glyphs[VAR_5];
    VAR_9 -= VAR_8;

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++, VAR_4 += VAR_9)
        for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
            *VAR_4++ = VAR_11[*VAR_10++];
    return 0;
}
