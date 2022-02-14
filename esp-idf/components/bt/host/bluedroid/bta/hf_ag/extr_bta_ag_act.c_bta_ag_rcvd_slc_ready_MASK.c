
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_2__ {scalar_t__ parse_mode; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(tBTA_AG_SCB *VAR_2, tBTA_AG_DATA *VAR_3)
{
    FUNC_1(VAR_3);
    FUNC_0("bta_ag_rcvd_slc_ready: handle = %d", FUNC_2(VAR_2));

    if (VAR_1.parse_mode == VAR_0) {

        FUNC_3(VAR_2, ((void*)0));
    }
}
