
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sco_idx; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_1__ sco; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(tBTA_AG_SCB *VAR_4, tBTA_AG_DATA *VAR_5)
{
    FUNC_1(VAR_5);




    if ((VAR_4->sco_idx != VAR_2) || (VAR_3.sco.state == VAR_1))



    {
        FUNC_0("bta_ag_sco_close: sco_inx = %d", VAR_4->sco_idx);
        FUNC_2(VAR_4, VAR_0);
    }
}
