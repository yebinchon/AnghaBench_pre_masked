
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;


 int FUNC_1 (int ,int *) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void *VAR_4, esp_event_base_t VAR_5,
                               int32_t VAR_6, void *VAR_7)
{
    switch (VAR_6) {
    case 129:
        FUNC_0(VAR_1, "Wi-Fi AP got a station connected");
        VAR_3 = 1;
        FUNC_1(VAR_0, VAR_2);
        break;
    case 128:
        FUNC_0(VAR_1, "Wi-Fi AP got a station disconnected");
        VAR_3 = 0;
        FUNC_1(VAR_0, ((void*)0));
        break;
    default:
        break;
    }
}
