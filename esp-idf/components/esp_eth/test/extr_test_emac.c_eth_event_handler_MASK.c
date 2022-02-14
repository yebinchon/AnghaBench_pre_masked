
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;
typedef int EventGroupHandle_t ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_4, esp_event_base_t VAR_5,
                              int32_t VAR_6, void *VAR_7)
{
    EventGroupHandle_t VAR_8 = (EventGroupHandle_t)VAR_4;
    switch (VAR_6) {
    case 131:
        FUNC_1(VAR_8, VAR_0);
        FUNC_0(VAR_3, "Ethernet Link Up");
        break;
    case 130:
        FUNC_0(VAR_3, "Ethernet Link Down");
        break;
    case 129:
        FUNC_1(VAR_8, VAR_1);
        FUNC_0(VAR_3, "Ethernet Started");
        break;
    case 128:
        FUNC_1(VAR_8, VAR_2);
        FUNC_0(VAR_3, "Ethernet Stopped");
        break;
    default:
        break;
    }
}
