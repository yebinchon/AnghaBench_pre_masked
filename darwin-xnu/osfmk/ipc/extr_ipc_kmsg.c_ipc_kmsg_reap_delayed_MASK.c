
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ipc_kmsg_t ;
typedef int * ipc_kmsg_queue_t ;
struct TYPE_2__ {int ith_messages; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(void)
{
 ipc_kmsg_queue_t VAR_1 = &(FUNC_0()->ith_messages);
 ipc_kmsg_t VAR_2;





 while ((VAR_2 = FUNC_3(VAR_1)) != VAR_0) {
  FUNC_1(VAR_2);
  FUNC_4(VAR_1, VAR_2);
  FUNC_2(VAR_2);
 }
}
