
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
typedef TYPE_1__* ipc_mqueue_t ;
typedef int * ipc_kmsg_queue_t ;
struct TYPE_2__ {int imq_messages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, struct waitq *VAR_4,
    struct waitq_set *VAR_5)
{
 ipc_mqueue_t VAR_6 = (ipc_mqueue_t)VAR_4;
 ipc_kmsg_queue_t VAR_7 = &VAR_6->imq_messages;

 (void)VAR_3;
 (void)VAR_5;

 if (FUNC_0(VAR_7) != VAR_0)
  return VAR_1;

 return VAR_2;
}
