
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ waitq_eventmask; scalar_t__ waitq_isvalid; scalar_t__ waitq_prepost; scalar_t__ waitq_fifo; } ;
struct waitq_set {scalar_t__ wqset_id; scalar_t__ wqset_prepost_id; TYPE_2__ wqset_q; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct waitq_link {TYPE_1__ wql_setid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct waitq_set*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct waitq_set*) ;
 int FUNC_5 (struct waitq_set*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct waitq_set*) ;
 int FUNC_8 (struct waitq_set*) ;
 int FUNC_9 (scalar_t__,int *,int ) ;
 struct waitq_link* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct waitq_link*) ;
 int FUNC_12 (struct waitq_link*) ;
 int FUNC_13 (struct waitq_link*) ;
 scalar_t__ FUNC_14 (struct waitq_link*) ;
 int VAR_1 ;

void FUNC_15(struct waitq_set *VAR_2)
{
 struct waitq_link *VAR_3 = ((void*)0);
 uint64_t VAR_4, VAR_5;

 if (!FUNC_8(VAR_2))
  FUNC_2("trying to de-initialize an invalid wqset @%p", VAR_2);

 FUNC_0(!FUNC_3(&VAR_2->wqset_q));

 FUNC_4(VAR_2);

 VAR_4 = VAR_2->wqset_id;

 if (FUNC_7(VAR_2) || VAR_4 == 0) {


  VAR_3 = FUNC_10(VAR_4);
  if (VAR_3) {
   FUNC_11(VAR_3);
  }

  if (!VAR_3 || VAR_2->wqset_id != VAR_4 || VAR_4 != VAR_3->wql_setid.id) {
   if (VAR_3) {
    FUNC_12(VAR_3);
   }
   FUNC_5(VAR_2);
   return;
  }


  FUNC_0(VAR_3 != ((void*)0) && FUNC_14(VAR_3) == VAR_0);

  VAR_2->wqset_id = 0;
 }
 VAR_5 = 0;
 if (VAR_2->wqset_q.waitq_prepost && VAR_2->wqset_prepost_id) {
  FUNC_0(VAR_3 != ((void*)0));
  VAR_5 = VAR_2->wqset_prepost_id;
 }

 VAR_2->wqset_prepost_id = 0;

 VAR_2->wqset_q.waitq_fifo = 0;
 VAR_2->wqset_q.waitq_prepost = 0;
 VAR_2->wqset_q.waitq_isvalid = 0;


 VAR_2->wqset_q.waitq_eventmask = 0;

 FUNC_6(&VAR_2->wqset_q);



 if (VAR_3) {







  while (FUNC_13(VAR_3) > 1)
   FUNC_1(1);
  FUNC_12(VAR_3);
 }



 if (VAR_5)
  (void)FUNC_9(VAR_5, ((void*)0),
      VAR_1);
}
