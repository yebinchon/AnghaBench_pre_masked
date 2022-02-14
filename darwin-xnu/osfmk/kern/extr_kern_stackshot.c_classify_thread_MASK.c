
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
typedef enum thread_classification { ____Placeholder_thread_classification } thread_classification ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ state; TYPE_1__* active_thread; } ;
struct TYPE_5__ {scalar_t__ last_run_time; TYPE_2__* last_processor; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum thread_classification
FUNC_0(thread_t VAR_6, boolean_t * VAR_7, uint32_t VAR_8)
{
 boolean_t VAR_9 = ((VAR_8 & VAR_2) != 0);

 processor_t VAR_10 = VAR_6->last_processor;

 boolean_t VAR_11 =
     (VAR_10 != VAR_0 && VAR_10->state == VAR_1 && VAR_10->active_thread == VAR_6);

 *VAR_7 = VAR_11;



 if (!VAR_9 || VAR_11 || (VAR_6->last_run_time > VAR_3)) {
  return VAR_5;
 } else {
  return VAR_4;
 }
}
