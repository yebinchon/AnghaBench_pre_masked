
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef TYPE_1__ app_gap_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(void)
{
    char *VAR_6 = "ESP_GAP_INQRUIY";
    FUNC_0(VAR_6);


    FUNC_2(VAR_1, VAR_2);


    FUNC_1(VAR_4);


    app_gap_cb_t *VAR_7 = &VAR_5;
    FUNC_4(VAR_7, 0, sizeof(app_gap_cb_t));


    VAR_7->state = VAR_0;
    FUNC_3(VAR_3, 10, 0);
}
