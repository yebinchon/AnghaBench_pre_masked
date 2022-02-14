
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zipFile ;
struct TYPE_2__ {scalar_t__ stream; } ;
typedef TYPE_1__ mz_compat ;



void* FUNC_0(zipFile VAR_0)
{
    mz_compat *VAR_1 = (mz_compat *)VAR_0;
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    return (void *)VAR_1->stream;
}
