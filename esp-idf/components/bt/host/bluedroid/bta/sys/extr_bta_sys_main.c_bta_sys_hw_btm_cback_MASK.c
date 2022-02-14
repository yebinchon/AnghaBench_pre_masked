
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_DEV_STATUS ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_SYS_HW_MSG ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4( tBTM_DEV_STATUS VAR_4 )
{

    tBTA_SYS_HW_MSG *VAR_5;

    FUNC_0(" bta_sys_hw_btm_cback was called with parameter: %i" , VAR_4 );


    if ((VAR_5 = (tBTA_SYS_HW_MSG *) FUNC_3(sizeof(tBTA_SYS_HW_MSG))) != ((void*)0)) {
        if (VAR_4 == VAR_3) {
            VAR_5->hdr.event = VAR_1;
        } else if (VAR_4 == VAR_2) {
            VAR_5->hdr.event = VAR_0;
        } else {

            FUNC_2 (VAR_5);
            VAR_5 = ((void*)0);
        }

        if (VAR_5) {
            FUNC_1(VAR_5);
        }
    } else {
        FUNC_0("ERROR bta_sys_hw_btm_cback couldn't send msg" );
    }
}
