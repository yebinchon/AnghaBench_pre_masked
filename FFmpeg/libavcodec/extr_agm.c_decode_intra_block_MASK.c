
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {size_t* permutated; } ;
struct TYPE_5__ {int* block; int flags; scalar_t__ plus; TYPE_1__ scantable; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *,int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(AGMContext *VAR_0, GetBitContext *VAR_1,
                              const int *VAR_2, int *VAR_3, int *VAR_4)
{
    const uint8_t *VAR_5 = VAR_0->scantable.permutated;
    const int VAR_6 = VAR_0->plus ? 0 : 1024;
    int16_t *VAR_7 = VAR_0->block;
    int VAR_8, VAR_9, VAR_10 = 0;

    FUNC_1(VAR_7, 0, sizeof(VAR_0->block));

    if (*VAR_3 > 0) {
        (*VAR_3)--;
    } else {
        VAR_9 = FUNC_2(VAR_1, VAR_3, &VAR_8, &VAR_10, VAR_0->flags & 1);
        if (VAR_9 < 0)
            return VAR_9;
        *VAR_4 += VAR_8;
    }
    VAR_7[VAR_5[0]] = VAR_6 + *VAR_4 * VAR_2[0];

    for (int VAR_11 = 1; VAR_11 < 64;) {
        if (*VAR_3 > 0) {
            int VAR_12;

            VAR_12 = FUNC_0(*VAR_3, 64 - VAR_11);
            VAR_11 += VAR_12;
            *VAR_3 -= VAR_12;
        } else {
            VAR_9 = FUNC_2(VAR_1, VAR_3, &VAR_8, &VAR_10, VAR_0->flags & 1);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_7[VAR_5[VAR_11]] = VAR_8 * VAR_2[VAR_11];
            VAR_11++;
        }
    }

    return 0;
}
