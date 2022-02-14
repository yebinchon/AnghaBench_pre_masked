
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_avrc_ct_cb_param_t ;
typedef int esp_avrc_ct_cb_event_t ;


 int VAR_0 ;







 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int *,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(esp_avrc_ct_cb_event_t VAR_2, esp_avrc_ct_cb_param_t *VAR_3)
{
    switch (VAR_2) {
    case 131:
    case 133:
    case 130:
    case 134:
    case 129:
    case 132:
    case 128: {
        FUNC_1(VAR_1, VAR_2, VAR_3, sizeof(esp_avrc_ct_cb_param_t), ((void*)0));
        break;
    }
    default:
        FUNC_0(VAR_0, "Invalid AVRC event: %d", VAR_2);
        break;
    }
}
