
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_AG_PEER_CODEC ;
struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {int codec; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_API_SETCODEC ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(UINT16 VAR_1, tBTA_AG_PEER_CODEC VAR_2)
{
    tBTA_AG_API_SETCODEC *VAR_3;

    if ((VAR_3 = (tBTA_AG_API_SETCODEC *) FUNC_1(sizeof(tBTA_AG_API_SETCODEC))) != ((void*)0)) {
        VAR_3->hdr.event = VAR_0;
        VAR_3->hdr.layer_specific = VAR_1;
        VAR_3->codec = VAR_2;
        FUNC_0(VAR_3);
    }
}
