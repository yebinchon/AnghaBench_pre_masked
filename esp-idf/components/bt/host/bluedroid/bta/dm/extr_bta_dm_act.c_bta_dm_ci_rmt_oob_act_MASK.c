
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ accept; int r; int c; int bd_addr; } ;
struct TYPE_5__ {TYPE_1__ ci_rmt_oob; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(tBTA_DM_MSG *VAR_3)
{
    tBTM_STATUS VAR_4 = VAR_0;

    if (VAR_3->ci_rmt_oob.accept == VAR_2) {
        VAR_4 = VAR_1;
    }
    FUNC_0(VAR_4, VAR_3->ci_rmt_oob.bd_addr,
                           VAR_3->ci_rmt_oob.c, VAR_3->ci_rmt_oob.r );
}
