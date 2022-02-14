
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGATT_STATUS ;
typedef int tDIS_CB ;
typedef int tDIS_ATTR_MASK ;
typedef int esp_gatts_if_t ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_4 ;

void FUNC_3 (esp_gatts_if_t VAR_5, tDIS_ATTR_MASK VAR_6)
{

    tGATT_STATUS VAR_7;
    VAR_3 = VAR_6;
    if (VAR_2.enabled) {
        FUNC_0("DIS already initalized");
        return;
    }

    FUNC_2(&VAR_2, 0, sizeof(tDIS_CB));

    FUNC_1 (VAR_5 , &VAR_4, 0, VAR_0, VAR_1);

}
