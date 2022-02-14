
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* prob; } ;
typedef TYPE_2__ VP8Context ;
struct TYPE_4__ {int ** token; } ;


 int FUNC_0 (int ,int ,int) ;
 size_t* VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_1(VP8Context *VAR_2)
{
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
            FUNC_0(VAR_2->prob->token[VAR_3][VAR_4], VAR_1[VAR_3][VAR_0[VAR_4]],
                   sizeof(VAR_2->prob->token[VAR_3][VAR_4]));
}
