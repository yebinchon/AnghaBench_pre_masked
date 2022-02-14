
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ acl_priority; int handle; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int,scalar_t__*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,int ) ;

BOOLEAN FUNC_7 (BD_ADDR VAR_8, UINT8 VAR_9, BOOLEAN VAR_10)
{
    tL2C_LCB *VAR_11;
    UINT8 *VAR_12;
    UINT8 VAR_13[VAR_4];
    UINT8 VAR_14;




    if ((VAR_11 = FUNC_6(VAR_8, VAR_0)) == ((void*)0)) {
        FUNC_2 ("L2CAP - no LCB for L2CA_SetAclPriority");
        return (VAR_1);
    }

    if (FUNC_0()) {

        if ((!VAR_10 && (VAR_9 != VAR_11->acl_priority)) ||

                ( VAR_10 && VAR_11->acl_priority == VAR_6)) {
            VAR_12 = VAR_13;

            VAR_14 = (VAR_9 == VAR_6) ? VAR_2 : VAR_3;

            FUNC_3 (VAR_12, VAR_11->handle);
            FUNC_4 (VAR_12, VAR_14);

            FUNC_1 (VAR_5, VAR_4, VAR_13, ((void*)0));


            if (VAR_11->acl_priority != VAR_9) {
                VAR_11->acl_priority = VAR_9;
                FUNC_5();
            }
        }
    }
    return (VAR_7);
}
