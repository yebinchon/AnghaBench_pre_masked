
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpio_num_t ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int in; TYPE_1__ in1; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(gpio_num_t VAR_1)
{
    if (VAR_1 < 32) {
        return (VAR_0.in >> VAR_1) & 0x1;
    } else {
        return (VAR_0.in1.data >> (VAR_1 - 32)) & 0x1;
    }
}
