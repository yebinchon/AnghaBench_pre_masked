
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_keys; int status; int event; } ;
typedef TYPE_2__ tBTM_DELETE_STORED_LINK_KEY_COMPLETE ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
typedef int UINT8 ;
struct TYPE_6__ {int (* p_stored_link_key_cmpl_cb ) (TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ devcb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3 (UINT8 *VAR_2)
{
    tBTM_CMPL_CB *VAR_3 = &VAR_1.devcb.p_stored_link_key_cmpl_cb;
    tBTM_DELETE_STORED_LINK_KEY_COMPLETE VAR_4;


    VAR_1.devcb.p_stored_link_key_cmpl_cb = ((void*)0);

    if (VAR_3) {

        VAR_4.event = VAR_0;


        FUNC_1 (VAR_4.status, VAR_2);
        FUNC_0 (VAR_4.num_keys, VAR_2);


        (*VAR_3)(&VAR_4);
    }
}
