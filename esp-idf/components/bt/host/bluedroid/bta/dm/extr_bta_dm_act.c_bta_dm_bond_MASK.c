
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_9__ {int success; int fail_reason; scalar_t__* bd_name; int bd_addr; } ;
struct TYPE_11__ {TYPE_1__ auth_cmpl; } ;
typedef TYPE_3__ tBTA_DM_SEC ;
struct TYPE_10__ {scalar_t__ transport; int bd_addr; } ;
struct TYPE_12__ {TYPE_2__ bond; } ;
typedef TYPE_4__ tBTA_DM_MSG ;
struct TYPE_13__ {int (* p_sec_cback ) (int ,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int *,int ) ;
 char* FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 TYPE_7__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (int ,TYPE_3__*) ;

void FUNC_8 (tBTA_DM_MSG *VAR_8)
{
    tBTM_STATUS VAR_9;
    tBTA_DM_SEC VAR_10;
    char *VAR_11;

    if (VAR_8->bond.transport == VAR_2) {
        VAR_9 = FUNC_0 ( VAR_8->bond.bd_addr, 0, ((void*)0), 0 );
    } else {
        VAR_9 = FUNC_1 ( VAR_8->bond.bd_addr, VAR_8->bond.transport, 0, ((void*)0), 0 );
    }


    if (VAR_7.p_sec_cback && (VAR_9 != VAR_3)) {

        FUNC_6(&VAR_10, 0, sizeof(tBTA_DM_SEC));
        FUNC_3(VAR_10.auth_cmpl.bd_addr, VAR_8->bond.bd_addr);
        VAR_11 = FUNC_2(VAR_8->bond.bd_addr);
        if (VAR_11 != ((void*)0)) {
            FUNC_5(VAR_10.auth_cmpl.bd_name, VAR_11, (VAR_0 - 1));
            VAR_10.auth_cmpl.bd_name[VAR_0 - 1] = 0;
        }





        VAR_10.auth_cmpl.fail_reason = VAR_5;
        if (VAR_9 == VAR_4) {
            VAR_10.auth_cmpl.success = VAR_6;
        } else {

            FUNC_4(VAR_8->bond.bd_addr);
        }
        VAR_7.p_sec_cback(VAR_1, &VAR_10);
    }

}
