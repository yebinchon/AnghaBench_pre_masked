
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int n ;
struct TYPE_5__ {int type; int size; int * symbols; int member_0; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(PixelModel3 *VAR_0, uint32_t VAR_1)
{
    PixelModel3 VAR_2 = {0};
    int VAR_3, VAR_4;

    VAR_2.type = 2;
    VAR_2.size = VAR_0->size + 1;
    VAR_4 = VAR_0->size;
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        VAR_2.symbols[VAR_3] = VAR_0->symbols[VAR_3];
    VAR_2.symbols[VAR_4] = VAR_1;

    FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));

    return 0;
}
