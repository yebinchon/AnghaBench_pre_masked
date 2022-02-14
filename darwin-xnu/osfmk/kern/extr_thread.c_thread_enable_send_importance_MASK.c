
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(thread_t VAR_2, boolean_t VAR_3)
{
 if (VAR_3 == VAR_1)
  VAR_2->options |= VAR_0;
 else
  VAR_2->options &= ~VAR_0;
}
