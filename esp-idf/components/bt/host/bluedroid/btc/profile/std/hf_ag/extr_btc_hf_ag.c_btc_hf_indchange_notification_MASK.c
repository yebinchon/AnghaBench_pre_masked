
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_hf_network_state_t ;
typedef int esp_hf_call_status_t ;
typedef int esp_hf_call_setup_status_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static bt_status_t FUNC_4(bt_bdaddr_t *VAR_5,
                                                esp_hf_call_status_t VAR_6,
                                                esp_hf_call_setup_status_t VAR_7,
                                                esp_hf_network_state_t VAR_8, int VAR_9)
{
    int VAR_10 = FUNC_1(VAR_5);
    FUNC_0();
    if (FUNC_2(VAR_5)) {


        FUNC_3(VAR_0, VAR_6);
        FUNC_3(VAR_1, VAR_7);
        FUNC_3(VAR_2, VAR_8);
        FUNC_3(VAR_3, VAR_9);
        return VAR_4;
    }
    return VAR_4;
}
