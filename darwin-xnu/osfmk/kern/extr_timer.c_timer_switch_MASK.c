
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* timer_t ;
struct TYPE_5__ {scalar_t__ tstamp; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

void
FUNC_1(timer_t VAR_0, uint64_t VAR_1, timer_t VAR_2)
{
 FUNC_0(VAR_0, VAR_1 - VAR_0->tstamp);
 VAR_2->tstamp = VAR_1;
}
