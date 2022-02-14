
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ipc_kmsg_t ;
typedef int * ipc_kmsg_queue_t ;
typedef int boolean_t ;
struct TYPE_2__ {int ith_messages; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

boolean_t FUNC_3(
 ipc_kmsg_t VAR_0)
{
 ipc_kmsg_queue_t VAR_1 = &(FUNC_0()->ith_messages);
 boolean_t VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0);
 return VAR_2;
}
