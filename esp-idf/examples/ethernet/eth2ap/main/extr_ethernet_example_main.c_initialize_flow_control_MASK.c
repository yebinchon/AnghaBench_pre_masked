
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flow_control_msg_t ;
typedef int esp_err_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,char*,int,int *,scalar_t__,int *) ;

__attribute__((used)) static esp_err_t FUNC_3(void)
{
    VAR_5 = FUNC_1(VAR_2, sizeof(flow_control_msg_t));
    if (!VAR_5) {
        FUNC_0(VAR_3, "create flow control queue failed");
        return VAR_0;
    }
    BaseType_t VAR_8 = FUNC_2(VAR_4, "flow_ctl", 2048, ((void*)0), (VAR_7 + 2), ((void*)0));
    if (VAR_8 != VAR_6) {
        FUNC_0(VAR_3, "create flow control task failed");
        return VAR_0;
    }
    return VAR_1;
}
