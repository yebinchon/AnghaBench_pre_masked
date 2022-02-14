
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_a2d_cb_param_t ;
typedef int esp_a2d_cb_event_t ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int *,int,int *) ;
 int VAR_1 ;

void FUNC_2(esp_a2d_cb_event_t VAR_2, esp_a2d_cb_param_t *VAR_3)
{
    switch (VAR_2) {
    case 128:
    case 129:
    case 130: {
        FUNC_1(VAR_1, VAR_2, VAR_3, sizeof(esp_a2d_cb_param_t), ((void*)0));
        break;
    }
    default:
        FUNC_0(VAR_0, "Invalid A2DP event: %d", VAR_2);
        break;
    }
}
