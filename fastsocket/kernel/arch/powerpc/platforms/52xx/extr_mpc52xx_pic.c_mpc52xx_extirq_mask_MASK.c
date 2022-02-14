
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrl; } ;
struct TYPE_3__ {int hwirq; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_2[VAR_3].hwirq;
 VAR_5 = VAR_4 & VAR_0;

 FUNC_0(&VAR_1->ctrl, 11 - VAR_5);
}
