
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int sc_size; scalar_t__ sc_buffer; } ;
typedef TYPE_1__ stackshot_config_t ;



uint32_t
FUNC_0(stackshot_config_t * VAR_0)
{
 if (VAR_0 == ((void*)0) || (void *)VAR_0->sc_buffer == ((void*)0)) {
  return -1;
 }

 return VAR_0->sc_size;
}
