
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sco_codec; scalar_t__ codec_fallback; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef int UINT16 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int *,int ) ;

void FUNC_3(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{
    UINT16 VAR_5;

    if (VAR_3->codec_fallback) {
        VAR_5 = VAR_1;
    } else {
        switch(VAR_3->sco_codec) {
            case 128:
                VAR_5 = VAR_1;
                break;

            case 130:
                VAR_5 = VAR_1;
                break;

            case 129:
                VAR_5 = VAR_2;
                break;

            default:
                FUNC_1("bta_ag_send_bcs: unknown codec %d, use CVSD", VAR_3->sco_codec);
                VAR_5 = VAR_1;
                break;
        }
    }

    FUNC_0("send +BCS codec is %d", VAR_5);
    FUNC_2(VAR_3, VAR_0, ((void*)0), VAR_5);
}
