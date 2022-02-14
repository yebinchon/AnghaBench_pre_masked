
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_6__ {int imq_set_queue; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ) ;

unsigned
FUNC_4(ipc_mqueue_t VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);






 if (!FUNC_0(VAR_2))
  return 1;

 VAR_3 = FUNC_3(&VAR_2->imq_set_queue, ((void*)0),
      VAR_1);

 FUNC_2(VAR_2);

 return (VAR_3 == VAR_0);
}
