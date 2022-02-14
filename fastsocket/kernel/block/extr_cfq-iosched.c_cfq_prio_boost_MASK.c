
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {scalar_t__ ioprio; scalar_t__ org_ioprio; int org_ioprio_class; int ioprio_class; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct cfq_queue *VAR_2)
{
 if (FUNC_1()) {




  if (FUNC_0(VAR_2))
   VAR_2->ioprio_class = VAR_0;
  if (VAR_2->ioprio > VAR_1)
   VAR_2->ioprio = VAR_1;
 } else {



  VAR_2->ioprio_class = VAR_2->org_ioprio_class;
  VAR_2->ioprio = VAR_2->org_ioprio;
 }
}
