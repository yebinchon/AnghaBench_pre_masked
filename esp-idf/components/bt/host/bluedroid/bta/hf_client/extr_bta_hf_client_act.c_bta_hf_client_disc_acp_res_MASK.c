
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {TYPE_1__ disc_result; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;

void FUNC_2(tBTA_HF_CLIENT_DATA *VAR_2)
{

    if (VAR_2->disc_result.status == VAR_1 ||
            VAR_2->disc_result.status == VAR_0) {

        FUNC_1();
    }


    FUNC_0(VAR_2);
}
