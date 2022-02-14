
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ accept; int bd_addr; } ;
struct TYPE_5__ {TYPE_1__ confirm; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(tBTA_DM_MSG *VAR_3)
{
    tBTM_STATUS VAR_4 = VAR_0;

    if (VAR_3->confirm.accept == VAR_2) {
        VAR_4 = VAR_1;
    }
    FUNC_0(VAR_4, VAR_3->confirm.bd_addr);
}
