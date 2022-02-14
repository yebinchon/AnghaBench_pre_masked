
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTA_STATUS ;
typedef int tBTA_AG_PARSE_MODE ;
typedef int tBTA_AG_CBACK ;
struct TYPE_6__ {int event; } ;
struct TYPE_8__ {int * p_cback; int parse_mode; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_API_ENABLE ;
typedef size_t UINT8 ;
struct TYPE_9__ {TYPE_2__* scb; } ;
struct TYPE_7__ {scalar_t__ in_use; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

tBTA_STATUS FUNC_4(tBTA_AG_PARSE_MODE VAR_7, tBTA_AG_CBACK *VAR_8)
{
    tBTA_AG_API_ENABLE *VAR_9;
    UINT8 VAR_10;


    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        if (VAR_5.scb[VAR_10].in_use) {
            FUNC_0 ("BTA_AgEnable: FAILED, AG already enabled.");
            return VAR_2;
        }
    }

    FUNC_1(VAR_3, &VAR_6);

    if ((VAR_9 = (tBTA_AG_API_ENABLE *) FUNC_3(sizeof(tBTA_AG_API_ENABLE))) != ((void*)0)) {
        VAR_9->hdr.event = VAR_0;
        VAR_9->parse_mode = VAR_7;
        VAR_9->p_cback = VAR_8;
        FUNC_2(VAR_9);
    }
    return VAR_4;
}
