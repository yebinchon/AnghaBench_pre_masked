
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_buffer; } ;
typedef TYPE_1__ stackshot_config_t ;



void *
FUNC_0(stackshot_config_t *VAR_0)
{
 stackshot_config_t *VAR_1;

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_1 = (stackshot_config_t *) VAR_0;

 return ((void *)VAR_1->sc_buffer);
}
