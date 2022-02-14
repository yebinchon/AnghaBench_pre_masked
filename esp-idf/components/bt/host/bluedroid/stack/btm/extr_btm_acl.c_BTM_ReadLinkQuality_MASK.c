
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_6__ {int hci_handle; } ;
typedef TYPE_2__ tACL_CONN ;
struct TYPE_5__ {int * p_lnk_qual_cmpl_cb; int lnk_quality_timer; } ;
struct TYPE_7__ {TYPE_1__ devcb; } ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 TYPE_3__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

tBTM_STATUS FUNC_5 (BD_ADDR VAR_8, tBTM_CMPL_CB *VAR_9)
{
    tACL_CONN *VAR_10;

    FUNC_0 ("BTM_ReadLinkQuality: RemBdAddr: %02x%02x%02x%02x%02x%02x\n",
                   VAR_8[0], VAR_8[1], VAR_8[2],
                   VAR_8[3], VAR_8[4], VAR_8[5]);


    if (VAR_7.devcb.p_lnk_qual_cmpl_cb) {
        return (VAR_0);
    }

    VAR_10 = FUNC_1(VAR_8, VAR_6);
    if (VAR_10 != (tACL_CONN *)((void*)0)) {
        FUNC_3 (&VAR_7.devcb.lnk_quality_timer, VAR_5,
                         VAR_2);
        VAR_7.devcb.p_lnk_qual_cmpl_cb = VAR_9;

        if (!FUNC_2 (VAR_10->hci_handle)) {
            FUNC_4 (&VAR_7.devcb.lnk_quality_timer);
            VAR_7.devcb.p_lnk_qual_cmpl_cb = ((void*)0);
            return (VAR_3);
        } else {
            return (VAR_1);
        }
    }


    return (VAR_4);
}
