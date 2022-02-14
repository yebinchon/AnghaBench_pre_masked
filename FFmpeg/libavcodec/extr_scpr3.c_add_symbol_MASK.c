
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int size; int* freqs; int maxpos; int * symbols; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_1(PixelModel3 *VAR_0, int VAR_1, uint32_t VAR_2, int *VAR_3, int VAR_4)
{
    if (VAR_0->size == VAR_4)
        return 0;

    for (int VAR_5 = VAR_0->size - 1; VAR_5 >= VAR_1; VAR_5--) {
        VAR_0->symbols[VAR_5 + 1] = VAR_0->symbols[VAR_5];
        VAR_0->freqs[VAR_5 + 1] = VAR_0->freqs[VAR_5];
    }

    VAR_0->symbols[VAR_1] = VAR_2;
    VAR_0->freqs[VAR_1] = 50;
    VAR_0->size++;

    if (VAR_0->maxpos >= VAR_1)
        VAR_0->maxpos++;

    *VAR_3 += 50;
    if (*VAR_3 + 50 > 4096)
        FUNC_0(VAR_0, VAR_3);

    return 1;
}
