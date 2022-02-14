
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq {int waitq_prio_queue; } ;
struct TYPE_4__ {int wait_links; int wait_prioq_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;

__attribute__((used)) static inline void FUNC_8(struct waitq *VAR_5,
                                       thread_t VAR_6)
{
 if (FUNC_6(VAR_5)) {
  FUNC_0(VAR_1,
   (FUNC_1(VAR_4, (VAR_3))) | VAR_0,
   FUNC_2(FUNC_7(VAR_5)),
   FUNC_5(VAR_6),
   0, 0, 0);
  FUNC_3(&VAR_5->waitq_prio_queue, &VAR_6->wait_prioq_links,
    VAR_2);
 } else {
  FUNC_4(&(VAR_6->wait_links));
 }
}
