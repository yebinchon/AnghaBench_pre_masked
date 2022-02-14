
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_8__ {scalar_t__ cpu_id; } ;
struct TYPE_7__ {scalar_t__ sched_pri; scalar_t__ runq; TYPE_2__* bound_processor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,uintptr_t,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static processor_t
FUNC_4(
 thread_t VAR_4,
 processor_t VAR_5)
{
 processor_t VAR_6;


 FUNC_2(VAR_4->sched_pri < VAR_0);

 FUNC_2(VAR_4->runq == VAR_3);

 FUNC_0(FUNC_1(VAR_1, VAR_2), FUNC_3(VAR_4), VAR_5 ? (uintptr_t)VAR_5->cpu_id : (uintptr_t)-1, 0, 0, 0);

 VAR_6 = VAR_4->bound_processor;
 VAR_4->bound_processor = VAR_5;

 return (VAR_6);
}
