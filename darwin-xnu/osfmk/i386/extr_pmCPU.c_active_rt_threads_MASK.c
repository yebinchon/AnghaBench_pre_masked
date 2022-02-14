
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_2__ {int (* pmActiveRTThreads ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void
FUNC_1(boolean_t VAR_2)
{
    if (!VAR_1
 || VAR_0 == ((void*)0)
 || VAR_0->pmActiveRTThreads == ((void*)0))
 return;

    VAR_0->pmActiveRTThreads(VAR_2);
}
