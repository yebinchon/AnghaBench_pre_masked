
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int ,int *) ;

esp_err_t FUNC_2(esp_slave_context_t *VAR_2, uint8_t VAR_3)
{
    FUNC_0(VAR_1, "send_slave_intr: %02x", VAR_3);
    return FUNC_1(VAR_2, VAR_0+0, VAR_3, ((void*)0));
}
