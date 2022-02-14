
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct TYPE_6__ {int specFlags; } ;
struct TYPE_7__ {TYPE_1__ machine; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;

void
FUNC_2(
 thread_t VAR_1)
{
 VAR_1->machine.specFlags |= VAR_0;
 FUNC_1(((void*)0), VAR_1);
 FUNC_0(VAR_1);
}
