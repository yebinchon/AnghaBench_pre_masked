
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int accept; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_CONFIRM ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_1, BOOLEAN VAR_2)
{
    tBTA_DM_API_CONFIRM *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_CONFIRM *) FUNC_2(sizeof(tBTA_DM_API_CONFIRM))) != ((void*)0)) {
        VAR_3->hdr.event = VAR_0;
        FUNC_0(VAR_3->bd_addr, VAR_1);
        VAR_3->accept = VAR_2;
        FUNC_1(VAR_3);
    }
}
