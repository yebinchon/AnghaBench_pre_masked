
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int size; int* symbols; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(PixelModel3 *VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2 = VAR_0->size;

    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_1 == VAR_0->symbols[VAR_3])
            return FUNC_0(VAR_0, VAR_1);
    }

    if (VAR_2 >= 256)
        return 0;

    VAR_0->symbols[VAR_2] = VAR_1;
    VAR_0->size++;
    return 0;
}
