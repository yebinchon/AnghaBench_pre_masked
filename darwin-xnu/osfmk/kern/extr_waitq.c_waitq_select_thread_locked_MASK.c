
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq_link {int dummy; } ;
struct waitq {scalar_t__ waitq_set_id; scalar_t__ waitq_eventmask; } ;
struct select_thread_ctx {int * spl; scalar_t__ event; TYPE_1__* thread; } ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ event64_t ;
struct TYPE_7__ {scalar_t__ wait_event; struct waitq* waitq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct waitq*) ;
 struct waitq* FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;
 int VAR_5 ;
 int FUNC_9 (struct waitq*,TYPE_1__*) ;
 int FUNC_10 (struct waitq*) ;
 scalar_t__ FUNC_11 (int ,struct waitq*,scalar_t__,int ,void*,int ) ;
 struct waitq_link* FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct waitq_link*) ;

__attribute__((used)) static kern_return_t FUNC_14(struct waitq *VAR_6,
      event64_t VAR_7,
      thread_t VAR_8, spl_t *VAR_9)
{
 struct waitq *VAR_10;
 struct waitq_link *VAR_11;
 struct select_thread_ctx VAR_12;
 kern_return_t VAR_13;
 spl_t VAR_14;

 VAR_14 = FUNC_0();


 if (!FUNC_7(VAR_6)) {
  VAR_10 = FUNC_6(VAR_6);
  FUNC_8(VAR_10);
 } else {
  VAR_10 = VAR_6;
 }

 FUNC_3(VAR_8);

 if ((VAR_8->waitq == VAR_6) && (VAR_8->wait_event == VAR_7)) {
  FUNC_9(VAR_10, VAR_8);
  if (FUNC_5(VAR_10)) {
   VAR_10->waitq_eventmask = 0;
  }
  FUNC_2(VAR_8);
  *VAR_9 = VAR_14;

  return VAR_1;
 }

 FUNC_4(VAR_8);

 if (VAR_10 != VAR_6)
  FUNC_10(VAR_10);

 FUNC_1(VAR_14);

 if (!VAR_6->waitq_set_id)
  return VAR_0;


 VAR_11 = FUNC_12(VAR_6->waitq_set_id);
 if (!VAR_11) {

  VAR_6->waitq_set_id = 0;
  return VAR_0;
 }







 VAR_12.thread = VAR_8;
 VAR_12.event = VAR_7;
 VAR_12.spl = VAR_9;
 VAR_13 = FUNC_11(VAR_2, VAR_6, VAR_6->waitq_set_id,
         VAR_3, (void *)&VAR_12, VAR_5);

 FUNC_13(VAR_11);


 if (VAR_13 == VAR_4)
  return VAR_1;

 return VAR_0;
}
