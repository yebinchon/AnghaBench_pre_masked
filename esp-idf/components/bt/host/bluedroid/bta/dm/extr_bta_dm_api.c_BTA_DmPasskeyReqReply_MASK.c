
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int passkey; int accept; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_KEY_REQ ;
typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BOOLEAN VAR_1, BD_ADDR VAR_2, UINT32 VAR_3)
{
    tBTA_DM_API_KEY_REQ *VAR_4;
    if ((VAR_4 = (tBTA_DM_API_KEY_REQ *) FUNC_2(sizeof(tBTA_DM_API_KEY_REQ))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        FUNC_0(VAR_4->bd_addr, VAR_2);
        VAR_4->accept = VAR_1;
        VAR_4->passkey = VAR_3;
        FUNC_1(VAR_4);
    }
}
