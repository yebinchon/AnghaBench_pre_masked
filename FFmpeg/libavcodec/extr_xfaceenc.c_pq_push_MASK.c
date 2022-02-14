
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prob_ranges_idx; int * prob_ranges; } ;
typedef TYPE_1__ ProbRangesQueue ;
typedef int ProbRange ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(ProbRangesQueue *VAR_1, const ProbRange *VAR_2)
{
    if (VAR_1->prob_ranges_idx >= VAR_0 * 2 - 1)
        return -1;
    VAR_1->prob_ranges[VAR_1->prob_ranges_idx++] = *VAR_2;
    return 0;
}
