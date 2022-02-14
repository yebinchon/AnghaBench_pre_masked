
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int IRQInfo1; int IRQInfo2; } ;
typedef TYPE_1__ cistpl_irq_t ;


 int VAR_0 ;

__attribute__((used)) static u_char *FUNC_0(u_char *VAR_1, u_char *VAR_2, cistpl_irq_t *VAR_3)
{
    if (VAR_1 == VAR_2)
     return ((void*)0);
    VAR_3->IRQInfo1 = *VAR_1; VAR_1++;
    if (VAR_3->IRQInfo1 & VAR_0) {
 if (VAR_1+2 > VAR_2)
  return ((void*)0);
 VAR_3->IRQInfo2 = (VAR_1[1]<<8) + VAR_1[0];
 VAR_1 += 2;
    }
    return VAR_1;
}
