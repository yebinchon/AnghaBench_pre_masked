
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long pin_bit_mask; int pull_up_en; int pull_down_en; int mode; int intr_type; } ;
typedef TYPE_1__ gpio_config_t ;


 unsigned long long VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (unsigned long long) ;
 int VAR_6 ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(void)
{
    gpio_config_t VAR_7;
    VAR_7.intr_type = VAR_2;
    VAR_7.mode = VAR_1;
    VAR_7.pin_bit_mask = (1ULL << VAR_0);
    VAR_7.pull_down_en = VAR_3;
    VAR_7.pull_up_en = VAR_4;
    FUNC_1(&VAR_7);

    FUNC_0(VAR_5, "Diagnostics (5 sec)...");
    FUNC_4(5000 / VAR_6);

    bool VAR_8 = FUNC_2(VAR_0);

    FUNC_3(VAR_0);
    return VAR_8;
}
