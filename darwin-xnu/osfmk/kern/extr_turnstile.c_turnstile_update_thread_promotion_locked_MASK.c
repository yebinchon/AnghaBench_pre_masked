
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct TYPE_5__ {int waitq_prio_queue; } ;
struct turnstile {TYPE_1__ ts_waitq; } ;
typedef int boolean_t ;
struct TYPE_6__ {int base_pri; int wait_prioq_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct turnstile*) ;

__attribute__((used)) static boolean_t
FUNC_7(
 struct turnstile *VAR_5,
 thread_t VAR_6)
{
 int VAR_7 = FUNC_3(&(VAR_5->ts_waitq.waitq_prio_queue),
     &(VAR_6->wait_prioq_links));

 if (VAR_6->base_pri != VAR_7) {
  FUNC_0(VAR_2,
   (FUNC_1(VAR_4, (VAR_3))) | VAR_0,
   FUNC_2(VAR_5),
   FUNC_4(VAR_6),
   VAR_6->base_pri,
   VAR_7, 0);
 }

 if (!FUNC_5(
   &VAR_5->ts_waitq.waitq_prio_queue,
   &VAR_6->wait_prioq_links, VAR_6->base_pri)) {
  return VAR_1;
 }


 return FUNC_6(VAR_5);
}
