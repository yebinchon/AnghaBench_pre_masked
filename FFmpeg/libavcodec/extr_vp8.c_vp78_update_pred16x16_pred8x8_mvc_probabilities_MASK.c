
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* prob; int c; } ;
typedef TYPE_2__ VP8Context ;
typedef int VP56RangeCoder ;
struct TYPE_4__ {int ** mvc; void** pred8x8c; void** pred16x16; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int ** VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(VP8Context *VAR_1,
                                                            int VAR_2)
{
    VP56RangeCoder *VAR_3 = &VAR_1->c;
    int VAR_4, VAR_5;

    if (FUNC_1(VAR_3))
        for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
            VAR_1->prob->pred16x16[VAR_4] = FUNC_3(VAR_3, 8);
    if (FUNC_1(VAR_3))
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            VAR_1->prob->pred8x8c[VAR_4] = FUNC_3(VAR_3, 8);


    for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
            if (FUNC_0(VAR_3, VAR_0[VAR_4][VAR_5]))
                VAR_1->prob->mvc[VAR_4][VAR_5] = FUNC_2(VAR_3);
}
