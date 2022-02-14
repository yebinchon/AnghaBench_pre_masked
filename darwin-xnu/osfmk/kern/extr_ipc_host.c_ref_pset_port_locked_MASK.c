
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ processor_set_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

boolean_t
FUNC_3(ipc_port_t VAR_4, boolean_t VAR_5, processor_set_t *VAR_6)
{
 processor_set_t VAR_7;

 VAR_7 = VAR_2;
 if (FUNC_0(VAR_4) &&
  ((FUNC_1(VAR_4) == VAR_0) ||
   (VAR_5 && (FUNC_1(VAR_4) == VAR_1)))) {
  VAR_7 = (processor_set_t) VAR_4->ip_kobject;
 }

 *VAR_6 = VAR_7;
 FUNC_2(VAR_4);

 return (VAR_3);
}
