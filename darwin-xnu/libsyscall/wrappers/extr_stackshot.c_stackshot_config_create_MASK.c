
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sc_pid; scalar_t__ sc_size; scalar_t__ sc_buffer; scalar_t__ sc_delta_timestamp; scalar_t__ sc_flags; } ;
typedef TYPE_1__ stackshot_config_t ;


 TYPE_1__* FUNC_0 (int) ;

stackshot_config_t *
FUNC_1(void)
{
 stackshot_config_t *VAR_0;

 VAR_0 = FUNC_0(sizeof(stackshot_config_t));
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_0->sc_pid = -1;
 VAR_0->sc_flags = 0;
 VAR_0->sc_delta_timestamp = 0;
 VAR_0->sc_buffer = 0;
 VAR_0->sc_size = 0;

 return VAR_0;
}
