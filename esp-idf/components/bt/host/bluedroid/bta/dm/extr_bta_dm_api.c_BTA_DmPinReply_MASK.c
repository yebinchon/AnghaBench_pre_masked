
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int p_pin; int pin_len; scalar_t__ accept; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_PIN_REPLY ;
typedef int UINT8 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_1, BOOLEAN VAR_2, UINT8 VAR_3, UINT8 *VAR_4)
{
    tBTA_DM_API_PIN_REPLY *VAR_5;

    if ((VAR_5 = (tBTA_DM_API_PIN_REPLY *) FUNC_3(sizeof(tBTA_DM_API_PIN_REPLY))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        FUNC_0(VAR_5->bd_addr, VAR_1);
        VAR_5->accept = VAR_2;
        if (VAR_2) {
            VAR_5->pin_len = VAR_3;
            FUNC_2(VAR_5->p_pin, VAR_4, VAR_3);
        }
        FUNC_1(VAR_5);
    }

}
