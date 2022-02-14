
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int (* setMaxBusDelay ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;

void
FUNC_1(uint32_t VAR_3)
{
    uint64_t VAR_4 = VAR_3;

    if (VAR_2 != ((void*)0)
 && VAR_2->setMaxBusDelay != ((void*)0)) {
 VAR_1 = VAR_0;
 VAR_2->setMaxBusDelay(VAR_4);
    } else
 VAR_1 = VAR_4;
}
