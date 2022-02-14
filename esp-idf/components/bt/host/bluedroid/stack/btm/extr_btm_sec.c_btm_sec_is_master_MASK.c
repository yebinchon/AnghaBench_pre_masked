
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_6__ {scalar_t__ link_role; } ;
typedef TYPE_2__ tACL_CONN ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

__attribute__((used)) static BOOLEAN FUNC_1(tBTM_SEC_DEV_REC *VAR_2)
{
    tACL_CONN *VAR_3 = FUNC_0(VAR_2->bd_addr, VAR_1);
    return (VAR_3 && (VAR_3->link_role == VAR_0));
}
