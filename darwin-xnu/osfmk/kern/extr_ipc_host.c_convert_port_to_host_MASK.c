
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ host_t ;
struct TYPE_6__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

host_t
FUNC_4(
 ipc_port_t VAR_3)
{
 host_t VAR_4 = VAR_0;

 if (FUNC_0(VAR_3)) {
  if (FUNC_3(VAR_3) == VAR_1 ||
      FUNC_3(VAR_3) == VAR_2) {
   VAR_4 = (host_t) VAR_3->ip_kobject;
   FUNC_1(FUNC_2(VAR_3));
  }
 }
 return VAR_4;
}
