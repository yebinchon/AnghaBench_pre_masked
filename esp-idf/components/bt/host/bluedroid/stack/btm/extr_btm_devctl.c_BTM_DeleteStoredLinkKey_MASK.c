
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_3__ {int * p_stored_link_key_cmpl_cb; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;

tBTM_STATUS FUNC_2(BD_ADDR VAR_6, tBTM_CMPL_CB *VAR_7)
{
    BD_ADDR VAR_8;
    BOOLEAN VAR_9 = VAR_3;


    if (VAR_5.devcb.p_stored_link_key_cmpl_cb) {
        return (VAR_0);
    }

    if (!VAR_6) {

        VAR_9 = VAR_4;


        VAR_6 = VAR_8;
    }

    FUNC_0 ("BTM: BTM_DeleteStoredLinkKey: delete_all_flag: %s",
                     VAR_9 ? "TRUE" : "FALSE");


    VAR_5.devcb.p_stored_link_key_cmpl_cb = VAR_7;
    if (!FUNC_1 (VAR_6, VAR_9)) {
        return (VAR_1);
    } else {
        return (VAR_2);
    }
}
