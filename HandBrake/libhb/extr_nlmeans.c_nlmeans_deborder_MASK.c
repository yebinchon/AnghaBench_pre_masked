
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int w; int border; int * mem; } ;
typedef TYPE_1__ BorderedPlane ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(const BorderedPlane *VAR_0,
                             uint8_t *VAR_1,
                             const int VAR_2,
                             const int VAR_3,
                             const int VAR_4)
{
    const int VAR_5 = VAR_0->w + 2 * VAR_0->border;
    uint8_t *VAR_6 = VAR_0->mem + VAR_0->border + VAR_5 * VAR_0->border;

    int VAR_7 = VAR_2;
    if (VAR_0->w < VAR_7)
    {
        VAR_7 = VAR_0->w;
    }


    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        FUNC_0(VAR_1 + VAR_8 * VAR_3, VAR_6 + VAR_8 * VAR_5, VAR_7);
    }

}
