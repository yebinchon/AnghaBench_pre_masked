
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int rounds; int * state; int * round_key; } ;
typedef TYPE_1__ AVAES ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int **,int,int) ;
 int FUNC_2 (int *,int,int const*) ;

__attribute__((used)) static inline void FUNC_3(AVAES *VAR_0, int VAR_1, const uint8_t *VAR_2,
                         uint32_t VAR_3[][256])
{
    int VAR_4;

    for (VAR_4 = VAR_0->rounds - 1; VAR_4 > 0; VAR_4--) {
        FUNC_1(VAR_0->state, VAR_3, 3 - VAR_1, 1 + VAR_1);
        FUNC_0(&VAR_0->state[1], &VAR_0->state[0], &VAR_0->round_key[VAR_4]);
    }

    FUNC_2(&VAR_0->state[0], VAR_1, VAR_2);
}
