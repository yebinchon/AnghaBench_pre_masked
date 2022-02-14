
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_3__ {int sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_3, UINT8 *VAR_4,
        tBT_TRANSPORT VAR_5)
{
    tBTM_SEC_DEV_REC *VAR_6;

    if ((VAR_6 = FUNC_1 (VAR_3)) != ((void*)0)) {
        if (VAR_5 == VAR_0) {
            *VAR_4 = (UINT8) VAR_6->sec_flags;
        } else {
            *VAR_4 = (UINT8) (VAR_6->sec_flags >> 8);
        }

        return (VAR_2);
    }
    FUNC_0 ("BTM_GetSecurityFlags false\n");
    return (VAR_1);
}
