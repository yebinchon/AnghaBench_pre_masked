
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* run_queue_t ;
typedef TYPE_2__* processor_t ;
typedef int boolean_t ;
typedef int ast_t ;
struct TYPE_7__ {scalar_t__ current_pri; scalar_t__ first_timeslice; int * active_thread; } ;
struct TYPE_6__ {scalar_t__ highq; scalar_t__ urgency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ast_t
FUNC_2(processor_t VAR_3)
{
 run_queue_t VAR_4;
 boolean_t VAR_5;

 FUNC_0(VAR_3->active_thread != ((void*)0));

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_3->first_timeslice) {
  VAR_5 = (VAR_4->highq > VAR_3->current_pri);
 } else {
  VAR_5 = (VAR_4->highq >= VAR_3->current_pri);
 }

 if (VAR_5) {
  if (VAR_4->urgency > 0)
   return (VAR_1 | VAR_2);

  return VAR_1;
 }

 return VAR_0;
}
