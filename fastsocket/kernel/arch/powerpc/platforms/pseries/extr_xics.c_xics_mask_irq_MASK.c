
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwirq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
 unsigned int VAR_4;

 FUNC_0("xics: mask virq %d\n", VAR_3);

 VAR_4 = (unsigned int)VAR_2[VAR_3].hwirq;
 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  return;
 FUNC_1(VAR_4);
}
