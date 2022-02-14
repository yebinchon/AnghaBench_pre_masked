
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int bound_right; int bound_left; int bound_bottom; int bound_top; } ;
typedef TYPE_1__ AVSphericalMapping ;


 int VAR_0 ;

void FUNC_0(const AVSphericalMapping *VAR_1,
                              size_t VAR_2, size_t VAR_3,
                              size_t *VAR_4, size_t *VAR_5,
                              size_t *VAR_6, size_t *VAR_7)
{

    uint64_t VAR_8 = (uint64_t) VAR_2 * VAR_0 /
                           (VAR_0 - VAR_1->bound_right - VAR_1->bound_left);
    uint64_t VAR_9 = (uint64_t) VAR_3 * VAR_0 /
                           (VAR_0 - VAR_1->bound_bottom - VAR_1->bound_top);


    *VAR_4 = (VAR_8 * VAR_1->bound_left + VAR_0 - 1) / VAR_0;
    *VAR_5 = (VAR_9 * VAR_1->bound_top + VAR_0 - 1) / VAR_0;
    *VAR_6 = VAR_8 - VAR_2 - *VAR_4;
    *VAR_7 = VAR_9 - VAR_3 - *VAR_5;
}
