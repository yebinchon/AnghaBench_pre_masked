
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_float2 ;
struct TYPE_4__ {int const p2; int const p1; } ;
struct TYPE_5__ {TYPE_1__ p; } ;
typedef TYPE_2__ MotionVector ;


 scalar_t__ FUNC_0 (int const**) ;

__attribute__((used)) static bool FUNC_1(const MotionVector *VAR_0)
{
    const cl_float2 *VAR_1[] = {
        &VAR_0[0].p.p1,
        &VAR_0[1].p.p1,
        &VAR_0[2].p.p1
    };

    const cl_float2 *VAR_2[] = {
        &VAR_0[0].p.p2,
        &VAR_0[1].p.p2,
        &VAR_0[2].p.p2
    };

    return FUNC_0(VAR_1) && FUNC_0(VAR_2);
}
