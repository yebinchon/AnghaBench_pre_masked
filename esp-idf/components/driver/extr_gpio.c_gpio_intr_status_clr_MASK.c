
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpio_num_t ;
struct TYPE_3__ {void* intr_st; } ;
struct TYPE_4__ {TYPE_1__ status1_w1tc; void* status_w1tc; } ;


 void* FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(gpio_num_t VAR_1)
{
    if (VAR_1 < 32) {
        VAR_0.status_w1tc = FUNC_0(VAR_1);
    } else {
        VAR_0.status1_w1tc.intr_st = FUNC_0(VAR_1 - 32);
    }
}
