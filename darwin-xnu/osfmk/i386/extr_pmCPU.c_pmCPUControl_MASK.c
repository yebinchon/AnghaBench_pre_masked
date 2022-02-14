
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* pmCPUControl ) (int ,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,void*) ;

int
FUNC_1(uint32_t VAR_1, void *VAR_2)
{
    int VAR_3 = -1;

    if (VAR_0 != ((void*)0)
 && VAR_0->pmCPUControl != ((void*)0))
 VAR_3 = (*VAR_0->pmCPUControl)(VAR_1, VAR_2);

    return(VAR_3);
}
