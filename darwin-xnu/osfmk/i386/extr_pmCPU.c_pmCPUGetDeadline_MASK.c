
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int lcpu; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_5__ {int (* GetDeadline ) (int *) ;} ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

uint64_t
FUNC_1(cpu_data_t *VAR_2)
{
    uint64_t VAR_3 = 0;

    if (VAR_1
 && VAR_0 != ((void*)0)
 && VAR_0->GetDeadline != ((void*)0))
 VAR_3 = (*VAR_0->GetDeadline)(&VAR_2->lcpu);

    return(VAR_3);
}
