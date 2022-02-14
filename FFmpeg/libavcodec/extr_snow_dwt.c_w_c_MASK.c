
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct MpegEncContext {int dummy; } ;
typedef int ptrdiff_t ;
struct TYPE_18__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_17__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_16__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_15__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_14__ {TYPE_9__ member_3; TYPE_8__ member_2; TYPE_7__ member_1; TYPE_6__ member_0; } ;
struct TYPE_13__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_12__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_10__ {TYPE_4__ member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int,int,int,int,int const) ;

__attribute__((used)) static inline int FUNC_3(struct MpegEncContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3,
                      int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    const int VAR_10 = VAR_4 == 8 ? 3 : 4;
    int VAR_11[32 * 32], VAR_12[32];
    int VAR_13, VAR_14;
    static const int VAR_15[2][2][4][4] = {
        {
            {
                { 268, 239, 239, 213 },
                { 0, 224, 224, 152 },
                { 0, 135, 135, 110 },
            },
            {
                { 344, 310, 310, 280 },
                { 0, 320, 320, 228 },
                { 0, 175, 175, 136 },
                { 0, 129, 129, 102 },
            }
        },
        {
            {
                { 275, 245, 245, 218 },
                { 0, 230, 230, 156 },
                { 0, 138, 138, 113 },
            },
            {
                { 352, 317, 317, 286 },
                { 0, 328, 328, 233 },
                { 0, 180, 180, 140 },
                { 0, 132, 132, 105 },
            }
        }
    };

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 4) {
            VAR_11[32 * VAR_8 + VAR_9 + 0] = (VAR_1[VAR_9 + 0] - VAR_2[VAR_9 + 0]) << 4;
            VAR_11[32 * VAR_8 + VAR_9 + 1] = (VAR_1[VAR_9 + 1] - VAR_2[VAR_9 + 1]) << 4;
            VAR_11[32 * VAR_8 + VAR_9 + 2] = (VAR_1[VAR_9 + 2] - VAR_2[VAR_9 + 2]) << 4;
            VAR_11[32 * VAR_8 + VAR_9 + 3] = (VAR_1[VAR_9 + 3] - VAR_2[VAR_9 + 3]) << 4;
        }
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }

    FUNC_2(VAR_11, VAR_12, VAR_4, VAR_5, 32, VAR_6, VAR_10);

    VAR_7 = 0;
    FUNC_1(VAR_4 == VAR_5);
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
        for (VAR_14 = VAR_13 ? 1 : 0; VAR_14 < 4; VAR_14++) {
            int VAR_16 = VAR_4 >> (VAR_10 - VAR_13);
            int VAR_17 = (VAR_14 & 1) ? VAR_16 : 0;
            int VAR_18 = 32 << (VAR_10 - VAR_13);
            int VAR_19 = (VAR_14 & 2) ? VAR_18 >> 1 : 0;

            for (VAR_8 = 0; VAR_8 < VAR_16; VAR_8++)
                for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9++) {
                    int VAR_20 = VAR_11[VAR_17 + VAR_19 + VAR_8 * VAR_18 + VAR_9] *
                            VAR_15[VAR_6][VAR_10 - 3][VAR_13][VAR_14];
                    VAR_7 += FUNC_0(VAR_20);
                }
        }
    FUNC_1(VAR_7 >= 0);
    return VAR_7 >> 9;
}
