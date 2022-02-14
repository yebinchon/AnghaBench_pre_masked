
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int processor_t ;
typedef int boolean_t ;
struct TYPE_2__ {int highq; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static boolean_t
FUNC_1(processor_t VAR_0,
                                               int VAR_1,
                                               boolean_t VAR_2)
{
 if (VAR_2)
  return FUNC_0(VAR_0)->highq >= VAR_1;
 else
  return FUNC_0(VAR_0)->highq > VAR_1;
}
