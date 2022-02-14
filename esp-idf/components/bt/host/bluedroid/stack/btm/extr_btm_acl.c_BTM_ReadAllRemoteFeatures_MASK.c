
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** peer_lmp_features; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

UINT8 *FUNC_2 (BD_ADDR VAR_2)
{
    tACL_CONN *VAR_3 = FUNC_1(VAR_2, VAR_0);
    FUNC_0 ("BTM_ReadAllRemoteFeatures\n");
    if (VAR_3 == ((void*)0)) {
        return (((void*)0));
    }

    return (VAR_3->peer_lmp_features[VAR_1]);
}
