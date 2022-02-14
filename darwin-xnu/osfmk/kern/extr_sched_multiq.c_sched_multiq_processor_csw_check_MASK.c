
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* run_queue_t ;
typedef TYPE_2__* processor_t ;
typedef TYPE_3__* entry_queue_t ;
typedef int boolean_t ;
typedef int ast_t ;
struct TYPE_12__ {scalar_t__ urgency; int highq; } ;
struct TYPE_11__ {int current_pri; scalar_t__ first_timeslice; int * active_thread; } ;
struct TYPE_10__ {scalar_t__ urgency; int highq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static ast_t
FUNC_6(processor_t VAR_3)
{
 boolean_t VAR_4;
 int VAR_5;

 if (FUNC_5(VAR_3, FUNC_2())) {
  return (VAR_1 | VAR_2);
 }

 entry_queue_t VAR_6 = FUNC_4(VAR_3);
 run_queue_t VAR_7 = FUNC_3(VAR_3);

 FUNC_1(VAR_3->active_thread != ((void*)0));

 VAR_5 = FUNC_0(VAR_6->highq, VAR_7->highq);

 if (VAR_3->first_timeslice) {
  VAR_4 = (VAR_5 > VAR_3->current_pri);
 } else {
  VAR_4 = (VAR_5 >= VAR_3->current_pri);
 }

 if (VAR_4) {
  if (VAR_6->urgency > 0)
   return (VAR_1 | VAR_2);

  if (VAR_7->urgency > 0)
   return (VAR_1 | VAR_2);

  return VAR_1;
 }

 return VAR_0;
}
