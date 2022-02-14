
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_9__ {size_t* table; } ;
struct TYPE_8__ {TYPE_2__* src; TYPE_4__* instance; } ;
struct TYPE_7__ {int width; TYPE_1__* plane; } ;
struct TYPE_6__ {int sliceY; int ** line; } ;
typedef TYPE_3__ SwsFilterDescriptor ;
typedef int SwsContext ;
typedef TYPE_4__ GammaContext ;


 size_t FUNC_0 (size_t*) ;
 int FUNC_1 (size_t*,size_t) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    GammaContext *VAR_4 = VAR_1->instance;
    uint16_t *VAR_5 = VAR_4->table;
    int VAR_6 = VAR_1->src->width;

    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
        uint8_t ** VAR_8 = VAR_1->src->plane[0].line;
        int VAR_9 = VAR_2+VAR_7 - VAR_1->src->plane[0].sliceY;

        uint16_t *VAR_10 = (uint16_t*)*(VAR_8+VAR_9);
        int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
            uint16_t VAR_12 = FUNC_0(VAR_10 + VAR_11*4 + 0);
            uint16_t VAR_13 = FUNC_0(VAR_10 + VAR_11*4 + 1);
            uint16_t VAR_14 = FUNC_0(VAR_10 + VAR_11*4 + 2);

            FUNC_1(VAR_10 + VAR_11*4 + 0, VAR_5[VAR_12]);
            FUNC_1(VAR_10 + VAR_11*4 + 1, VAR_5[VAR_13]);
            FUNC_1(VAR_10 + VAR_11*4 + 2, VAR_5[VAR_14]);
        }

    }
    return VAR_3;
}
