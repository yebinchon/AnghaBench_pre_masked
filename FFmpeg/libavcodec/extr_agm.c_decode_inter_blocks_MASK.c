
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* wblocks; int* map; int blocks_w; int flags; int map_size; int wblocks_size; TYPE_1__ scantable; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (int *,int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(AGMContext *VAR_0, GetBitContext *VAR_1,
                               const int *VAR_2, int *VAR_3,
                               int *VAR_4)
{
    const uint8_t *VAR_5 = VAR_0->scantable.permutated;
    int VAR_6, VAR_7;

    FUNC_1(VAR_0->wblocks, 0, VAR_0->wblocks_size);
    FUNC_1(VAR_0->map, 0, VAR_0->map_size);

    for (int VAR_8 = 0; VAR_8 < 64; VAR_8++) {
        int16_t *VAR_9 = VAR_0->wblocks + VAR_5[VAR_8];

        for (int VAR_10 = 0; VAR_10 < VAR_0->blocks_w;) {
            if (*VAR_3 > 0) {
                int VAR_11;

                VAR_11 = FUNC_0(*VAR_3, VAR_0->blocks_w - VAR_10);
                VAR_10 += VAR_11;
                VAR_9 += VAR_11 * 64;
                *VAR_3 -= VAR_11;
            } else {
                VAR_7 = FUNC_2(VAR_1, VAR_3, &VAR_6, &VAR_4[VAR_10], VAR_0->flags & 1);
                if (VAR_7 < 0)
                    return VAR_7;

                VAR_9[0] = VAR_6 * VAR_2[VAR_8];
                VAR_9 += 64;
                VAR_10++;
            }
        }
    }

    return 0;
}
