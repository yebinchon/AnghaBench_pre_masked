
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_CI_RX_WRITE ;
typedef int UINT16 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4(UINT16 VAR_2, char *VAR_3, UINT16 VAR_4)
{
    tBTA_AG_CI_RX_WRITE *VAR_5;
    UINT16 VAR_6 = VAR_4;
    char *VAR_7;

    if (VAR_4 > (VAR_1 - sizeof(tBTA_AG_CI_RX_WRITE) - 1)) {
        VAR_4 = VAR_1 - sizeof(tBTA_AG_CI_RX_WRITE) - 1;
    }

    while (VAR_6) {
        if (VAR_6 < VAR_4) {
            VAR_4 = VAR_6;
        }
        if ((VAR_5 = (tBTA_AG_CI_RX_WRITE *) FUNC_2((UINT16)(sizeof(tBTA_AG_CI_RX_WRITE) + VAR_4 + 1))) != ((void*)0)) {
            VAR_5->hdr.event = VAR_0;
            VAR_5->hdr.layer_specific = VAR_2;
            VAR_7 = (char *)(VAR_5+1);
            FUNC_3(VAR_7, VAR_3, VAR_4);
            VAR_7[VAR_4] = 0;
            FUNC_1(VAR_5);
        } else {
            FUNC_0("ERROR: Unable to allocate buffer to hold AT response code. len=%i", VAR_4);
            break;
        }
        VAR_6-=VAR_4;
        VAR_3+=VAR_4;
    }
}
