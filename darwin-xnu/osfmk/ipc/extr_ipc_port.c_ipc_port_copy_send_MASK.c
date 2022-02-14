
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_10__ {scalar_t__ ip_srights; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

ipc_port_t
FUNC_6(
 ipc_port_t VAR_1)
{
 ipc_port_t VAR_2;

 if (!FUNC_0(VAR_1))
  return VAR_1;

 FUNC_3(VAR_1);
 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_1->ip_srights > 0);

  FUNC_4(VAR_1);
  VAR_1->ip_srights++;
  VAR_2 = VAR_1;
 } else
  VAR_2 = VAR_0;
 FUNC_5(VAR_1);

 return VAR_2;
}
