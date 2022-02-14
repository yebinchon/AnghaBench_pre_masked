
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
typedef int tBTA_SEC ;
struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {int sec_mask; int services; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_API_OPEN ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(UINT16 VAR_1, BD_ADDR VAR_2, tBTA_SEC VAR_3, tBTA_SERVICE_MASK VAR_4)
{
    tBTA_AG_API_OPEN *VAR_5;

    if ((VAR_5 = (tBTA_AG_API_OPEN *) FUNC_2(sizeof(tBTA_AG_API_OPEN))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->hdr.layer_specific = VAR_1;
        FUNC_0(VAR_5->bd_addr, VAR_2);
        VAR_5->services = VAR_4;
        VAR_5->sec_mask = VAR_3;
        FUNC_1(VAR_5);
    }
}
