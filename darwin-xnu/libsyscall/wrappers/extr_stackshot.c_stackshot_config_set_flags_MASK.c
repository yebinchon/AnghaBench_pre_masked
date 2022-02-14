
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int sc_flags; } ;
typedef TYPE_1__ stackshot_config_t ;


 int VAR_0 ;

int
FUNC_0(stackshot_config_t *VAR_1, uint32_t VAR_2)
{
 stackshot_config_t *VAR_3;

 if (VAR_1 == ((void*)0)) {
  return VAR_0;
 }

 VAR_3 = (stackshot_config_t *) VAR_1;
 VAR_3->sc_flags = VAR_2;

 return 0;
}
