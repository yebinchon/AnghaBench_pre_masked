
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t** peer_lmp_features; } ;
typedef TYPE_1__ tACL_CONN ;
typedef size_t UINT8 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ) ;

UINT8 *FUNC_3 (BD_ADDR VAR_2, UINT8 VAR_3)
{
    tACL_CONN *VAR_4 = FUNC_2(VAR_2, VAR_0);
    FUNC_0 ("BTM_ReadRemoteExtendedFeatures\n");
    if (VAR_4 == ((void*)0)) {
        return (((void*)0));
    }

    if (VAR_3 > VAR_1) {
        FUNC_1("Warning: BTM_ReadRemoteExtendedFeatures page %d unknown\n", VAR_3);
        return ((void*)0);
    }

    return (VAR_4->peer_lmp_features[VAR_3]);
}
