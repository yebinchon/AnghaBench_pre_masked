
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_8__ {int flags; TYPE_1__* comp; } ;
struct TYPE_7__ {scalar_t__ srcFormat; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_2__ SwsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(SwsContext *VAR_2, int16_t *VAR_3, int VAR_4,
                           const uint8_t *VAR_5, const int16_t *VAR_6,
                           const int32_t *VAR_7, int VAR_8)
{
    const AVPixFmtDescriptor *VAR_9 = FUNC_1(VAR_2->srcFormat);
    int VAR_10;
    int32_t *VAR_11 = (int32_t *) VAR_3;
    const uint16_t *VAR_12 = (const uint16_t *) VAR_5;
    int VAR_13 = VAR_9->comp[0].depth - 1;
    int VAR_14 = VAR_13 - 4;

    if ((FUNC_2(VAR_2->srcFormat) || VAR_2->srcFormat==VAR_1) && VAR_9->comp[0].depth<16) {
        VAR_14 = 9;
    } else if (VAR_9->flags & VAR_0) {
        VAR_14 = 16 - 1 - 4;
    }

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        int VAR_15;
        int VAR_16 = VAR_7[VAR_10];
        int VAR_17 = 0;

        for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
            VAR_17 += VAR_12[VAR_16 + VAR_15] * VAR_6[VAR_8 * VAR_10 + VAR_15];
        }

        VAR_11[VAR_10] = FUNC_0(VAR_17 >> VAR_14, (1 << 19) - 1);
    }
}
