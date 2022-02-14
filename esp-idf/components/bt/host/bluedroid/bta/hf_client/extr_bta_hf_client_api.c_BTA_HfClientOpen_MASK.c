
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SEC ;
struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {int sec_mask; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_API_OPEN ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(UINT16 VAR_1, BD_ADDR VAR_2, tBTA_SEC VAR_3)
{
    tBTA_HF_CLIENT_API_OPEN *VAR_4;

    if ((VAR_4 = (tBTA_HF_CLIENT_API_OPEN *) FUNC_2(sizeof(tBTA_HF_CLIENT_API_OPEN))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        VAR_4->hdr.layer_specific = VAR_1;
        FUNC_0(VAR_4->bd_addr, VAR_2);
        VAR_4->sec_mask = VAR_3;
        FUNC_1(VAR_4);
    }
}
