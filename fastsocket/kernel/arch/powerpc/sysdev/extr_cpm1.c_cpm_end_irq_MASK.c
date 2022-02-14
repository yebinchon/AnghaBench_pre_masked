
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpic_cisr; } ;
struct TYPE_3__ {scalar_t__ hwirq; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 unsigned int VAR_3 = (unsigned int)VAR_1[VAR_2].hwirq;

 FUNC_0(&VAR_0->cpic_cisr, (1 << VAR_3));
}
