
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {unsigned long long msb_pts_shift; int last_pts; } ;
typedef TYPE_1__ StreamContext ;



int64_t FUNC_0(StreamContext *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2 = (1ULL << VAR_0->msb_pts_shift) - 1;
    int64_t VAR_3 = VAR_0->last_pts - VAR_2 / 2;
    return ((VAR_1 - VAR_3) & VAR_2) + VAR_3;
}
