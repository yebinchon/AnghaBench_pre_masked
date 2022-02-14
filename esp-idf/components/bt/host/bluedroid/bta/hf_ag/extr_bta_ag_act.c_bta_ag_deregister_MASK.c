
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reg_services; int dealloc; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(tBTA_AG_SCB *VAR_1, tBTA_AG_DATA *VAR_2)
{

    VAR_1->dealloc = VAR_0;

    FUNC_1(VAR_1, VAR_2);

    FUNC_0(VAR_1, VAR_1->reg_services);

    FUNC_2(VAR_1);
}
