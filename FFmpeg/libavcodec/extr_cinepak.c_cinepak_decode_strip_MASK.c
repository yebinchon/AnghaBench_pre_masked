
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ x2; scalar_t__ y2; scalar_t__ x1; scalar_t__ y1; int v1_codebook; int v4_codebook; } ;
typedef TYPE_1__ cvid_strip ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_2__ CinepakContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int,int,int const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,int,int const*) ;

__attribute__((used)) static int FUNC_3 (CinepakContext *VAR_1,
                                 cvid_strip *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    const uint8_t *VAR_5 = (VAR_3 + VAR_4);
    int VAR_6, VAR_7;


    if (VAR_2->x2 > VAR_1->width ||
        VAR_2->y2 > VAR_1->height ||
        VAR_2->x1 >= VAR_2->x2 || VAR_2->y1 >= VAR_2->y2)
        return VAR_0;

    while ((VAR_3 + 4) <= VAR_5) {
        VAR_6 = VAR_3[0];
        VAR_7 = FUNC_0 (&VAR_3[1]) - 4;
        if(VAR_7 < 0)
            return VAR_0;

        VAR_3 += 4;
        VAR_7 = ((VAR_3 + VAR_7) > VAR_5) ? (VAR_5 - VAR_3) : VAR_7;

        switch (VAR_6) {

        case 0x20:
        case 0x21:
        case 0x24:
        case 0x25:
            FUNC_1 (VAR_2->v4_codebook, VAR_6,
                VAR_7, VAR_3);
            break;

        case 0x22:
        case 0x23:
        case 0x26:
        case 0x27:
            FUNC_1 (VAR_2->v1_codebook, VAR_6,
                VAR_7, VAR_3);
            break;

        case 0x30:
        case 0x31:
        case 0x32:
            return FUNC_2 (VAR_1, VAR_2, VAR_6,
                VAR_7, VAR_3);
        }

        VAR_3 += VAR_7;
    }

    return VAR_0;
}
