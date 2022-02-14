
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_4__ {int * round_key; int * state; } ;
typedef TYPE_1__ AVAES ;


 int FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int const*,int const*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(AVAES *VAR_2, uint8_t *VAR_3, const uint8_t *VAR_4,
                        int VAR_5, uint8_t *VAR_6, int VAR_7)
{
    while (VAR_5--) {
        FUNC_1(&VAR_2->state[1], VAR_4, &VAR_2->round_key[VAR_7]);
        if (VAR_6)
            FUNC_1(&VAR_2->state[1], VAR_6, &VAR_2->state[1]);
        FUNC_2(VAR_2, 2, VAR_1, VAR_0);
        FUNC_0(VAR_3, &VAR_2->state[0], &VAR_2->round_key[0]);
        if (VAR_6)
            FUNC_3(VAR_6, VAR_3, 16);
        VAR_4 += 16;
        VAR_3 += 16;
    }
}
