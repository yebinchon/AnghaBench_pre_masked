
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int run_queue_t ;
typedef scalar_t__ processor_t ;
struct TYPE_3__ {scalar_t__ bound_processor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) __attribute__((always_inline))
static inline run_queue_t FUNC_3(processor_t VAR_1, thread_t VAR_2)
{
 if (VAR_2->bound_processor == VAR_0) {
  return FUNC_2(VAR_1);
 } else {
  FUNC_0(VAR_2->bound_processor == VAR_1);
  return FUNC_1(VAR_1);
 }
}
