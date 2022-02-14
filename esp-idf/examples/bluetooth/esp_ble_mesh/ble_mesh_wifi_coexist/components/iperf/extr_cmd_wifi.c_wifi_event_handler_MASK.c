
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;



 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_5, esp_event_base_t VAR_6,
                                int32_t VAR_7, void* VAR_8)
{
    switch (VAR_7) {
    case 130:
        FUNC_2();
        FUNC_0(VAR_2, "sta scan done");
        break;
    case 129:
        FUNC_0(VAR_2, "L2 connected");
        break;
    case 128:
        if (VAR_3) {
            FUNC_0(VAR_2, "sta disconnect, reconnect...");
            FUNC_1();
        } else {
            FUNC_0(VAR_2, "sta disconnect");
        }
        FUNC_3(VAR_4, VAR_0);
        FUNC_4(VAR_4, VAR_1);
        break;
    default:
        break;
    }
    return;
}
