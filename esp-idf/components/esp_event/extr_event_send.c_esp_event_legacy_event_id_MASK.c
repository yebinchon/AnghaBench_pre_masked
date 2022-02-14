
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int system_event_id_t ;
typedef int int32_t ;
typedef scalar_t__ esp_event_base_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static system_event_id_t FUNC_3(esp_event_base_t VAR_4, int32_t VAR_5)
{
    if (VAR_4 == VAR_3) {
        return FUNC_2(VAR_5);
    } else if (VAR_4 == VAR_0) {
        return FUNC_1(VAR_5);
    } else {
        FUNC_0(VAR_2, "invalid event base %s", VAR_4);
        return VAR_1;
    }
}
