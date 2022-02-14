
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lcpu; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_5__ {int (* Deadline ) (int *) ;} ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1(cpu_data_t *VAR_2)
{
    if (VAR_1
 && VAR_0 != ((void*)0)
 && VAR_0->Deadline != ((void*)0))
 (*VAR_0->Deadline)(&VAR_2->lcpu);
}
