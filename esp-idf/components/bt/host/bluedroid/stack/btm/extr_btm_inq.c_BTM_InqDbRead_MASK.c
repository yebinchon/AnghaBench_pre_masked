
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inq_info; } ;
typedef TYPE_1__ tINQ_DB_ENT ;
typedef int tBTM_INQ_INFO ;
typedef int * BD_ADDR ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

tBTM_INQ_INFO *FUNC_2 (BD_ADDR VAR_0)
{
    FUNC_0 ("BTM_InqDbRead: bd addr [%02x%02x%02x%02x%02x%02x]\n",
                   VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5]);

    tINQ_DB_ENT *VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1) {
        return ((void*)0);
    }

    return &VAR_1->inq_info;
}
