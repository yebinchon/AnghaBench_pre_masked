
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef int UINT8 ;
struct TYPE_3__ {int * p_curr_scb; } ;
struct TYPE_4__ {TYPE_1__ sco; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{
    UINT8 VAR_5;
    FUNC_0(VAR_4);


    if (VAR_2.sco.p_curr_scb != ((void*)0) && VAR_2.sco.p_curr_scb != VAR_3)
    {
        VAR_5 = VAR_1;
    }

    else
    {
        VAR_5 = VAR_0;
    }

    FUNC_1(VAR_3, VAR_5);
}
