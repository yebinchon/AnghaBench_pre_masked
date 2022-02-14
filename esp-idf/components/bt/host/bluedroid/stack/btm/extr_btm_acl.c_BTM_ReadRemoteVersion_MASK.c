
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int lmp_subversion; int manufacturer; int lmp_version; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_3, UINT8 *VAR_4,
                                   UINT16 *VAR_5, UINT16 *VAR_6)
{
    tACL_CONN *VAR_7 = FUNC_1(VAR_3, VAR_2);
    FUNC_0 ("BTM_ReadRemoteVersion\n");
    if (VAR_7 == ((void*)0)) {
        return (VAR_1);
    }

    if (VAR_4) {
        *VAR_4 = VAR_7->lmp_version;
    }

    if (VAR_5) {
        *VAR_5 = VAR_7->manufacturer;
    }

    if (VAR_6) {
        *VAR_6 = VAR_7->lmp_subversion;
    }

    return (VAR_0);
}
