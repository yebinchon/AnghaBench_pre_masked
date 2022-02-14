
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TickList; } ;
typedef TYPE_1__ INTERRUPT_MANAGER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

INTERRUPT_MANAGER *FUNC_2()
{
 INTERRUPT_MANAGER *VAR_1 = FUNC_1(sizeof(INTERRUPT_MANAGER));

 VAR_1->TickList = FUNC_0(VAR_0);

 return VAR_1;
}
