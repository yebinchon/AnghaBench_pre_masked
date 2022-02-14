
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq {int waitq_queue; int waitq_prio_queue; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int wait_links; int base_pri; int wait_prioq_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (struct waitq*) ;
 int FUNC_10 (struct waitq*) ;

__attribute__((used)) static inline void FUNC_11(struct waitq *VAR_7,
                                       thread_t VAR_8, boolean_t VAR_9)
{
 if (FUNC_9(VAR_7)) {
  FUNC_0(VAR_1,
   (FUNC_1(VAR_6, (VAR_3))) | VAR_0,
   FUNC_2(FUNC_10(VAR_7)),
   FUNC_7(VAR_8),
   VAR_8->base_pri, 0, 0);

  FUNC_8(0, VAR_5, ((void*)0));
  FUNC_5(&(VAR_8->wait_prioq_links));
  FUNC_6(&VAR_7->waitq_prio_queue,
    &VAR_8->wait_prioq_links, VAR_8->base_pri,
    VAR_2);
 } else {
  FUNC_8(0, VAR_4, ((void*)0));
  if (VAR_9) {
   FUNC_4(&VAR_7->waitq_queue, &VAR_8->wait_links);
  } else {
   FUNC_3(&VAR_7->waitq_queue, &VAR_8->wait_links);
  }
 }
}
