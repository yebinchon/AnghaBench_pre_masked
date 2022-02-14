
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {double resolution; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ ns_time; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

void FUNC_1(double VAR_1)
{
    VAR_0.ns_time.base = FUNC_0() -
        (uint64_t) (VAR_1 / VAR_0.ns_time.resolution);
}
