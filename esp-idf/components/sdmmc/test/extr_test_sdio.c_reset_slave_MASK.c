
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pin_bit_mask; int mode; } ;
typedef TYPE_1__ gpio_config_t ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    const int VAR_2 = 18;
    const int VAR_3 = 19;
    gpio_config_t VAR_4 = {
            .pin_bit_mask = FUNC_0(VAR_2) | FUNC_0(VAR_3),
            .mode = VAR_0,
    };
    FUNC_1(FUNC_2(&VAR_4));
    FUNC_3(VAR_2, 0);
    FUNC_3(VAR_3, 0);
    FUNC_4(10 / VAR_1);
    FUNC_3(VAR_2, 1);
    FUNC_4(10 / VAR_1);
    FUNC_3(VAR_3, 1);
}
