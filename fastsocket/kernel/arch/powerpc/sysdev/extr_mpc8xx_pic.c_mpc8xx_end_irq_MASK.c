
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hwirq; } ;
struct TYPE_3__ {int sc_simask; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6 = (unsigned int)VAR_0[VAR_3].hwirq;

 VAR_4 = VAR_6 & 0x1f;
 VAR_5 = VAR_6 >> 5;

 VAR_1[VAR_5] |= (1 << (31-VAR_4));
 FUNC_0(&VAR_2->sc_simask, VAR_1[VAR_5]);
}
