
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int n ;
struct TYPE_7__ {int type; int size; scalar_t__* symbols; int* freqs; int member_0; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_3(PixelModel3 *VAR_0, uint32_t VAR_1)
{
    PixelModel3 VAR_2 = {0};
    int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_2.type = 5;

    for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0->size && VAR_0->symbols[VAR_3] < VAR_1; VAR_3++) {
        VAR_2.symbols[VAR_3] = VAR_0->symbols[VAR_3];
        VAR_4 += VAR_2.freqs[VAR_3] = VAR_0->freqs[VAR_3];
    }

    VAR_5 = VAR_3;
    VAR_2.symbols[VAR_5] = VAR_1;
    VAR_4 += VAR_2.freqs[VAR_5++] = 50;
    for (; VAR_3 < VAR_0->size; VAR_5++, VAR_3++) {
        VAR_2.symbols[VAR_5] = VAR_0->symbols[VAR_3];
        VAR_4 += VAR_2.freqs[VAR_5] = VAR_0->freqs[VAR_3];
    }
    VAR_2.size = VAR_0->size + 1;
    if (VAR_4 > 4096)
        FUNC_2(&VAR_2, &VAR_6);

    FUNC_0(&VAR_2);

    FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));

    return 0;
}
