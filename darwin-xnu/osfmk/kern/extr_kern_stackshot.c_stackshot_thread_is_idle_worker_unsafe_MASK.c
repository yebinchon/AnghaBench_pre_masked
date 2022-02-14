
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int boolean_t ;
struct TYPE_3__ {int state; scalar_t__ block_hint; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

boolean_t
FUNC_0(thread_t VAR_2)
{




 return (VAR_2->state & VAR_0) &&
  (VAR_2->block_hint == VAR_1);
}
