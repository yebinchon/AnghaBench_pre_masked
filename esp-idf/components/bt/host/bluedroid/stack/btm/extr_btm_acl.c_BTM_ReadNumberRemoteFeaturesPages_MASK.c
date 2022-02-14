
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_read_pages; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

UINT8 FUNC_2 (BD_ADDR VAR_1)
{
    tACL_CONN *VAR_2 = FUNC_1(VAR_1, VAR_0);
    FUNC_0 ("BTM_ReadNumberRemoteFeaturesPages\n");
    if (VAR_2 == ((void*)0)) {
        return (0);
    }

    return (VAR_2->num_read_pages);
}
