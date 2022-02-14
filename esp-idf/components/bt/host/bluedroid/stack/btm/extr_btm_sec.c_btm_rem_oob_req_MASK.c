
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* bd_name; int * dev_class; int * bd_addr; } ;
typedef TYPE_2__ tBTM_SP_RMT_OOB ;
typedef int tBTM_SP_EVT_DATA ;
struct TYPE_8__ {scalar_t__ sec_bd_name; int dev_class; int bd_addr; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_6__ {scalar_t__ (* p_sp_callback ) (int ,int *) ;} ;
struct TYPE_9__ {int acl_disc_reason; TYPE_1__ api; } ;
typedef int BT_OCTET16 ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9 (UINT8 *VAR_9)
{
    UINT8 *VAR_10;
    tBTM_SP_RMT_OOB VAR_11;
    tBTM_SEC_DEV_REC *VAR_12;
    BT_OCTET16 VAR_13;
    BT_OCTET16 VAR_14;

    VAR_10 = VAR_11.bd_addr;

    FUNC_3 (VAR_10, VAR_9);

    FUNC_2 ("btm_rem_oob_req() BDA: %02x:%02x:%02x:%02x:%02x:%02x\n",
                     VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5]);

    if ( (((void*)0) != (VAR_12 = FUNC_4 (VAR_10))) &&
            VAR_8.api.p_sp_callback) {
        FUNC_7 (VAR_11.bd_addr, VAR_12->bd_addr, VAR_0);
        FUNC_7 (VAR_11.dev_class, VAR_12->dev_class, VAR_5);
        FUNC_0((char *)VAR_11.bd_name, sizeof(VAR_11.bd_name), (char *)VAR_12->sec_bd_name, VAR_1 + 1);
        VAR_11.bd_name[VAR_1] = 0;

        FUNC_5(VAR_3);
        if ((*VAR_8.api.p_sp_callback) (VAR_4, (tBTM_SP_EVT_DATA *)&VAR_11) == VAR_2) {
            FUNC_1(VAR_7, VAR_10, VAR_13, VAR_14);
        }
        return;
    }


    VAR_8.acl_disc_reason = VAR_6;
    FUNC_6 (VAR_10);
}
