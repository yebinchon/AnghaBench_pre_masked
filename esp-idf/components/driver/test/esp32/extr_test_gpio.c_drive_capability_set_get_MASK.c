
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int gpio_drive_cap_t ;
typedef int gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(gpio_num_t VAR_2, gpio_drive_cap_t VAR_3)
{
    gpio_config_t VAR_4 = FUNC_6(VAR_2);
    FUNC_2(FUNC_3(&VAR_4));
    FUNC_0(FUNC_5(VAR_2, VAR_1) == VAR_0);

    gpio_drive_cap_t VAR_5;
    FUNC_2(FUNC_5(VAR_2, VAR_3));
    FUNC_2(FUNC_4(VAR_2, &VAR_5));
    FUNC_1(VAR_5, VAR_3);
}
