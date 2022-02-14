
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {int * p_disc_db; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(tBTA_HF_CLIENT_DATA *VAR_1)
{
    FUNC_0(VAR_1);

    if (VAR_0.scb.p_disc_db != ((void*)0)) {
        FUNC_1(VAR_0.scb.p_disc_db);
        VAR_0.scb.p_disc_db = ((void*)0);
    }
}
