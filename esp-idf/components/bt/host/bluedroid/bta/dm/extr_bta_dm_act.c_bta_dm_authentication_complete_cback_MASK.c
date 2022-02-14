
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fail_reason; int addr_type; int dev_type; scalar_t__* bd_name; int bd_addr; } ;
struct TYPE_7__ {TYPE_1__ auth_cmpl; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_8__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;
typedef int DEV_CLASS ;
typedef int BD_NAME ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,TYPE_2__*) ;

__attribute__((used)) static UINT8 FUNC_7(BD_ADDR VAR_4, DEV_CLASS VAR_5, BD_NAME VAR_6, int VAR_7)
{
    tBTA_DM_SEC VAR_8;
    FUNC_1(VAR_5);

    if (VAR_7 != VAR_2) {
        FUNC_5(&VAR_8, 0, sizeof(tBTA_DM_SEC));
        FUNC_2(VAR_8.auth_cmpl.bd_addr, VAR_4);

        FUNC_4(VAR_8.auth_cmpl.bd_name, VAR_6, (VAR_0 - 1));
        VAR_8.auth_cmpl.bd_name[VAR_0 - 1] = 0;



        FUNC_0(VAR_4, &VAR_8.auth_cmpl.dev_type, &VAR_8.auth_cmpl.addr_type);

        VAR_8.auth_cmpl.fail_reason = (UINT8)VAR_7;

        if (VAR_3.p_sec_cback) {
            VAR_3.p_sec_cback(VAR_1, &VAR_8);
        }

        FUNC_3(VAR_4);
    }

    return VAR_2;
}
