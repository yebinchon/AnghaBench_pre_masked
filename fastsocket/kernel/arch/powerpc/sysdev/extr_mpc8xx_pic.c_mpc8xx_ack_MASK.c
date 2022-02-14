
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hwirq; } ;
struct TYPE_3__ {int sc_sipend; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = (unsigned int)VAR_0[VAR_2].hwirq;

 VAR_3 = VAR_4 & 0x1f;
 FUNC_0(&VAR_1->sc_sipend, 1 << (31-VAR_3));
}
