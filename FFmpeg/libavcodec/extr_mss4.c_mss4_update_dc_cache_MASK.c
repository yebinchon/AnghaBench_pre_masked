
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__** prev_dc; scalar_t__** dc_cache; } ;
typedef TYPE_1__ MSS4Context ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline void FUNC_0(MSS4Context *VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_2->dc_cache[0][VAR_1] = VAR_2->prev_dc[0][VAR_3 * 2 + 1];
    VAR_2->dc_cache[0][VAR_0] = 0;
    VAR_2->dc_cache[1][VAR_1] = 0;
    VAR_2->dc_cache[1][VAR_0] = 0;

    for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
        VAR_2->prev_dc[0][VAR_3 * 2 + VAR_4] = 0;

    for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
        VAR_2->dc_cache[VAR_4 + 1][VAR_1] = VAR_2->prev_dc[VAR_4][VAR_3];
        VAR_2->dc_cache[VAR_4 + 1][VAR_0] = 0;
        VAR_2->prev_dc[VAR_4][VAR_3] = 0;
    }
}
