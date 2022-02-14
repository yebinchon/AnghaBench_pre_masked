
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct waitq {scalar_t__ waitq_eventmask; } ;
struct waitq_set {struct waitq wqset_q; } ;
struct TYPE_7__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_1__ wql_wqs; } ;
struct select_thread_ctx {scalar_t__ event; int * spl; TYPE_2__* thread; } ;
typedef int spl_t ;
typedef scalar_t__ event64_t ;
struct TYPE_8__ {scalar_t__ wait_event; struct waitq* waitq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct waitq*) ;
 struct waitq* FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*) ;
 int FUNC_10 (struct waitq_set*) ;
 int FUNC_11 (struct waitq_set*) ;
 int FUNC_12 (struct waitq*,TYPE_2__*) ;
 int FUNC_13 (struct waitq*) ;
 scalar_t__ FUNC_14 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_15(struct waitq *VAR_3, void *VAR_4,
      struct waitq_link *VAR_5)
{
 struct select_thread_ctx *VAR_6 = (struct select_thread_ctx *)VAR_4;
 struct waitq_set *VAR_7;
 struct waitq *VAR_8;
 struct waitq *VAR_9;
 spl_t VAR_10;

 (void)VAR_3;

 thread_t VAR_11 = VAR_6->thread;
 event64_t VAR_12 = VAR_6->event;

 if (FUNC_14(VAR_5) != VAR_0)
  return VAR_1;

 VAR_7 = VAR_5->wql_wqs.wql_set;
 VAR_8 = &VAR_7->wqset_q;

 FUNC_0(!FUNC_8(VAR_3));
 FUNC_0(!FUNC_8(VAR_8));

 FUNC_10(VAR_7);

 VAR_10 = FUNC_1();


 VAR_9 = FUNC_7(VAR_8);
 FUNC_9(VAR_9);

 FUNC_4(VAR_11);

 if ((VAR_11->waitq == VAR_8) && (VAR_11->wait_event == VAR_12)) {
  FUNC_12(VAR_8, VAR_11);
  if (FUNC_6(VAR_9)) {
   VAR_9->waitq_eventmask = 0;
  }
  FUNC_3(VAR_11);
  FUNC_13(VAR_9);
  FUNC_11(VAR_7);




  *(VAR_6->spl) = VAR_10;
  return VAR_2;
 }

 FUNC_5(VAR_11);
 FUNC_11(VAR_7);
 FUNC_13(VAR_9);
 FUNC_2(VAR_10);

 return VAR_1;
}
