
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int n ;
struct TYPE_5__ {int size; int type; scalar_t__* symbols; int* freqs; int maxpos; int member_0; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (scalar_t__*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(PixelModel3 *VAR_2, uint32_t VAR_3)
{
    PixelModel3 VAR_4 = {0};
    int VAR_5, VAR_6;

    VAR_5 = VAR_2->size;
    VAR_4.type = 4;
    VAR_4.size = VAR_5;
    for (VAR_6 = 0; VAR_6 < VAR_4.size; VAR_6++) {
        VAR_4.symbols[VAR_6] = VAR_2->symbols[VAR_6];
    }
    FUNC_0(VAR_4.symbols, VAR_5, VAR_1, VAR_0);
    for (VAR_6 = 0; VAR_6 < VAR_4.size; VAR_6++) {
        if (VAR_3 == VAR_4.symbols[VAR_6]) {
            VAR_4.freqs[VAR_6] = 100;
            VAR_4.maxpos = VAR_6;
        } else {
            VAR_4.freqs[VAR_6] = 50;
        }
    }

    FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));

    return 0;
}
