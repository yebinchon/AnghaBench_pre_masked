
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int capture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,int *,int,int *) ;

void FUNC_3(void)
{
    FUNC_0("Testing MCPWM...\n");
    VAR_0 = FUNC_1(1, sizeof(capture));
    FUNC_2(VAR_1, "mcpwm_config", 4096, ((void*)0), 5, ((void*)0));
    FUNC_2(VAR_2, "gpio_test_signal", 4096, ((void*)0), 5, ((void*)0));
    FUNC_2(VAR_3, "mcpwm_example_config", 4096, ((void*)0), 5, ((void*)0));
}
