
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wavesynth_context {int* pink_pool; int pink_state; int pink_need; scalar_t__ pink_pos; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wavesynth_context *VAR_1)
{
    int32_t VAR_2[7] = { 0 }, VAR_3 = 0;
    int VAR_4, VAR_5;

    VAR_1->pink_pos = 0;
    if (!VAR_1->pink_need)
        return;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
            if ((VAR_4 >> VAR_5) & 1)
                break;
            VAR_3 -= VAR_2[VAR_5];
            VAR_2[VAR_5] = (int32_t)FUNC_0(&VAR_1->pink_state) >> 3;
            VAR_3 += VAR_2[VAR_5];
        }
        VAR_1->pink_pool[VAR_4] = VAR_3 + ((int32_t)FUNC_0(&VAR_1->pink_state) >> 3);
    }
    FUNC_0(&VAR_1->pink_state);
}
