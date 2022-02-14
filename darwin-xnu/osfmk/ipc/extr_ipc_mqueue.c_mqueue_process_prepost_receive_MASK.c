
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_2__ {int imq_messages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, struct waitq *VAR_3,
       struct waitq_set *VAR_4)
{
 ipc_mqueue_t VAR_5, *VAR_6;

 (void)VAR_4;
 VAR_5 = (ipc_mqueue_t)VAR_3;





 if (FUNC_0(&VAR_5->imq_messages))
  return VAR_1;






 VAR_6 = (ipc_mqueue_t *)VAR_2;
 if (VAR_6)
  *VAR_6 = VAR_5;
 return VAR_0;
}
