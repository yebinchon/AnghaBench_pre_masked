
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef int ipc_port_t ;
typedef int ipc_kobject_t ;
struct TYPE_3__ {int processor_self; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(
 processor_t VAR_1)
{
 ipc_port_t VAR_2;

 VAR_2 = VAR_1->processor_self;
 FUNC_0(VAR_2, (ipc_kobject_t) VAR_1, VAR_0);
}
