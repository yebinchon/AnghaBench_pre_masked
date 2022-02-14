
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int action; int irq; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_3;

 VAR_2 = 1;



 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(FUNC_1(),
       VAR_1[VAR_3].irq,
       VAR_1[VAR_3].action, 0);
}
