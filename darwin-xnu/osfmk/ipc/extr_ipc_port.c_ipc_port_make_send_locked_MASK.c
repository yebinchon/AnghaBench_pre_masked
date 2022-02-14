
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_6__ {int ip_srights; int ip_mscount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

ipc_port_t
FUNC_3(
 ipc_port_t VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 VAR_0->ip_mscount++;
 VAR_0->ip_srights++;
 FUNC_2(VAR_0);
 return VAR_0;
}
