
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_1__* (* get_address ) () ;} ;
struct TYPE_3__ {int const* address; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;

const uint8_t *FUNC_3(void)
{
    if (FUNC_1() != VAR_0) {
 return ((void*)0);
    }
    return FUNC_0()->get_address()->address;
}
