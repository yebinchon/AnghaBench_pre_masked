
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BOND_CANCEL ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_1)
{
    tBTA_DM_API_BOND_CANCEL *VAR_2;

    if ((VAR_2 = (tBTA_DM_API_BOND_CANCEL *) FUNC_2(sizeof(tBTA_DM_API_BOND_CANCEL))) != ((void*)0)) {
        VAR_2->hdr.event = VAR_0;
        FUNC_0(VAR_2->bd_addr, VAR_1);
        FUNC_1(VAR_2);
    }
}
