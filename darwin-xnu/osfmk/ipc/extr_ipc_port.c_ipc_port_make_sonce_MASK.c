
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_10__ {int ip_sorights; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

ipc_port_t
FUNC_5(
 ipc_port_t VAR_1)
{
 if (!FUNC_0(VAR_1))
  return VAR_1;

 FUNC_2(VAR_1);
 if (FUNC_1(VAR_1)) {
  VAR_1->ip_sorights++;
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  return VAR_1;
 }
 FUNC_4(VAR_1);
 return VAR_0;
}
