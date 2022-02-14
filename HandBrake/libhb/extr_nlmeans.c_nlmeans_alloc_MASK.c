
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int w; int h; int border; scalar_t__ prefiltered; int * image; int * image_pre; int * mem; int * mem_pre; } ;
typedef TYPE_1__ BorderedPlane ;


 int * FUNC_0 (int const) ;
 int FUNC_1 (int *,int const*,int const) ;
 int FUNC_2 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0,
                          const int VAR_1,
                          const int VAR_2,
                          const int VAR_3,
                          BorderedPlane *VAR_4,
                          const int VAR_5)
{
    const int VAR_6 = VAR_1 + 2 * VAR_5;
    const int VAR_7 = VAR_3 + 2 * VAR_5;

    uint8_t *VAR_8 = FUNC_0(VAR_6 * VAR_7 * sizeof(uint8_t));
    uint8_t *VAR_9 = VAR_8 + VAR_5 + VAR_6 * VAR_5;


    for (int VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
        FUNC_1(VAR_9 + VAR_10 * VAR_6, VAR_0 + VAR_10 * VAR_2, VAR_1);
    }

    VAR_4->mem = VAR_8;
    VAR_4->image = VAR_9;
    VAR_4->w = VAR_1;
    VAR_4->h = VAR_3;
    VAR_4->border = VAR_5;

    FUNC_2(VAR_4->mem, VAR_4->w, VAR_4->h, VAR_4->border);
    VAR_4->mem_pre = VAR_4->mem;
    VAR_4->image_pre = VAR_4->image;
    VAR_4->prefiltered = 0;

}
