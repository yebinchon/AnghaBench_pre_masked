
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_3__ {scalar_t__ ith_self; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

void
FUNC_1(
 thread_t VAR_3)
{
 ipc_port_t VAR_4 = VAR_3->ith_self;

 if (VAR_4 != VAR_2)
  FUNC_0(VAR_4, VAR_1, VAR_0);
}
