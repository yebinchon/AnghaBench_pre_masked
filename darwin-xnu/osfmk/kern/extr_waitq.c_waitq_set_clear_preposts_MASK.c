
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int waitq_prepost; } ;
struct waitq_set {TYPE_1__ wqset_q; scalar_t__ wqset_prepost_id; int wqset_id; } ;
typedef int spl_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct waitq_set*) ;
 int FUNC_5 (struct waitq_set*) ;
 int FUNC_6 (struct waitq_set*) ;
 int FUNC_7 (scalar_t__,int *,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_0 ;

void FUNC_9(struct waitq_set *VAR_1)
{
 uint64_t VAR_2;
 spl_t VAR_3;

 FUNC_0(FUNC_6(VAR_1));

 if (!VAR_1->wqset_q.waitq_prepost || !VAR_1->wqset_prepost_id)
  return;

 FUNC_8("Clearing all preposted queues on waitq_set: 0x%llx",
  VAR_1->wqset_id);

 if (FUNC_3(&VAR_1->wqset_q))
  VAR_3 = FUNC_1();
 FUNC_4(VAR_1);
 VAR_2 = VAR_1->wqset_prepost_id;
 VAR_1->wqset_prepost_id = 0;
 FUNC_5(VAR_1);
 if (FUNC_3(&VAR_1->wqset_q))
  FUNC_2(VAR_3);


 if (VAR_2)
  (void)FUNC_7(VAR_2, ((void*)0),
      VAR_0);
}
