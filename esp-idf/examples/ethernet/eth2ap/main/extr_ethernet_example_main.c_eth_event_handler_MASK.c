
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void *VAR_6, esp_event_base_t VAR_7,
                              int32_t VAR_8, void *VAR_9)
{
    switch (VAR_8) {
    case 131:
        FUNC_1(VAR_1, "Ethernet Link Up");
        VAR_5 = 1;
        FUNC_2(VAR_3, VAR_0, VAR_4);
        FUNC_3(VAR_2, VAR_4);
        FUNC_0(FUNC_4());
        break;
    case 130:
        FUNC_1(VAR_1, "Ethernet Link Down");
        VAR_5 = 0;
        FUNC_0(FUNC_5());
        break;
    case 129:
        FUNC_1(VAR_1, "Ethernet Started");
        break;
    case 128:
        FUNC_1(VAR_1, "Ethernet Stopped");
        break;
    default:
        break;
    }
}
