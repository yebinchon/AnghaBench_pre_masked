
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int passkey; scalar_t__ accept; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_PASSKEY_REPLY ;
typedef int UINT32 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_1, BOOLEAN VAR_2, UINT32 VAR_3)
{
    tBTA_DM_API_PASSKEY_REPLY *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_PASSKEY_REPLY *) FUNC_3(sizeof(tBTA_DM_API_PASSKEY_REPLY))) != ((void*)0)) {
        FUNC_2(VAR_4, 0, sizeof(tBTA_DM_API_PASSKEY_REPLY));

        VAR_4->hdr.event = VAR_0;
        FUNC_0(VAR_4->bd_addr, VAR_1);
        VAR_4->accept = VAR_2;

        if (VAR_2) {
            VAR_4->passkey = VAR_3;
        }
        FUNC_1(VAR_4);
    }
}
