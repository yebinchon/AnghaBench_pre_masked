
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_running; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 while (VAR_1-- > 0) {
  if (FUNC_0(VAR_0)->cpu_running)
   break;
  FUNC_1(VAR_2);
 }
}
