
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ waitq_prepost; } ;
struct waitq_set {TYPE_3__ wqset_q; scalar_t__ wqset_prepost_id; int wqset_id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_2__ wql_setid; TYPE_1__ wql_wqs; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct waitq_set*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct waitq_set*) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 int FUNC_4 (char*,int ) ;
 struct waitq_link* FUNC_5 (int ) ;
 int FUNC_6 (struct waitq_link*) ;
 int FUNC_7 (struct waitq_link*) ;
 int FUNC_8 (struct waitq_link*) ;
 int FUNC_9 (struct waitq_link*,int ) ;
 int VAR_2 ;

kern_return_t FUNC_10(struct waitq_set *VAR_3)
{
 struct waitq_link *VAR_4;
 uint64_t VAR_5;

 FUNC_4("unlink all queues from set 0x%llx", VAR_3->wqset_id);






 if (FUNC_2(VAR_3)){


  VAR_4 = FUNC_5(VAR_3->wqset_id);


  if (!VAR_4) {
   FUNC_0(VAR_3);
   return VAR_0;
  }

  FUNC_6(VAR_4);


  FUNC_9(VAR_4, VAR_1);
  VAR_4->wql_wqs.wql_set = VAR_3;

  VAR_3->wqset_id = VAR_4->wql_setid.id;
  FUNC_7(VAR_4);
  FUNC_8(VAR_4);
 }


 VAR_5 = 0;
 if (VAR_3->wqset_q.waitq_prepost && VAR_3->wqset_prepost_id)
  VAR_5 = VAR_3->wqset_prepost_id;

 VAR_3->wqset_prepost_id = 0;
 FUNC_1(&VAR_3->wqset_q);



 if (VAR_5)
  (void)FUNC_3(VAR_5, ((void*)0),
      VAR_2);

 return VAR_0;
}
