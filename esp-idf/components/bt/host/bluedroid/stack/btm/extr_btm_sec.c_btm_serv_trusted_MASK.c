
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int service_id; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
struct TYPE_6__ {int trusted_mask; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOLEAN FUNC_1(tBTM_SEC_DEV_REC *VAR_2, tBTM_SEC_SERV_REC *VAR_3)
{
    if (FUNC_0(VAR_2->trusted_mask, VAR_3->service_id)) {
        return (VAR_1);
    }
    return (VAR_0);
}
