
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mbidx; int * mv; int * col_mv; } ;
typedef TYPE_1__ AVSContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline void FUNC_0(AVSContext *VAR_4)
{
    VAR_4->col_mv[VAR_4->mbidx * 4 + 0] = VAR_4->mv[VAR_0];
    VAR_4->col_mv[VAR_4->mbidx * 4 + 1] = VAR_4->mv[VAR_1];
    VAR_4->col_mv[VAR_4->mbidx * 4 + 2] = VAR_4->mv[VAR_2];
    VAR_4->col_mv[VAR_4->mbidx * 4 + 3] = VAR_4->mv[VAR_3];
}
