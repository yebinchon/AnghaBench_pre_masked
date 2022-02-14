
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inq_info; } ;
typedef TYPE_1__ tINQ_DB_ENT ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef int tBTM_STATUS ;
typedef int tBTM_INQ_INFO ;
typedef int tBTM_CMPL_CB ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int *) ;

tBTM_STATUS FUNC_4 (BD_ADDR VAR_3, tBTM_CMPL_CB *VAR_4
                                       , tBT_TRANSPORT VAR_5)
{
    tBTM_INQ_INFO *VAR_6 = ((void*)0);
    tINQ_DB_ENT *VAR_7;

    FUNC_0 ("BTM_ReadRemoteDeviceName: bd addr [%02x%02x%02x%02x%02x%02x]\n",
                   VAR_3[0], VAR_3[1], VAR_3[2],
                   VAR_3[3], VAR_3[4], VAR_3[5]);


    if ((VAR_7 = FUNC_3 (VAR_3)) != ((void*)0)) {
        VAR_6 = &VAR_7->inq_info;
    }
    FUNC_0 ("no device found in inquiry db\n");


    if (VAR_5 == VAR_2) {
        return FUNC_1(VAR_3, VAR_6, VAR_4);
    } else

    {
        return (FUNC_2 (VAR_3, VAR_6, VAR_1,
                                       VAR_0, VAR_4));
    }
}
