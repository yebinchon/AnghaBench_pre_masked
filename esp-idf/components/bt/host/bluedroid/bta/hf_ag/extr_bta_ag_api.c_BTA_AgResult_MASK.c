
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_AG_RES_DATA ;
typedef int tBTA_AG_RES ;
struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {int data; int result; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_API_RESULT ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(UINT16 VAR_1, tBTA_AG_RES VAR_2, tBTA_AG_RES_DATA *VAR_3)
{
    tBTA_AG_API_RESULT *VAR_4;



    if ((VAR_4 = (tBTA_AG_API_RESULT *) FUNC_2(sizeof(tBTA_AG_API_RESULT))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        VAR_4->hdr.layer_specific = VAR_1;
        VAR_4->result = VAR_2;
        if(VAR_3) {
            FUNC_1(&VAR_4->data, VAR_3, sizeof(VAR_4->data));
        }
        FUNC_0(VAR_4);
    }
}
